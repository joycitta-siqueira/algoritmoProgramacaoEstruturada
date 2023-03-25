#include<stdio.h>
int main (){
    int idade;

    do{
        printf("Digite a idade:");
        scanf("%d",&idade);
        switch (idade){
            case 5 ... 7: printf("Infantil A\n"); break;
            case 8 ... 10: printf("Infantil B\n"); break;
            case 11 ... 13: printf("Juvenil A\n"); break;
            case 14 ... 17: printf("Juvenil B\n"); break;
            case 18 ... 100: printf("Senior\n"); break;
            default: printf ("Valor invalido!\n"); break;
        }
    }while(idade > 100 || idade < 5);

}