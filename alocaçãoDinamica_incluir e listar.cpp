#include<stdio.h>
#include<locale.h>//biblioteca para configura��o do idioma
#include <stdlib.h> //bibliteca para aloca��o din�mica
#include<string.h>

// estrutura para a cria��o da lista, formada por produtos.
typedef struct cadastro cad; //define o tipo cadastro como "cad"
struct cadastro{ //cria��o do struct que ser� o tipo de dado usado na lista
	int codigo; //este cadastro tem dois campos, nome e sal�rio, mas podem ser inseridos quantos campos forem necess�rios
	char nome[50];
	cad *proximo; //por ser uma lista encadeada, obrigatoriamente � necess�rio incluir o endere�o (ponteiro) do pr�ximo objeto da lista.
} *pessoas; //declara��o da lista *pessoas;

//declara��o das fun��es
cad* inicializar(); 
cad* inserir(cad * pessoas);
void listar(cad * pessoas);
void menu();

int main(){
setlocale(LC_ALL,"Portuguese");//configura��o do idioma
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
		default: printf("\nOp��o inv�lida!\n\n");
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
	printf("Digite a op��o desejada: ");
}
//fun��o para inicializa��o da lista do tipo pesssoa
cad* inicializar(){
	return NULL; // a constante NULL � parte da biblioteca <stdlib.h> 
}

//fun��o para inser��o de novos produtos
cad* inserir(cad* pessoas){
	cad* novo = (cad*) malloc(sizeof(pessoas)); //aloca espa�o na mem�ria do tamanho do struct pessoas
	printf("-------------Cadastro de Pessoa-------------------\n");
	printf("Digite o c�digo: ");
	scanf("%d",&novo->codigo);
	fflush(stdin);
	printf("Digite o nome: ");
	gets(novo->nome);
	fflush(stdin);
	novo->proximo=pessoas;
	return novo;
}

// fun��o para listar os produtos cadastrados
void listar(cad* pessoas){
	cad* auxiliar;
	int i;
	printf("------------Lista de pessoas------------------\n");
	for(auxiliar=pessoas;auxiliar!=NULL;auxiliar=auxiliar->proximo){
		printf("Codigo: %d\t",auxiliar->codigo);
		printf("Nome: %s\n",auxiliar->nome);
	}
}


