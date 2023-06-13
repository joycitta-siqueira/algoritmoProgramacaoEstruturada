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
void consultar(cad * pessoas);
cad* editar(cad * pessoas);
cad* remover(cad * pessoas);
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
		case 2: consultar(pessoas); break;
		case 3: listar(pessoas); break;
	 	case 4: pessoas=remover(pessoas); break;
	 	case 5: pessoas=editar(pessoas); break;
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
	printf("2- Consultar\n");
	printf("3- Listar\n");
	printf("4- Remover\n");
	printf("5- Editar\n");
	printf("0- Sair\n");
	printf("Digite a opção desejada: ");
}
//função para inicialização da lista do tipo pesssoa
cad* inicializar(){
	return NULL; // a constante NULL é parte da biblioteca <stdlib.h> 
}

//função para inserção de novos produtos
cad* inserir(cad* pessoas){
	cad* novo = (cad*) malloc(sizeof(pessoas));
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

//função de busca dentre os produtos cadastrados
void consultar(cad* pessoas){
    cad *auxiliar;
	int codigo, cont=0, tamanhoLista=0;
	printf("------------Consulta por codigo-------------------\n");
	printf("Digite o código do cad: ");
	scanf("%d",&codigo);

	for(auxiliar=pessoas;auxiliar!=NULL;auxiliar=auxiliar->proximo){
		tamanhoLista++;
	   if(auxiliar->codigo==codigo){
        	printf("Codigo: %d\t",auxiliar->codigo);
			printf("Nome: %s\n",auxiliar->nome);
        	break;
       } else cont++;
    }
    if (tamanhoLista==cont){
    	 printf("\nPessoa não cadastrada!\n\n");
	}
}

//função para remoção de produtos do pessoas

cad* remover(cad *pessoas){

	cad* anterior;  //ponteiro que guarda a posição anterior
 	cad* auxiliar; //lista auxiliar para busca do cad
	int codigo;
	printf("------------Remoção de Cadastro de Pessoa--------------------\n");
	printf("Digite o código do cadastro: ");
 	scanf("%d",&codigo);

	//procura o cad da lista e guarda referencia para o anterior
	for(anterior=NULL,auxiliar=pessoas;auxiliar!=NULL&&auxiliar->codigo!=codigo;anterior=auxiliar,auxiliar=auxiliar->proximo){

	}

	//verifica se encontrou o cad
	if(auxiliar==NULL){
        printf("\nPessoa não cadastrado!");
		return pessoas;
	}

	//retira elemento do inicio da lista
	if(anterior==NULL){
		pessoas=auxiliar->proximo;
		free(auxiliar);
	}
	
	//retira elemento do meio da lista
	else{
		anterior->proximo=auxiliar->proximo;
		free(auxiliar);
	}
	printf("\nPessoa removida!\n");
	return pessoas;
}


cad * editar(cad* pessoas){
    cad *auxiliar;
	int codigo, cont=0, tamanhoLista=0;
	printf("------------Consulta por codigo-------------------\n");
	printf("Digite o código do cad: ");
	scanf("%d",&codigo);

	for(auxiliar=pessoas;auxiliar!=NULL;auxiliar=auxiliar->proximo){
		tamanhoLista++;
	   if(auxiliar->codigo==codigo){
			printf("Digite o nome: ");
			fflush(stdin);
			gets(auxiliar->nome);
        	break;
       } else cont++;
    }
    if (tamanhoLista==cont){
    	 printf("\nPessoa não cadastrada!\n\n");
	}
	return pessoas;
}





