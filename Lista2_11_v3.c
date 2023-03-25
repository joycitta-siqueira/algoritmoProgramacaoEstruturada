#include<stdio.h>
int main(){
    int x, y, z, operacao;

    printf("Digite os tres valores: ");
    scanf("%d%d%d", &x, &y, &z);

    printf("Digite o operador: ");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1: 
        printf("Media Geometrica: %.1f\n", x * y * z);
        break;
    case 2:
        printf("Media Ponderada: %.1f\n", (x + 2 * y + 3 * z) / 6);
        break;
    case 3:
        printf("Media Harmonica: %.1f\n", 1 / (1/x + 1/y + 1/z));
        break;
    case 4:
        printf("Media simples: %.1f\n", (x + y + z) / 3);
        break;
    default: printf("Valor invalido!");
        break;
    }

    
   

}