#include<stdio.h>
int main (){

int idade;

printf("Digite a idade:");
scanf("%d",&idade);

switch (idade){

case 5 ...7: printf("Infantil A");break;
case 8 ...10: printf("Infantil B");break;
case 11 ...13: printf("Juvenil A");break;
case 14 ...17: printf("Juvenil B");break;
case 18 ... 100: printf("Senior");break;

default: printf ("Ja morreu");break;
}
}