#include <iostream>
#define L 3
#define C 3

using namespace std;

void menu();
void ins_matriz(float matriz[L][C], int linha, int coluna);
void imp_matriz(float matriz[L][C], int linha, int coluna);
float media_diagonal_principal(float matriz[L][C], int linha, int coluna);


int main()
{
    int op;
    float MAT[L][C];
    do{
    menu();
    cout << "\n\nDigite a sua opcao: ";
    cin >> op;
    switch(op)
     {
         case 1: system("cls");
                 cout << "* * * *   INSERIR ELEMENTOS NA MATRIZ   * * * *\n\n";
                 ins_matriz(MAT, L, C);
                 system("pause");
                 break;

         case 2: system("cls");
                 cout << "* * * *   IMPRIMIR MATRIZ   * * * *\n\n";
                 imp_matriz(MAT, L, C);
                 cout << "\n\n";
                 system("pause");
                 break;

         case 3: system("cls");
                 cout << "* * * *   MEDIA DOS ELEMENTOS DA DIAGONAL PRINCIPAL   * * * *\n\n";
                 printf("Media da diagonal principal: %.2f", media_diagonal_principal(MAT, L, C));
                 cout <<"\n\n";
                 system("pause");
                 break;

     }

    }while(op!=4);

    return 0;
}


void menu()
{

    system("cls");
    cout << "* * * *   M E N U   * * * *\n\n";
    cout << "\n1 - Inserir elementos na Matriz";
    cout << "\n2 - Imprimir Matriz";
    cout << "\n3 - Media dos elementos da diagonal principal";
    cout << "\n4 - Sair";

}


void ins_matriz(float matriz[L][C], int linha, int coluna){

  int i, j;
  for(i = 0; i < linha; i++) {
    for(j = 0; j < coluna; j++) {
      printf("Informe o valor para a posicao [%d][%d]: ", i, j);
      scanf("%f", &matriz[i][j]);
    }
  }
  cout << "\n\nDados inseridos com sucesso!!\n\n";
//return;

}

void imp_matriz(float matriz[][3], int linha, int coluna){
  int i, j;
  for(i = 0; i < linha; i++) {
    for(j = 0; j < coluna; j++) {
      printf("%.2f\t", matriz[i][j]);
    }
  printf("\n");
  }
//return;

}

float media_diagonal_principal(float matriz[][3], int linha, int coluna){
  int i, j;
  float soma = 0;
  int contador = 0;
  for(i = 0; i < linha; i++) {
    for(j = 0; j < coluna; j++) {
      if(i == j) {
        soma += matriz[i][j];
        contador++;

      }
    }
  }
return soma / contador;
}
