/*
Crie um programa em C que leia o preço, o nome e as vendas de todos os dias de todos os produtos e 
armazene em uma lista encadeada simples. Depois percorra a estrutura de dados e verifique qual foi 
o produto que teve maior venda.
Ao final, mostre o nome e quantas unidades deste produto foram vendidas. 
A estrutura deve conter: código, nome, preço, baixa como uma matriz 4X6, onde o 4 representa as semanas 
e o 6 cada dia da semana (segunda a sábado)
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct venda vendas; 
struct venda {
	int codigo;
	char nome[20];
	double valor;
	int qtdVendasMensais[1][2]; 
	vendas *proximo; //ponteiro para lista encadeada
}; 

void menu();
vendas* inicializar(); 
vendas* inserir(vendas* vendasMes);
void produtoMaisVendido(vendas* vendasMes);

int main(){
	vendas* vendasMes;
	int opcao, opcao1;
	
	vendasMes = inicializar();
	
	do{
	menu();
	scanf("%d", &opcao);
		switch(opcao){
			case 1: vendasMes = inserir(vendasMes); break;
			case 2: produtoMaisVendido(vendasMes); break;
			case 3: return 0;
			default: printf("Codigo invalido");
		}
	printf("Deseja realizar nova operacao? 1 - sim");
	scanf("%d", &opcao1);
	}while(opcao1==1);
}

void menu(){
	printf("\nMENU\n1. Inserir vendas da semana\n2. Verificar produto mais vendido\n3. Sair\n");
}

vendas* inicializar(){
	return NULL; 
}


vendas* inserir(vendas* vendasMes){ 
	int i, j;
	vendas* novo = (vendas*) malloc(sizeof(vendasMes)); // espaço na memória é alocado dinâmicamente

	printf("Digite o codigo do produto:");
	scanf("%d", &novo->codigo);
	fflush(stdin);
	
	printf("Digite o nome do produto:");
	scanf("%s", &novo->nome);
	fflush(stdin);
	
	printf("Digite o valor do produto:");
	scanf("%lf",&novo->valor);
	fflush(stdin);
	
	for (i=0;i<1;i++){ //coloquei valores menores para teste, mas o exercicio pede 4x6
		for(j=0;j<2;j++){
			printf("Digite as vendas %d-%d\n", ++i, ++j);
			scanf("%d", &novo->qtdVendasMensais[i][j]);
		}
	}
	
	novo->proximo=vendasMes;
	
	return novo; //retorna o item da lista preenchido
}


void produtoMaisVendido(vendas* vendasMes){
	int soma, i, j, maiorVendas=0, codigoMaiorVenda;
	vendas *aux;
	if (vendasMes == NULL){
		printf("Nao foram realizadas vendas\n");
	} else {
	for(aux=vendasMes;aux!=NULL;aux=aux->proximo){ //percorrer lista
		soma = 0;
		for (i=0;i<1;i++){ //coloquei valores menores para teste, mas o exercicio pede 4x6
			for(j=0;j<2;j++){
				soma = soma + aux->qtdVendasMensais[i][j];//soma das vendas da semana
				}
		}
		if (soma > maiorVendas){
			maiorVendas = soma;
			codigoMaiorVenda = aux->codigo;
		}
}

printf("PRODUTO MAIS VENDIDO----------------------\n");
	for(aux=vendasMes;aux!=NULL;aux=aux->proximo){
		if(codigoMaiorVenda == aux->codigo){
			printf("Codigo: %d\n",aux->codigo);
			printf("Nome: %s\n",aux->nome);
			printf("Quantidade de vendas: %d\n", maiorVendas);
		}
	}
}
}



