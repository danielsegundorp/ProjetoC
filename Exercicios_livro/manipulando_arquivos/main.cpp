#include <iostream>
#include <string.h>
#define MAX 10000

using namespace std;

void menu(){

    system("cls");
    cout << "* * * *   M E N U   * * * *\n\n";
    cout << "\n1 - Criptografar texto";
    cout << "\n2 - Descriptografar texto";
    cout << "\n3 - Mostrar texto";
    cout << "\n9 - Sair";
}

int main()
{
    int op, i;
    FILE *arquivo;
    char texto[MAX], linha[MAX];
    do{
        menu();
        cout << "\nDigite a sua opcao: ";
        cin >> op;
        switch(op){
             case 1: system("cls");
                     arquivo = fopen("texto.txt","w");
                     if(arquivo==NULL){
                        printf("\nProblema ao abrir o arquivo...\n\n");
                        return 0;
                     }

                     for (i=0;texto[i]!='\0';i++){
                        fputc(texto[i] + 3,arquivo);
                     }

                     fclose(arquivo);
                     printf("\nArquivo criptografado com sucesso...");
                     printf("\n\n");
                     system("pause");


                     break;

             case 2: system("cls");
                     arquivo = fopen("texto.txt","w");
                     if(arquivo==NULL){
                        printf("\nProblema ao abrir o arquivo...\n\n");
                        return 0;
                     }

                     for (i=0;texto[i]!='\0';i++){
                        fputc(texto[i] - 3,arquivo);
                     }

                     fclose(arquivo);
                     printf("\nArquivo descriptografado com sucesso...");
                     printf("\n\n");
                     system("pause");


                     break;

             case 3: system("cls");
                     arquivo = fopen("texto.txt","r");

                     if (arquivo==NULL){
                        printf("\nProblema ao abrir o arquivo.\nArquivo inexistente!!!\n");
                        return 0;
                     }
                     strcpy(texto,"");
                     while(fgets(linha,MAX,arquivo)!=NULL){
                        strcat(texto,linha);
                     }
                     printf("\n%s\n",texto);
                     fclose(arquivo);
                     printf("\n\n");
                     system("pause");
                     break;
        }

    }while(op!=9);

    return 0;

}
