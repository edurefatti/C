#include <stdio.h>
#include <time.h>
#define Mmax 20
#define Nmax 20
void recebemat( int M, int N, int mat[Mmax][Nmax], int *min,int *max){
    srand(time(NULL));
    for(int i=0; i<M;i++){
        for (int j=0;j<N;j++){
            mat[i][j]=*min + (rand() % (*max - *min + 1));
    }

}
}
void imprimemat(int M, int N,int mat[Mmax][Nmax]){
    for(int i=0; i<M;i++){
        for (int j=0;j<N;j++){

            printf("%d\t",mat[i][j]);
    }
printf("\n");
}

}
void calculamat(int M, int N,int mat[Mmax][Nmax],int vet[], int *maior, int *tam){
    int k=0;
for(int i=0; i<M;i++){
        for (int j=0;j<N;j++){
           if (mat[i][j] > *maior){
            *maior = mat[i][j];

           }
    }

}
for(int i=0; i<M;i++){
        for (int j=0;j<N;j++){
           if (( *maior % mat[i][j]) == 0){
            vet[k]=mat[i][j];
            k++;

           }
    }

}
*tam = k;
}
int main(){
    int mat[Nmax][Mmax];
    int vet[400] = {0}, m, n, ini, fin, maior = 0, tam = 0;
    printf("Digite a quantidade de linhas m, entre 1 e 20: ");
    scanf("%d",&m);

    printf("\nDigite a quantidade de colunas n, entre 1 e 20: ");
    scanf("%d",&n);
    printf("\nDigite o valor inicial do intervalo: : ");
    scanf("%d",&ini);
    printf("\nDigite o valor final do intervalo: : ");
    scanf("%d",&fin);
    if (ini < fin){
    recebemat(m,n, mat, &ini,&fin);
    imprimemat(m,n,mat);
    calculamat(m,n,mat,vet,&maior,&tam);

    printf("Maior valor da matriz mat: %d", maior);
    printf("\nVetor mat com numeros da matriz que sao divisores do maior valor:\n ");
    for(int i=0;i < tam; i++){
        printf("%d ",vet[i]);

    }}
    else{
            printf("Invalido(valor inicial maior que final)");
        return 0;}
    return 0;
    }
