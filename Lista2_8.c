/*
Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado
possui uma taxa diferente de imposto sobre o produto. Faça um programa em que o
usuário entre com o valor e o estado de destino do produto e o programa retorne o preço
final do produto acrescido do imposto do estado em que ele será vendido. Se o estado
digitado não for válido, mostrará uma mensagem de erro.
*/

#include<stdio.h>
#include<string.h> //biblioteca para manipulação de string strcmp()

int main(){
    float valor;
    char estado[2]; // MG SP MS 

    printf("Digite o valor da compra: ");
    scanf("%f", &valor);

    printf("Digite o Estado de origem: ");
    scanf("%s", &estado); //string - %s - switch case não aceita string

   // if (sexo == 'M')  => funciona - char 
   // if (estado == 'MG') => nao funciona - string

    //usar uma biblioteca de string

    if (strcmp(estado, 'MG') ==  0){
        printf("%f", valor + valor * 0.07);
        }
     else if (strcmp(estado, 'SP') ==  0) {
        valor = valor + valor * 0.1;
        }
        else if (strcmp(estado, 'MS') ==  0) {
            valor = valor + valor * 0.12;
        }
            else {
                printf("Erro");
            }





}