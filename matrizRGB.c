#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mat[4][4][3]= {0},r[4][4],g[4][4],b[4][4],media[4][4],l=0,somaR=0,somaB=0,somaG=0,maiorpixel=0,somapixel=0,imaior=0,jmaior=0;
    float porcen, mediaR=0, mediaG=0,mediaB=0;
    srand(time(NULL));
    printf("**** Imagem colorida (4x4):\n\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            l++;

            for (int k = 0; k < 3; k++)
            {
                mat[i][j][k]=0 + (rand() % (255 - 0 + 1));

            }

            r[i][j]= mat[i][j][0];
            g[i][j]= mat[i][j][1];
            b[i][j]= mat[i][j][2];
            somaR+=r[i][j];
            somaG+=g[i][j];
            somaB+=b[i][j];
            media[i][j] = (float)(r[i][j]+g[i][j]+b[i][j])/3;
            somapixel = r[i][j]+g[i][j]+b[i][j];
            if (maiorpixel<somapixel)
            {
                maiorpixel=somapixel;
                imaior=i;
                jmaior=j;
            }

            printf("(%d, %d, %d)\t",r[i][j],g[i][j],b[i][j]);
        }
        printf("\n");
    }
    mediaR = (float)somaR/ 16;
    mediaG = (float)somaG/ 16;
    mediaB = (float)somaB/ 16;
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

