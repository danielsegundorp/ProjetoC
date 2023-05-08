#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char texto[50];
    cout << "digite um texto: ";
    gets(texto);
    cout << "\n\n";
    for(int i; i<strlen(texto); i++)
        texto[i]=texto[i]-3;
    cout << texto;
    cout << "\n\n";

    return 0;
}
