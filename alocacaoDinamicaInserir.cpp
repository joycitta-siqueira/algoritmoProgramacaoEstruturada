#include<stdio.h>
#include<locale.h>
#include <cstdlib>
#include<string.h>

// estrutura para a cria��o da lista
typedef struct lista lista;
struct lista{
	int codigo;
	lista *proximo;//ponteiro do tipo 
}; 

//declara��o das fun��es
lista* inicializar(); 
lista* inserir(lista*);
void relatorio(lista*);


main(){



lista* listaCodigos;
listaCodigos = inicializar(); 


 listaCodigos=inserir(listaCodigos); 
relatorio(listaCodigos); 


}

//fun��o para inicializa��o da lista do tipo produto
lista* inicializar(){
	return NULL; 
}


lista* inserir(lista* listaCodigos){
	lista* novo = (lista*) malloc(sizeof(listaCodigos));
	printf("\n Digite o c�digo:");
	scanf("%d",&novo->codigo);
	fflush(stdin);
	printf("\n\n");
	novo->proximo=listaCodigos;
	return novo;
}

// fun��o para listar os produtos cadastrados
void relatorio(lista* listaCodigos){
	for(listaCodigos;listaCodigos!=NULL;listaCodigos=listaCodigos->proximo)
		printf("C�digo: %d\n",listaCodigos->codigo);
}


