////////////Programa para calcular m�dias de IMC dos usu�rios/////////////

#include <iostream>

using namespace std;

int main()
{
    int decisao;
    float bufferimc, altura, IMC, peso, media;
    int n, i;
    n = 2;
    altura = 0;
    IMC = 0;
    peso = 0;
    bufferimc = 0;



        printf("Esse programa tem por finalidade calcular a media de IMCs de N pessoas\n");
        printf("informadas pelo usuario de acordo com as informacoes de altura e peso.\n");
        printf("Nota: 1 metro eh igual a 100cm!!!\n\n");
        printf("Opcoes disponiveis: \n");
        printf("1 - CONTINUAR\n2 - CANCELAR\n");
        scanf("%d", &decisao);
        if(decisao == 1 || decisao == 2){
            while(decisao == 1){
                for(i = 1; i <= n; i++){
                    printf("Digite a altura para a %d pessoa em [cm]: ", i);
                    scanf("%f", &altura);
                    printf("Digite o peso para a %d pessoa em [kg]: ", i);
                    scanf("%f", &peso);
                    altura = altura / 100;
                    IMC = peso / (altura * altura);
                    media = (bufferimc + IMC) / i;
                    bufferimc = IMC;
                    printf("Deseja continuar? \n");
                    printf("1 - SIM\n2 - NAO\n");
                    scanf("%d", &decisao);
                    if(decisao == 1){
                        n = n + 1;
                    }
                    else{
                        if(decisao == 2){
                            printf("%\n\nMedia IMC calculado eh igual ah: %f\n\n", media);
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

