#include <iostream>
#define COL 4
#define LIN 4
#define MAX 4

using namespace std;

int main()
{
    cout << "************\tPROGRAMA DESENVOLVIDO PARA APRESENTAR UMA MATRIZ QUADRADA 4 POR 4\t************\n";
    cout << "**********************\tDE ACORDO COM OS DADOS DIGITADOS PELO USUARIO\t***************************\n";
    cout << "PASSO 1 - SERA SOLICITADO AO USUARIO QUE DIGITE OS ELEMENTOS INTEIROS PARA A MATRIZ\n";
    cout << "PASSO 2 - O PROGRAMA IRA APRESENTAR UM MENU PARA O USUARIO ESCOLHER QUAL ITEM DESEJA CALCULAR\n\n";
    cout << "**********************************ENJOY YOURSELF******************************************\n\n";
    cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!ALL RIGHTS RESERVED!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n";

    system("pause");

    int MAT[LIN][COL];
    int i, maior, L, C, soma, aux, aux5, aux6, somaParDiagPrinc, somaDiagPrinc, somaDiagSec;
    int aux2, aux3, somaImpDiagSec, somaImpDiagPrinc, aux4, somaImpDiagonais, qtePares, diferenca, op;
    i = 0;

    soma = 0;
    somaDiagPrinc = 0;
    somaDiagSec = 0;
    somaImpDiagSec = 0;
    somaImpDiagPrinc = 0;
    somaParDiagPrinc = 0;
    somaImpDiagonais = 0;
    aux = 0;
    aux2 = 0;
    aux3 = 0;
    aux4 = 0;
    aux5 = 0;
    aux6 = 0;
    qtePares = 0;
    maior = 0;
    diferenca = 0;

    for(L=0;L<MAX;L++){
            for(C=0;C<MAX;C++){
                cout << "\n\nDigite um numero inteiro: ";
                cin >> MAT[L][C];

            }
    }
    cout << "\n\nElementos registrados com sucesso......\n\n";
    system("pause");
    cout << "\n\n";

    do{
        system("cls");
        cout << "***************MENU*****************\n\n";
        cout << "\n1 - Apresentar Matriz";
        cout << "\n2 - Somatorio de todos os elementos da Matriz";
        cout << "\n3 - Somatorio dos elementos pares da diagonal principal";
        cout << "\n4 - Somatorio dos elementos impares da diagonal secundaria";
        cout << "\n5 - Somatorio dos elementos impares das duas diagonais";
        cout << "\n6 - Quantidade de elementos pares na Matriz";
        cout << "\n7 - Elementos divisiveis por 5 na matriz";
        cout << "\n8 - O maior elemento da Matriz";
        cout << "\n9 - Diferenca do somatorio de todos os elementos das duas diagonais";
        cout << "\n0 - Sair";
        cout << "\n\nEscolha a opcao desejada: ";
        cin >> op;


        switch(op){
            case 1: system("cls");
                    cout << "**********APRESENTAR MATRIZ*************";
                    cout << "\n\n\n";
                    for(L=0;L<1;L++){
                        for(C=0;C<MAX;C++){
                            cout << MAT[L][C] << "\t";

                        }
                    }

                    cout << "\n";

                    for(L=1;L<2;L++){
                        for(C=0;C<MAX;C++){
                            cout << MAT[L][C] << "\t";

                        }
                    }

                    cout << "\n";

                    for(L=2;L<3;L++){
                        for(C=0;C<MAX;C++){
                            cout << MAT[L][C] << "\t";

                            }
                    }

                    cout << "\n";

                    for(L=3;L<4;L++){
                        for(C=0;C<MAX;C++){
                            cout << MAT[L][C] << "\t";

                        }
                    }
                    cout << "\n\n";
                    system("pause");
                    break;

            case 2: system("cls");
                    cout << "**********SOMATORIO DE TODOS OS ELEMENTOS DA MATRIZ*************";
                    cout << "\n\n\n";
                    for(L=0;L<MAX;L++){
                        for(C=0;C<MAX;C++){
                            aux = MAT[L][C];
                            soma = soma + aux;
                        }
                    }
                    printf("\n\nSomatorio de todos os elementos da matriz eh: %d\n\n", soma);

                    system("pause");
                    break;

            case 3: system("cls");
                    cout << "**********SOMATORIO DOS ELEMENTOS PARES DA DIAGONAL PRINCIPAL*************";
                    cout << "\n\n\n";
                    for(i=0;i<MAX;i++){
                        if(MAT[i][i] % 2 == 0){
                            aux2 = MAT[i][i];
                            somaParDiagPrinc = somaParDiagPrinc + aux2;
                        }
                    }
                    printf("\n\nSomatorio dos pares da diagonal principal eh: %d\n\n", somaParDiagPrinc);

                    system("pause");
                    break;

            case 4: system("cls");
                    cout << "**********SOMATORIO DOS ELEMENTOS IMPARES DA DIAGONAL SECUNDARIA*************";
                    cout << "\n\n\n";
                    for(i=0;i<MAX;i++){
                        if(MAT[i-0][3-i] % 2 != 0){
                            aux3 = MAT[i-0][3-i];
                            somaImpDiagSec = somaImpDiagSec + aux3;
                            }
                    }
                    printf("\n\nSomatorio dos impares da diagonal secundaria eh: %d\n\n", somaImpDiagSec);

                    system("pause");
                    break;

            case 5: system("cls");
                    cout << "**********SOMATORIO DOS ELEMENTOS IMPARES DAS DUAS DIAGONAIS*************";
                    cout << "\n\n\n";
                    for(i=0;i<MAX;i++){
                        if(MAT[i][i] % 2 != 0){
                            aux4 = MAT[i][i];
                            somaImpDiagPrinc = somaImpDiagPrinc + aux4;
                        }
                    }
                    somaImpDiagonais = somaImpDiagPrinc + somaImpDiagSec;
                    printf("\n\nSomatorio dos impares das duas diagonais eh: %d\n\n", somaImpDiagonais);

                    system("pause");
                    break;

            case 6: system("cls");
                    cout << "**********QUANTIDADE DE ELEMENTOS PARES NA MATRIZ*************";
                    cout << "\n\n\n";
                    for(L=0;L<MAX;L++){
                        for(C=0;C<MAX;C++){
                            if(MAT[L][C] % 2 == 0){
                                qtePares++;
                            }
                        }
                    }
                    printf("\n\nA qte de numeros pares na matriz eh: %d\n\n", qtePares);

                    system("pause");
                    break;

            case 7: system("cls");
                    cout << "**********ELEMENTOS DIVISIVEIS POR 5 NA MATRIZ*************";
                    cout << "\n\n\n";
                    cout << "Os numeros divisiveis por 5 na matriz eh: \t";
                    for(L=0;L<MAX;L++){
                        for(C=0;C<MAX;C++){
                            if(MAT[L][C] % 5 == 0){
                                cout <<  MAT[L][C] << "\t";
                            }
                        }
                    }
                    cout << "\n\n";
                    system("pause");
                    break;

            case 8: system("cls");
                    cout << "**********MAIOR ELEMENTO DA MATRIZ*************";
                    cout << "\n\n\n";
                    MAT[0][0]= maior;
                    for(L=0;L<MAX;L++){
                        for(C=0;C<MAX;C++){
                            if(MAT[L][C] > maior){
                                maior = MAT[L][C];
                            }
                        }
                    }
                    printf("\nO maior numero da matriz eh: %d", maior);
                    cout << "\n\n";
                    system("pause");
                    break;

            case 9: system("cls");
                    cout << "**********DIFERENCA DO SOMATORIO DOS ELEMENTOS DAS DUAS DIAGONAIS*************";
                    cout << "\n\n\n";
                    for(i=0;i<MAX;i++){
                        aux5 = MAT[i][i];
                        somaDiagPrinc = somaDiagPrinc + aux5;
                    }

                    for(i=0;i<MAX;i++){
                        aux6 = MAT[i-0][3-i];
                        somaDiagSec = somaDiagSec + aux6;
                    }
                    diferenca = somaDiagPrinc - somaDiagSec;
                    printf("\nA Diferenca da somatoria dos elementos das diagonais eh: %d", diferenca);
                    cout << "\n\n";
                    system("pause");
                    break;
        }

    } while(op!=0);

    return 0;
}
