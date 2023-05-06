//Função => passagem de parametro por referencia
/*
Implemente um algoritmo que:
inclua 4 usuários;
imprima os usuários;

Codigo (int)
Nome (string)
1 - Joyce Siqueira
2 - Luzia Munis
3 - Erick Daniel
*/
#include<stdio.h>
void preencherUsuario (int *codigo, char *nome){
    int i;
    for(i=0;i<4;i++){
        printf("Digite o ID");
        scanf("%d", &codigo[i]);
        printf("Digite o nome:");
        scanf("%s", &nome[i]);
    }
}
int main(){
    int codigo[4], i;
    char nome[30][4]; //declaração de vetor de strings
    preencherUsuario(codigo, nome);
    for(i=0;i<4;i++){
        printf("%d - %s\n", codigo[i], nome[i]);
}

