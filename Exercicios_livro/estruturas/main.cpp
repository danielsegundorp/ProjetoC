#include <iostream>
#include <string.h>


using namespace std;

struct ScanFunc {

    int codigo;
    char nome[50];
    int salario;


};

int main()
{
    struct ScanFunc pessoa1, pessoa2;
    pessoa1.codigo = 1;
    strcpy(pessoa1.nome, "Daniel");
    pessoa1.salario = 1000;

    pessoa2.codigo = 2;
    strcpy(pessoa2.nome, "Ana");
    pessoa2.salario = 2000;

    cout << "\nCodigo :  " << pessoa1.codigo;
    cout << "\nNome   :  " << pessoa1.nome;
    cout << "\nSalario:  " << pessoa1.salario;
    cout << "\n\n";

    cout << "\nCodigo :  " << pessoa2.codigo;
    cout << "\nNome   :  " << pessoa2.nome;
    cout << "\nSalario:  " << pessoa2.salario;
    cout << "\n\n";


    return 0;
}
