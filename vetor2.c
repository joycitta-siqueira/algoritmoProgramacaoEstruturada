//Altere o algoritmo anterior considerando que não se conhece quantos alunos 
//esta turma tem (menos que 50). 
//O número de aluno será informado pelo usuário.

#include<stdio.h>
int main(){
   // float notas[50];
    int i, nAlunos;

    printf("Digite a quantidade de alunos:\n");
    scanf("%d", &nAlunos); //3 alunos 

    float notas[nAlunos];

    printf("impressao de vetor antes de receber os dados\n");
    for(i=0; i<nAlunos; i++){
        printf("%f\n", notas[i]);
        printf("%x\n", &notas[i]);
    }

    printf("Recebendo os dados\n");
    for(i=0; i<nAlunos; i++){
        printf("Digite a nota:\n");
        scanf("%f\n", &notas[i]);
        printf("%x\n", &notas[i]);
    }
    printf("Imprimindo os dados recebiso\n");
    for(i=0; i<nAlunos; i++){
        printf("%f\n", notas[i]);
        printf("%x\n", &notas[i]);
    }








}