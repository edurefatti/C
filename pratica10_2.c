#include <stdio.h>
#include <string.h>
#define MAX 101
int remove_vogais(char str1[MAX], char str2[MAX])
{
    int qntd=0,acc=0,i=0;
    for (i; str1[i]!='\0'; i++)
    {
        if ((str1[i]!= 'A')
                && (str1[i]!= 'a')
                && (str1[i]!= 'E')
                && (str1[i]!= 'e')
                && (str1[i]!= 'I')
                && (str1[i]!= 'i')
                && (str1[i]!= 'O')
                && (str1[i]!= 'o')
                && (str1[i]!= 'U')
                && (str1[i]!= 'u'))
        {
            str2[acc] = str1[i];
            acc++;




        }
        else
            qntd++;
    }
 str2[acc] = '\0';
    return qntd;
}

int main()
{
    char str1[MAX];
    char str2[MAX];
    int qntd;
    printf("Entre uma string:");
    gets(str1);
    remove_vogais(str1,str2);
    qntd = remove_vogais(str1,str2);
    printf("String sem vogais:");
    for (int i=0; str2[i]!='\0'; i++)
    {
        printf("%c",str2[i]);
    }
    printf("\nQuantidade de vogais removidas: %d\n",qntd);




    return 0;
}

