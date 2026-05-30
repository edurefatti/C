#include <stdio.h>
#define N 3
typedef struct produto
{
    int codigo;
    int quantidade;
    float preco;
} PRODUTO;
int main()
{
    PRODUTO prod[N],leitura[N];
    float estq[N],total = 0;
    FILE *arq;
    printf("Entre com %d produtos:\n",N);
    for (int i=0; i<N; i++)
    {
        printf("Produto %d\n", i+1);
        printf("Codigo:", i+1);
        scanf("%d", &prod[i].codigo);
        printf("Quantidade em estoque:", i+1);
        scanf("%d", &prod[i].quantidade);
        printf("Preco:", i+1);
        scanf("%f", &prod[i].preco);

    }
    printf("\nRelatorio dos produtos cadastrados:\n");
    printf("---------------------------------\n");
    printf("|Codigo\t|Quantidade\t|Preco\t|\n");
    printf("---------------------------------\n");
    for (int i=0; i<N; i++)
    {
        printf("|%d\t|%d\t\t|%.2f\t|\n",prod[i].codigo,prod[i].quantidade,prod[i].preco);
    }
    printf("---------------------------------\n");
    if (!(arq = fopen("produtos.bin","wb")))
        printf("Erro na abertura do arquivo.");
    else
    {
        if (!(fwrite(prod, sizeof(PRODUTO),N,arq)))
            printf("Erro na escrita!\n");

        fclose(arq);
    }
    if (!(arq = fopen("produtos.bin","rb")))
        printf("Erro na abertura do arquivo.");
    else
    {
        if (!(fread(leitura, sizeof(PRODUTO),N,arq)))
            printf("Erro na leitura!\n");

        fclose(arq);
    }
    printf("\nRelatorio dos produtos lidos do arquivo binario:\n");
    printf("-------------------------------------------------\n");
    printf("|Codigo\t|Quantidade\t|Preco\t|Total Estoque\t|\n");
    printf("-------------------------------------------------\n");
    for (int i=0; i<N; i++)
    {
        estq[i] = leitura[i].quantidade * leitura[i].preco;
        total += estq[i];
        printf("|%d\t|%d\t\t|%.2f\t|%.2f\t\t|\n",leitura[i].codigo,leitura[i].quantidade,leitura[i].preco,estq[i]);
    }
    printf("-------------------------------------------------\n");
    printf("Valor total geral do estoque: %.2f",total);
    return 0;
}
