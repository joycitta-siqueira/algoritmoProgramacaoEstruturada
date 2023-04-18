/*Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de
ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois termos
anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34*/


#include <stdio.h>

int main(){
   int n, i, fib1 = 1, fib2 = 0, soma;       

    do{
        printf("Digite o termo desejado:\n");
        scanf("%d", &n);
        if (n<1)
            printf("Valor invalido! Digite um numero maior que zero!\n");
    } while (n<1);

    printf("%d\n%d\n", fib2, fib1);
    
    for (i=3; i<=n; i++){                                        
        soma = fib1 + fib2; 
        printf("%d\n", soma);                   
        fib2 = fib1;                           
        fib1 = soma;     
    }
    

    
    return 0;
 }