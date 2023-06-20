/*Para o controle dos ve�culos que circulam em uma determinada cidade, a Secretaria dos Transportes 
criou o seguinte registro padr�o:
Propriet�rio:__________________________ Combust�vel:____________________
Modelo: _____________________________ Cor: __________________________
N� chassi: _________________________ Ano: __________ Placa: ____________
Em que:
Combust�vel pode ser �lcool, diesel ou gasolina;
� Placa possui os tr�s primeiros valores alfab�ticos e os quatro restantes valores num�ricos.
Sabendo que n�o temos uma defini��o do n�mero m�ximo de ve�culos da cidade e que � preciso
armazenar todos os valores em uma lista encadeada simples, construa:
a. Uma fun��o que liste todos os propriet�rios cujos carros s�o do ano de 2010 ou posterior
e que sejam movidos a diesel.
b. Uma fun��o que liste todas as placas que comecem com a letra J e terminem com 0, 2, 4
ou 7 e seus respectivos propriet�rios.
c. Uma fun��o que liste o modelo e a cor dos ve�culos cujas placas possuem como segunda
letra uma vogal e cuja soma dos valores num�ricos fornece um n�mero par.
d. Uma fun��o que permita a troca de propriet�rio com o fornecimento do n�mero do chassi
apenas para carros com placas que n�o possuam nenhum d�gito igual a zero.*/

#include<stdio.h>
#include<locale.h>//biblioteca para configura��o do idioma
#include <stdlib.h> //bibliteca para aloca��o din�mica
#include<string.h>

typedef struct cadastro cad; 
struct cadastro{ 
char proprietario[20], combustivel[20], modelo[20], cor[20], nchassi[20], placaLetras[3], placaNumeros[4];
cad *proximo; 
}; 

cad* inicializar(); 
cad* inserir(cad* veiculos);
void listar1(cad* veiculos);
void listar2(cad* veiculos);
void listar3(cad* veiculos);
cad* trocar(cad* veiculos);
void menu();

int main(){
	cad *veiculos;
	int opcao;
	veiculos = inicializar();
	do{
	menu();
	scanf("%d",&opcao);
	switch(opcao){
		case 1: veiculos = inserir(veiculos); break;
		case 2: listar1(veiculos); break;
		case 3: listar2(veiculos); break;
	 	case 4: listar2(veiculos); break;
	 	case 5: veiculos = trocar(veiculos); break;
		case 0: return 0; //finaliza o programa
		default: printf("\nOp��o inv�lida!\n\n");
  	}
	printf("Deseja realizar outra operacao: 1 - Sim: ");
	scanf("%d",&opcao);
	}while (opcao==1);
	
	return 0;
}

void menu(){
	printf("1- Cadastrar\n");
	printf("2- Listar 1\n");
	printf("3- Listar 2\n");
	printf("4- Listar 3\n");
	printf("5- Trocar\n");
	printf("0- Sair\n");
	printf("Digite a op��o desejada: ");
}

cad* inicializar(){
	return NULL; 
}

cad* inserir(cad* veiculos){
	cad* novo = (cad*) malloc(sizeof(veiculos));

	printf("-------------Cadastro-------------------\n");
	
	printf("Digite o nome: ");
	fflush(stdin);
	fgets(novo->proprietario, 20, stdin);
	fflush(stdin);
	
	do{
	printf("Digite o combustivel: alcool, diesel ou gasolina\n");
	scanf("%s",&novo->combustivel);
	fflush(stdin);
	if (strcmp(novo->combustivel,"alcool")!=0 && strcmp(novo->combustivel,"gasolina")!=0 && strcmp(novo->combustivel,"diesel")!=0)
		printf("Combustivel invalido.\n");
	}while (strcmp(novo->combustivel,"alcool")!=0 && strcmp(novo->combustivel,"gasolina")!=0 && strcmp(novo->combustivel,"diesel")!=0);
	
	printf("Digite o modelo\n");
	scanf("%s",&novo->modelo);
	fflush(stdin);
	
	printf("Digite a cor\n");
	scanf("%s",&novo->cor);
	fflush(stdin);
	
	printf("Digite o chasse\n");
	scanf("%s",&novo->nchassi);
	fflush(stdin);
	
	printf("Digite as letras da placa\n");
	scanf("%s",&novo->placaLetras);
	fflush(stdin);
	
	printf("Digite os numeros da placa\n");
	scanf("%s",&novo->placaNumeros);
	fflush(stdin);
	
	novo->proximo=veiculos;
	return novo;
}

void listar1(cad * veiculos){
	cad* auxiliar;
	int i;
	printf("------------Lista de proprietario e chassi------------------\n");
	for(auxiliar=veiculos;auxiliar!=NULL;auxiliar=auxiliar->proximo){
		printf("Proprientario: %s\t",auxiliar->proprietario);
		printf("Chassi: %s\n",auxiliar->nchassi);
	}
}
void listar2(cad * veiculos){
	printf("listar2");
}
void listar3(cad * veiculos){
	printf("listar 3");
}
cad* trocar(cad * veiculos){
	cad *auxiliar;
	int cont=0, tamanhoLista=0;
	char nChassiBusca[20];
	printf("------------Consulta por Chassi-------------------\n");
	printf("------------Altera��o de propriet�rio-------------------\n");
	printf("Digite o n�mero do chassi: ");
	scanf("%s", &nChassiBusca);

	for(auxiliar=veiculos;auxiliar!=NULL;auxiliar=auxiliar->proximo){
		tamanhoLista++;
	   if(strcmp(auxiliar->nchassi,nChassiBusca)==0){
        	printf("Proprietario: %s\t",auxiliar->proprietario);
			printf("Digite o nome do novo proprietario: ");
			fflush(stdin);
			fgets(auxiliar->proprietario, 20, stdin);
			fflush(stdin);
        	break;
       } else cont++;
    }
    if (tamanhoLista==cont){
    	 printf("\nChassi n�o cadastrado!\n\n");
	}
	return auxiliar;
}
