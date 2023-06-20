#include<stdio.h>
#include<locale.h>
#include <cstdlib>
#include<string.h>

// estrutura para a criação da lista
typedef struct lista lista;
struct lista{
	int codigo;
	lista *proximo;//ponteiro do tipo 
}; 

//declaração das funções
lista* inicializar(); 
lista* inserir(lista*);
void relatorio(lista*);


main(){



lista* listaCodigos;
listaCodigos = inicializar(); 


 listaCodigos=inserir(listaCodigos); 
relatorio(listaCodigos); 


}

//função para inicialização da lista do tipo produto
lista* inicializar(){
	return NULL; 
}


lista* inserir(lista* listaCodigos){
	lista* novo = (lista*) malloc(sizeof(listaCodigos));
	printf("\n Digite o código:");
	scanf("%d",&novo->codigo);
	fflush(stdin);
	printf("\n\n");
	novo->proximo=listaCodigos;
	return novo;
}

// função para listar os produtos cadastrados
void relatorio(lista* listaCodigos){
	for(listaCodigos;listaCodigos!=NULL;listaCodigos=listaCodigos->proximo)
		printf("Código: %d\n",listaCodigos->codigo);
}


