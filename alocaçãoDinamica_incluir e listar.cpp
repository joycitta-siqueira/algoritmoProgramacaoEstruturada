#include<stdio.h>
#include<locale.h>//biblioteca para configuração do idioma
#include <stdlib.h> //bibliteca para alocação dinâmica
#include<string.h>

// estrutura para a criação da lista, formada por produtos.
typedef struct cadastro cad; //define o tipo cadastro como "cad"
struct cadastro{ //criação do struct que será o tipo de dado usado na lista
	int codigo; //este cadastro tem dois campos, nome e salário, mas podem ser inseridos quantos campos forem necessários
	char nome[50];
	cad *proximo; //por ser uma lista encadeada, obrigatoriamente é necessário incluir o endereço (ponteiro) do próximo objeto da lista.
} *pessoas; //declaração da lista *pessoas;

//declaração das funções
cad* inicializar(); 
cad* inserir(cad * pessoas);
void listar(cad * pessoas);
void menu();

int main(){
setlocale(LC_ALL,"Portuguese");//configuração do idioma
system("color fc"); //muda a cor de fundo do prompt de comando
int opcao;
pessoas = inicializar(); //inicializa a lista vazia
	do{
	menu();
	scanf("%d",&opcao);
	switch(opcao){
		case 1: pessoas=inserir(pessoas); break;
		case 2: listar(pessoas); break;
		case 0: return 0; //finaliza o programa
		default: printf("\nOpção inválida!\n\n");
  	}
	printf("Deseja realizar outra operacao: 1 - Sim: ");
	scanf("%d",&opcao);
	}while (opcao==1);
	
	system("cls"); //limpa a tela
return 0;
}

void menu(){
	printf("1- Cadastrar\n");
	printf("2- Listar\n");
	printf("0- Sair\n");
	printf("Digite a opção desejada: ");
}
//função para inicialização da lista do tipo pesssoa
cad* inicializar(){
	return NULL; // a constante NULL é parte da biblioteca <stdlib.h> 
}

//função para inserção de novos produtos
cad* inserir(cad* pessoas){
	cad* novo = (cad*) malloc(sizeof(pessoas)); //aloca espaço na memória do tamanho do struct pessoas
	printf("-------------Cadastro de Pessoa-------------------\n");
	printf("Digite o código: ");
	scanf("%d",&novo->codigo);
	fflush(stdin);
	printf("Digite o nome: ");
	gets(novo->nome);
	fflush(stdin);
	novo->proximo=pessoas;
	return novo;
}

// função para listar os produtos cadastrados
void listar(cad* pessoas){
	cad* auxiliar;
	int i;
	printf("------------Lista de pessoas------------------\n");
	for(auxiliar=pessoas;auxiliar!=NULL;auxiliar=auxiliar->proximo){
		printf("Codigo: %d\t",auxiliar->codigo);
		printf("Nome: %s\n",auxiliar->nome);
	}
}


