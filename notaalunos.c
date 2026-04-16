#include<stdio.h>
#define tam 10
#define alunos 3
int main (){
    int maior = 0, nota[tam]={0},somanota=0;
    char gabarito[tam],respostas[tam];
    float media;
    printf("Digite o gabarito(a,b,c,d ou e):\n");
for (int i = 0; i < tam; i++){
    scanf(" %c", &gabarito[i]);
    if (gabarito[i] < 'a' || gabarito[i] > 'e') {
            printf("Caractere '%c' invalido! Use apenas a, b, c, d ou e.\n", gabarito[i]);
            return 0;

    }
}
for (int i = 0; i < alunos; i++){
 printf("Digite as respostas do %d aluno: ", i + 1);
 for (int j = 0; j < tam; j++){
        scanf(" %c", &respostas[j]);
         if (respostas[j] < 'a' || respostas[j] > 'e'){
         printf("Caractere '%c' invalido! Use apenas a, b, c, d ou e.\n", respostas[j]);
            return 0;
         }
 if (respostas[j] == gabarito[j])
    nota[i]++;



 }
 printf("Respostas do %d aluno:", i + 1);
 for (int k = 0; k < tam; k++)
    printf("\t%d. %c",k + 1, respostas[k]);
    printf("\nNota do %d aluno: %d\n", i + 1, nota[i]);
somanota+=nota[i];
}
media = (float) somanota/alunos;
printf("\nMedia de notas: %.2f", media);
return 0;
}
