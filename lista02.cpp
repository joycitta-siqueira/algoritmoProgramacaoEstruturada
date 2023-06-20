/*Crie uma estrutura para descrever restaurantes. Os membros devem armazenar o nome, o endereço, o preço médio e o tipo de comida. 
Crie uma lista simples encadeada e escreva um programa que utilize uma função para solicitar os dados de um elemento da lista e 
outra para listar todos os dados.*/
#include<stdio.h>
#include<stdlib.h>
typedef struct restaurante restaurantes; 
struct restaurante {
	char nome[20], endereco[100], tipoComida[50];
	double precoMedio;
	restaurantes *proximo; //ponteiro para lista encadeada
}; 

void menu();
restaurantes* inicializar();
restaurantes* inserir(restaurantes* cadastroRestaurantes);
void listarRestaurantes(restaurantes* cadastroRestaurantes);

int main(){
	int opcao, opcao1;
	restaurantes *cadastroRestaurantes;
	cadastroRestaurantes = inicializar();
	do{
	menu();
	scanf("%d", &opcao);
		switch(opcao){
			case 1: cadastroRestaurantes = inserir(cadastroRestaurantes); break;
			case 2: listarRestaurantes(cadastroRestaurantes); break;
			case 3: return 0;
			default: printf("Codigo invalido");
		}
	printf("Deseja realizar nova operacao? 1 - sim");
	scanf("%d", &opcao1);
	}while(opcao1==1);
	
}

void menu(){
	printf("\nMENU\n1. Cadastrar restaurante\n2. Listar restaurantes cadastrados\n3. Sair\n");
}

restaurantes* inicializar(){
	return NULL; 
}

restaurantes* inserir(restaurantes* cadastroRestaurantes){
	restaurantes * novo;
	novo = (restaurantes*) malloc (sizeof(cadastroRestaurantes));
	
	printf("Digite o nome do resturante");
	scanf("%s", &novo->nome);
	fflush(stdin);
	printf("Digite o endereco do resturante");
	scanf("%s", &novo->endereco);
	fflush(stdin);
	printf("Digite o tipo da comida servida pelo resturante");
	scanf("%s", &novo->tipoComida);
	fflush(stdin);
	printf("Digite o valor medio do cardapio");
	scanf("%lf", &novo->precoMedio);
	fflush(stdin);
	novo->proximo = cadastroRestaurantes;
	
	return novo;
}

void listarRestaurantes(restaurantes* cadastroRestaurantes){
	restaurantes* aux;
	if (cadastroRestaurantes != NULL){
		for (aux=cadastroRestaurantes;aux!=NULL;aux=aux->proximo){
			printf("Resturante: %s\t", aux->nome);
			printf("Endereco: %s\t", aux->endereco);
			printf("Tipo da comida servida: %s\t", aux->tipoComida);
			printf("Valor medio do cardapio: %.1lf\n", aux->precoMedio);
		}
	} else printf("Nenhum cadastro foi realizado\n");
}

