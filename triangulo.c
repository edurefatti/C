#include <stdio.h>
#define equilatero 1
#define isosceles 2
#define escaleno 3
#define naotriangulo 0
 /*apresenta o menu, lê e retorna a opção do usuário, não é necessário validar a opção */
int menu(void){
    int a;
printf("1 - Verificar se tres lados formam um triangulo\n2 - Classificar um triangulo pelo tamanho dos lados\n3 - Sair\nEscolha uma opção: ");
scanf("%d",&a);
return a;
}

/* lê três valores reais, verifica se eles podem formar um triângulo e retorna 1 se sim ou 0
caso contrário */
int forma_triangulo(void){
int p=0, maiorlado=0, lado[3]= {0},acc=0,menoreslados=0;
for (p;p<3;p++){
    printf("\nDigite o %d° lado: ", p+1);
    scanf("%d",&lado[p]);
    if (lado[p] > maiorlado)
        maiorlado = lado[p];
    acc+=lado[p];
}
menoreslados = acc - maiorlado;
if (maiorlado >= menoreslados)
    return 0;
else
    return 1;
}
/* lê três valores reais, classifica o triângulo pelo tamanho dos lados e retorna: 1 para
equilátero, 2 para isósceles, 3 para escaleno, 0 se os lados não formarem um triângulo */
int classifica_triangulo(void){
int p=0, q=0,maiorlado=0, lado[3],acc=0,menoreslados=0, segmaiorlado,menorlado = 9999999;
for (p;p<3;p++){
    printf("\nDigite o %d° lado: ", p+1);
    scanf("%d",&lado[p]);
    if (lado[p] > maiorlado)
        maiorlado = lado[p];
    acc+=lado[p];}
    menoreslados = acc - maiorlado;
if (maiorlado >= menoreslados)
    return 0;
else {


if ((lado[0] == lado[1]) && (lado[1] == lado[2]))
    return equilatero;
else if ((lado[0] != lado[1]) && (lado[1] != lado[2]) && (lado[0] != lado[2]))
    return escaleno;
else
    return isosceles;
}
}


int main(){
    int menuv, classificav, formav;

do {menuv=menu();

if (menuv == 1){
    formav = forma_triangulo();
    if (formav == 0)
        printf("Os lados informados nao formam um triangulo.\n");
    else
         printf("Os lados informados formam um triangulo.\n");
}
else if (menuv == 2){
    classificav=classifica_triangulo();
    if (classificav == 0)
        printf("Os lados informados nao formam um triangulo.\n");
        else if (classificav == escaleno)
            printf("Triangulo escaleno.\n");
            else if (classificav == isosceles)
                printf("Triangulo isosceles.\n");
                else
                    printf("Triangulo equilatero.\n");




}

}
while (menuv != 3);
}
