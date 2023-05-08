#include <iostream>
#define max 10

using namespace std;

void menu();
void imprimir(int v[max]);
void vetor(int v[max]);
int valor_maior(int v[]);


int main()
{
    int op, ins[max];
    do{
    menu();
    cout << "\n\nDigite a sua opcao: ";
    cin >> op;
    switch(op)
     {
         case 1: system("cls");
                 cout << "* * * *   INSERIR DADOS NO VETOR   * * * *\n\n";
                 vetor(ins);
                 system("pause");
                 break;

         case 2: system("cls");
                 cout << "* * * *   IMPRIMIR VETOR   * * * *\n\n";
                 imprimir(ins);
                 cout << "\n\n";
                 system("pause");
                 break;

         case 3: system("cls");
                 cout << "* * * *   MAIOR NUMERO DO VETOR   * * * *\n\n";
                 valor_maior(ins);
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
    cout << "\n1 - Inserir dados no vetor";
    cout << "\n2 - Imprimir Vetor";
    cout << "\n3 - Maior numero do vetor";
    cout << "\n4 - Sair";

}


void vetor(int v[max]){

    int i;
    for (i = 0 ; i < max ; i++){
        cout << "\nDigite um numero inteiro: ";
        cin >> v[i];
    }
    cout << "\n\nDados inseridos com sucesso!!\n\n";
return;

}

void imprimir(int v[max]){

    int i;
    for (i = 0 ; i < max ; i++){
        cout << "\n";
        cout << v[i];
    }
return;

}

int valor_maior(int v[]){
    int maior = v[0];
    for (int i = 0; i < max; i++){
        if(maior < v[i]){
            maior = v[i];
        }
    }
    cout <<"\no maior numero do vetor eh: " << maior;
return maior;


}
