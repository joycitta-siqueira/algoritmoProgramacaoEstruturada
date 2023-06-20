//ALOCA��O DIN�MICA - LISTA ENCADEADA SIMPLES
//https://www.ime.usp.br/~pf/algoritmos/aulas/lista.html
#include<stdio.h>
#include<stdlib.h>
#include <stdlib.h>
typedef struct cadastro cad; //define o tipo cadastro como "cad"
struct cadastro{ //cria��o do struct que ser� o tipo de dado usado na lista
	char nome[20]; //este cadastro tem dois campos, nome e sal�rio, mas podem ser inseridos quantos campos forem necess�rios
	double salario;
	cad *proximo; //por ser uma lista encadeada, obrigatoriamente � necess�rio incluir o endere�o (ponteiro) do pr�ximo objeto da lista.
} *contatos;

cad *inicializar();//fun��o para iniciar a lista. Esta fun��o faz com que a lista receba NULL, ou seja, vazia. 
void inserir(cad *contatos);//fun��o para inserir objetos na lista.
void listar (cad *contatos);

int main(){
	inicializar();
	inserir(contatos);
	listar(contatos);
	inserir(contatos);
	listar(contatos);
}

cad *inicializar(){
	return NULL;
}

void inserir(cad *contatos){
   cad *novo;
   novo = (cad*) malloc (sizeof (contatos));
   printf("Digite o nome");
   scanf("%s", &novo->nome);
   printf("Digite o salario");
   scanf("%lf", &novo->salario);
   novo->proximo = contatos->proximo;
   contatos->proximo = novo;

}

void listar(cad *contatos){
	cad* auxiliar;
	int i;
	printf("------------Lista ------------------\n");
	for(auxiliar=contatos;auxiliar!=NULL;auxiliar=auxiliar->proximo){
		printf("Nome: %s\t",auxiliar->nome);
		printf("Salario: %s\n",auxiliar->salario);
	}
}
