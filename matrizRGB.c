#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//O programa gera uma imagem colorida representada por uma matriz 3D de inteiros de dimensão 4 x 4 x 3. A imagem possui 16 pixels (4x4) e cada pixel possui os valores dos canais RGB (vermelho, verde e azul).
//Gera os valores dos canais R, G e B de cada pixel com números aleatórios no intervalo [0, 255]
// Calcula e imprime a média de intensidade de cada canal (R, G e B) separadamente.
//Calcula e imprime a imagem em escala de cinza, considerando que o valor de cada pixel em tons de cinza é dado pela média aritmética de suas componentes R, G e B. //
int main()
{
    int mat[4][4][3]= {0},r[4][4],g[4][4],b[4][4],media[4][4],l=0,somaR=0,somaB=0,somaG=0,maiorpixel=0,somapixel=0,imaior=0,jmaior=0;
    float porcen, mediaR=0, mediaG=0,mediaB=0;
    srand(time(NULL)); //Define a seed dos numeros aleatorios para o tempo em segundos desde 1970, assim a seed nunca se repetira.
    printf("**** Imagem colorida (4x4):\n\n");
    for (int i = 0; i < 4; i++) // Sequencia de 3 "for" para definir a matriz 3D
    {
        for (int j = 0; j < 4; j++)
        {

            l++;

            for (int k = 0; k < 3; k++)
            {
                mat[i][j][k]=0 + (rand() % (255 - 0 + 1)); //Formula para gerar um numero aleatorio entre 0 e 255 para os campos R, G e B

            }
//Agora o programa vai definir cada R, G e B (matrizes 4x4) com um numero aleatorio e adicionar na soma total, que vai ajudar a calcular a media de cada um mais pra frente, alem de calcular a media do pixel.
            r[i][j]= mat[i][j][0]; 
            g[i][j]= mat[i][j][1];
            b[i][j]= mat[i][j][2];
            somaR+=r[i][j];
            somaG+=g[i][j];
            somaB+=b[i][j];
            media[i][j] = (float)(r[i][j]+g[i][j]+b[i][j])/3;
            somapixel = r[i][j]+g[i][j]+b[i][j];
            if (maiorpixel<somapixel) //Condicional que guarda o valor da soma de R, G e B(intensidade) e a posicao do pixel mais brilhante
            {
                maiorpixel=somapixel;
                imaior=i;
                jmaior=j;
            }

            printf("(R:%d, G:%d, B:%d)\t",r[i][j],g[i][j],b[i][j]); // Esse printf imprime todos os 16 pixels com seus respectivos R,G e B.
        }
        printf("\n"); // Separa as linhas da matriz com um "enter" apos o fim de cada linha
    }
    // Agora, o programa calculara a media de todos os R, G e b de todos os pixel da matriz.
    mediaR = (float)somaR/ 16;
    mediaG = (float)somaG/ 16;
    mediaB = (float)somaB/ 16;
    //Esses printf imprimem a medias dos canais R, G e B, o pixel mais brilhante e sua posicao e a imagem(matriz) em escala cinza, a partir do loop de dois "for".
    printf("\n**** Media dos canais:\n R:%.2f\n G:%.2f\n B:%.2f",mediaR, mediaG,mediaB);
    printf("\n\n**** Pixel mais brilhante: posicao (%d,%d), intensidade = %d",imaior,jmaior,maiorpixel);
    printf("\n\n**** Imagem em escala de cinza:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d\t",media[i][j]);
        }
        printf("\n");
    }
    return 0;
}

