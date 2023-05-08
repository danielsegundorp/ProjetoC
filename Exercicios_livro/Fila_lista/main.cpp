/*#include <iostream>
#define MAX 3

using namespace std;

typedef struct SFila{
   int elementos[MAX];
   int FIM;
}TFila;

void inserir (TFila *f, int e)
{
    if(f->FIM<MAX-1){
        f->FIM=f->FIM+1;
        f->elementos[f->FIM]=e;
        cout << "\n\nElemento inserido com sucesso!!!\n\n";
        system("pause");
    }
    else{
        cout << "\n\nImpossivel inserir...\nFila cheia!!!\n\n";
        system("pause");
    }

}


int remover (TFila *f)
{
    if (f->FIM<0)
        return 1;
    else
    {
         for (int i = 0;i<MAX;i++)
         {
            f->elementos[i]=f->elementos[i+1];
         }
         f->FIM=f->FIM-1;
         return 0;
    }

}


void imprimir (TFila f)
{
    for (int i=f.FIM;i>=0;i--)
        cout << f.elementos[i] << "\n";
    cout << "\n\n";
        system("pause");


}

int main()
{
    TFila fila;
    fila.FIM=-1;
    int op, flag;
    int elemento;
    do
    {
        system("cls");
        cout << "* * * *   M E N U   * * * *\\n\n";
        cout << "\n1 - INSERIR";
        cout << "\n2 - REMOVER";
        cout << "\n3 - IMPRIMIR";
        cout << "\n4 - SAIR";
        cout << "\n\nDigite a sua opcao: ";
        cin >> op;


     switch(op)
     {
         case 1: system("cls");
                 cout << "* * * *   I N S E R I R   * * * *\n\n";
                 cout << "Digite o elemento a ser inserido: ";
                 cin >> elemento;
                 inserir(&fila,elemento);
                 break;

         case 2 :system("cls");
                 cout << "* * * *   R E M O V E R   * * * *\n\n";
                 flag = remover(&fila);
                  if (flag==1)
                    cout << "\n\nImpossivel remover...\nFila vazia!\n\n";
                 else
                    cout << "elemento removido com sucesso!!\n\n";


                 system("pause");
                 break;

        case 3 : system("cls");
                 cout << "* * * *   F I L A   * * * *\n\n";
                 imprimir(fila);
                 break;

     }

    }while(op!=4);

    return 0;
}
*/

#include <iostream>
#define MAX 4

using namespace std;

typedef struct SLista{
   int elementos[MAX];
   int FIM;
}TLista;


int inserir (TLista *L, int pos, int e){
    if(L->FIM >= (MAX-1))
        return 1;
    if(pos < 0 || pos > (L->FIM) + 1)
        return 2;
    L->FIM = L->FIM + 1;
    for(int i = L->FIM; i > pos; i--)
        L->elementos[i] = L->elementos[i - 1];
    L->elementos[pos] = e;
    return 0;



}





int remover (TLista *L, int pos)
{
    if (L->FIM<0)
        return 1;
    if(pos < 0 || pos > L->FIM )
        return 2;
    for(int i = pos; i < L->FIM; i++)
        L->elementos[i] = L->elementos[i + 1];
    L->FIM = L->FIM - 1;
    return 0;


}


void imprimir (TLista L)
{
    for (int i = 0; i <= L.FIM; i++)
        cout << L.elementos[i] << "\t";
    cout << "\n\n";
    system("pause");


}

int main()
{
    TLista lista;
    lista.FIM=-1;
    int op, flag;
    int elemento, posicao;
    do
    {
        system("cls");
        cout << "* * * *   M E N U___L I S T A   * * * *\n\n";
        cout << "\n1 - INSERIR";
        cout << "\n2 - REMOVER";
        cout << "\n3 - IMPRIMIR";
        cout << "\n4 - SAIR";
        cout << "\n\nDigite a sua opcao: ";
        cin >> op;


     switch(op)
     {
        case 1: system("cls");
                 cout << "* * * *   I N S E R I R   * * * *\n\n";
                 cout << "Digite qual posicao deve ser inserido o elemento entre [0] e " << "[" << lista.FIM+1 << "]: ";
                 cin >> posicao;
                 cout << "Digite o elemento a ser inserido: ";
                 cin >> elemento;
                 flag = inserir(&lista, posicao, elemento);
                 if(flag == 1)
                    cout << "\n\nImpossivel inserir...\nlista cheia...\n\n";

                 else
                    if(flag == 2)
                        cout << "\n\nImpossivel inserir...\nposicao invalida...\n\n";

                    else
                        cout << "\n\nElemento inserido com sucesso...\n\n";
                 system("pause");
                 break;

         case 2 :system("cls");
                 cout << "* * * *   R E M O V E R   * * * *\n\n";
                 cout << "Digite qual posicao deve ser removido o elemento entre [0] e " << "[" << lista.FIM << "]: ";
                 cin >> posicao;
                 flag = remover(&lista, posicao);
                  if (flag==1)
                    cout << "\n\nImpossivel remover...\nLista vazia!\n\n";
                 else
                    if(flag == 2)
                        cout << "\n\nImpossivel remover...\nPosicao invalida!!!";
                    else
                        cout << "elemento removido com sucesso!!\n\n";
                 cout << "\n\n";
                 system("pause");
                 break;


        case 3 : system("cls");
                 cout << "* * * *   I M P R I M I R___L I S T A   * * * *\n\n";
                 imprimir(lista);
                 break;


     }

    }while(op!=4);

    return 0;
}
