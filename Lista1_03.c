/*
Faça um algoritmo que leia um numero inteiro, dois números reais (um float, com 3
casas depois da vírgua, e um double), um caracter (uma única letra), uma string
(conjunto de caracteres) e um endereço de memória, em hexadecimal. Na
sequência, imprima todos com a formatação abaixo.
*/

#include<stdio.h>
int main(){dsfsdf
    int numeroInteiro;
    float numeroRealFloat;
    double numeroRealDouble;
    char umaLetra;
    char umaString[100];

    scanf("%d", &numeroInteiro);
    scanf("%f", &numeroRealFloat);
    scanf("%lf", &numeroRealDouble);
    scanf("%c", &umaLetra);
    
    scanf("%s", &umaString);
    gets(umaString);
    fgets(umaString, 100, stdin);

    printf("%3d: Inteiro\n", numeroInteiro);
    printf("Float: %.3f\n", numeroRealFloat);
    printf("Double: %.1lf\n", numeroRealDouble);
    printf("Char: %c\n", umaLetra);
    printf("String: %s\n", umaString);
    printf("Endereco do Inteiro %x", &numeroInteiro);


}