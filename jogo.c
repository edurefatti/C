#include <stdio.h>
void simulaJogo(float *vida, float valor, char acao)
{
    switch (acao)
    {
    case 'C':
        *vida = (float)*vida + valor;
        printf("Nova vida: %.2f\n", *vida);
        break;
    case 'D':
        *vida = (float)*vida - valor;
        printf("Nova vida: %.2f\n", *vida);
        break;
    case 'B':
        *vida = (float)*vida * 1.05;
        printf("Nova vida: %.2f\n", *vida);

        break;
    case 'V':
        *vida = (float)*vida * 0.98;
        printf("Nova vida: %.2f\n", *vida);

        break;
    default:
        printf("Acao invalida!");




    }
}
int main()
{
    float vd,val=0;
    char ac, opcao;

    printf("Digite a vida inicial do personagem:");

    scanf("%f",&vd);
    do
    {
        printf("Escolha a acao:\nC - Cura\nD - Dano\nB - Bonus de armadura\nV - Veneno\nAcao: ");
        scanf(" %c", &ac);
        if ((ac == 'C') || (ac == 'D'))
        {
            printf("Digite o valor: ");
            scanf("%f",&val);
            simulaJogo(&vd,val,ac);
        }
        else
            simulaJogo(&vd,val,ac);
        printf("Realizar mais uma acao? ");
        scanf(" %c",&opcao);
    }
    while (opcao != 'N');







    return 0;
}
