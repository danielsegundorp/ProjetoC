//////////////PROGRAMA QUE CALCULA MÉDIA DE TEMPERATURAS////////////////////////////////////

#include <iostream>

using namespace std;

int main()
{
    int decisao;
    float temperatura, resultado, buffertemp;
    int n, i;
    n = 2;
    i = 0;
    buffertemp = 0;


        printf("Esse programa tem por finalidade calcular a media de N temperaturas informadas pelo usuario\n\n");
        printf("Opcoes disponiveis: \n");
        printf("1 - CONTINUAR\n2 - CANCELAR\n");
        scanf("%d", &decisao);
        if(decisao == 1 || decisao == 2){
            while(decisao == 1){
                for(i = 1; i <= n; i++){
                    printf("Digite um valor de temperatura em [Celsius]: ");
                    scanf("%f", &temperatura);
                    resultado = (temperatura + buffertemp) / i;
                    buffertemp = resultado;
                    //n = n + 1;
                    printf("%d media(s) calculada(s) igual ah: %f\n", i, resultado);
                    printf("Deseja continuar? \n");
                    printf("1 - SIM\n2 - NAO\n");
                    scanf("%d", &decisao);
                    if(decisao == 1){
                        n = n + 1;
                    }
                    else{
                        if(decisao == 2){
                            n = i;
                        }
                        else{
                            printf("OPCAO INVALIDA!!!\n");
                            n = i;
                        }
                    }

                }
            }
        }
        else{
            printf("OPCAO INVALIDA!!!\n");

        }
    printf("FECHANDO O PROGRAMA.....\n\n\n\n");

    return 0;


}
