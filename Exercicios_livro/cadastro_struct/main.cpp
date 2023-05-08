#include <iostream>
#define MAX 10


using namespace std;

int main()
{
    int pilha[MAX];
    int topo=-1;
    int op;
    int elemento;
    do
    {
        system("cls");
        cout << "* * * *   M E N U   * * * *\\n\n";
        cout << "\n1 - Push";
        cout << "\n2 - Pop";
        cout << "\n3 - Imprime";
        cout << "\n9 - Sair";
        cout << "\n\nDigite a sua opcao: ";
        cin >> op;


     switch(op)
     {
         case 1: system("cls");
                 cout << "* * * *   P U S H   * * * *\n\n";
                 cout << "Digite o elemento a ser inserido: ";
                 cin >> elemento;
                 if (topo<MAX-1)
                 {
                     topo=topo+1;
                     pilha[topo]=elemento;
                     cout << "\n\nElemento inserido com sucesso!!\n\n";
                 }
                 else
                    cout << "\n\nImpossivel inserir...\nPilha cheia!!\n\n";
                 system("pause");
                 break;

         case 2 :system("cls");
                 cout << "* * * *   P O P   * * * *\n\n";
                 if (topo<0)
                    cout << "\n\nImpossivel remover...\nPilha vazia!\n\n";
                 else
                 {
                     topo=topo-1;
                     cout << "elemento removido com sucesso!!\n\n";

                 }
                 system("pause");
                 break;

        case 3 : system("cls");
                 cout << "* * * *   P I L H A   * * * *\n\n";
                 if (topo<0)
                    cout << "\n\nPilha vazia...";
                 else
                 for (int i=topo;i>=0;i--)
                    cout << pilha[i];
                 cout << "\n\n";
                 system("pause");
                 break;

     }

    }while(op!=9);

    return 0;
}
