#include <stdio.h>
#include <math.h>
float maiorDistancia(float vetX[], float vetY[], int tamanho, int *index1, int *index2)
{
    float dist[100][100],maiord=0;
    for (int i=0; i<tamanho; i++)
    {
        for (int j=0; j<tamanho; j++)
        {
            dist[i][j]= sqrt((pow((vetX[i]-vetX[j]),2)+ pow((vetY[i]-vetY[j]),2)));
            if (maiord < dist[i][j])
            {
                *index1=i;
                *index2=j;
                maiord = dist[i][j];
            }
        }
    }
    return maiord;
}
int main()
{
    float vetX[100],vetY[100],dist;
    int index1,index2;
    int tamanho;
    printf("Informe quantos pontos serao:");
    scanf("%d",&tamanho);
    for (int i=0; i<tamanho; i++)
    {
        printf("Informe as coordenadas x e y do ponto %d: ", i+1);
        scanf("%f", &vetX[i]);
        scanf("%f",&vetY[i]);
    }
    dist = maiorDistancia(vetX,vetY,tamanho,&index1,&index2);
    printf("Os pontos (%.2f, %.2f) e (%.2f, %.2f) tem distancia %.2f!",vetX[index1],vetY[index1],vetX[index2],vetY[index2],dist);
    return 0;
}
