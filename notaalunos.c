#include<stdio.h>

int main ()
{
    int tam, alunos, maior = 0;
    float pesoquestao, media, somanota=0;
    printf("Digite a quantidade de alunos:\n");
    scanf("%d", &alunos);
    printf("Digite a quantidade de questoes na prova:\n");
    scanf("%d", &tam);
    pesoquestao = (float) 10 / tam;
    float nota[alunos];
    char gabarito[tam],respostas[tam];
    for (int i = 0; i < alunos; i++)
    {
        nota[i] = 0;
    }
    printf("\nDigite o gabarito(a,b,c,d ou e):\n");
    for (int i = 0; i < tam; i++)
    {
        scanf(" %c", &gabarito[i]);
        if (gabarito[i] < 'a' || gabarito[i] > 'e')
        {
            printf("Caractere '%c' invalido. Use apenas a, b, c, d ou e.\n", gabarito[i]);
            return 0;

        }
    }
    for (int i = 0; i < alunos; i++)
    {
        printf("Digite as respostas do %d aluno: ", i + 1);
        for (int j = 0; j < tam; j++)
        {
            scanf(" %c", &respostas[j]);
            if (respostas[j] < 'a' || respostas[j] > 'e')
            {
                printf("Caractere '%c' invalido. Use apenas a, b, c, d ou e.\n", respostas[j]);
                return 0;
            }
            if (respostas[j] == gabarito[j])
                nota[i]+= pesoquestao;



        }
        printf("Respostas do %d aluno:", i + 1);
        for (int k = 0; k < tam; k++) //For para imprimir as respostas do aluno, sua nota e se foi aprovado ou nao.
            printf("\t%d. %c",k + 1, respostas[k]);
        printf("\nNota do %d aluno: %.2f\n", i + 1, nota[i]);
        if (nota[i] >= 7) //Media da prova eh 7
            printf("Aluno %d aprovado.\n", i + 1);
        else
            printf("Aluno %d reprovado.\n", i + 1);
        somanota+=nota[i];
    }
    media = (float) somanota/alunos; //Calcula a media das notas de todos os alunos
    printf("\nMedia de notas: %.2f", media);
    return 0;
}

