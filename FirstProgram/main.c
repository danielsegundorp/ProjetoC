#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    float b;
    char operacao;

    printf("**********************Hello world!*******************************\n");
    printf("**********************Sejam Bem-Vindos****************************\n");
    printf("********Esse programa eh uma calculadora de soma de 2 numeros*******\n\n");
    printf("Digite o primeiro numero:  ");
    scanf("%f", &a);
    printf("Digite o primeiro numero:  ");
    scanf("%f", &b);
    printf("Selecione a operacao desejada:\n");
    printf("'+'  : soma\n");
    printf("'-'  : subtracao\n");
    printf("'*'  : multiplicacao\n");
    printf("'/'  : divisao\n");
    scanf("%c, &operacao");



            printf("Calculando: %.2f + %.2f = ", a,b);
            printf("%.2f\n\n", a + b);

    return 0;
}
