
////////////////Programa que imprime 4 tabuadas personalizadas pelo pr�prio usu�rio/////////////////////////

#include <iostream>

using namespace std;

int main()
{
    int i;
    int t1, t2, t3, t4;

    printf("\t\t######\tOla usuario!!!\t#####\n");
    printf("\t\t######\tSeja bem vindo!!!\t########\n");
    printf("#######\tEsse programa tem por finalidade imprimir ate 4 tabuadas a serem escolhidas pelo usuario\t#####\n");
    printf("Digite um numero para calculo da primeira tabuada: \n");
    scanf("%d", &t1);
    printf("Digite um numero para calculo da segunda tabuada: \n");
    scanf("%d", &t2);
    printf("Digite um numero para calculo da terceira tabuada: \n");
    scanf("%d", &t3);
    printf("Digite um numero para calculo da quarta tabuada: \n");
    scanf("%d", &t4);
    system("cls");

    printf("\n\n");
    printf("Calculando os resultados...................................\n\n");
    printf("___________________________________________________________\n\n");


    for (i = 1; i <= 10; i++)
        {
            printf("%2d  x %2d = %2d\t\t| %2d  x %2d = %2d\n", t1, i, t1*i, t2, i, t2*i);

        }
    printf("\n\n__________________________________________________\n");
    for (i = 1; i <= 10; i++)
        {
            printf("%2d  x %2d = %2d\t\t| %2d  x %2d = %2d\n", t3, i, t3*i, t4, i, t4*i);

        }
    printf("\n\n__________________________________________________\n");

    system("pause");
    return 0;
}
