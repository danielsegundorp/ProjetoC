#include <iostream>

using namespace std;

void tela();
void troca (int *A, int *B, int *C);


int main(void)
{

    int a, b, c;
    a = 3;
    b = 100;
    c = 1;

    cout << "\n******************  VALORES DE ENTRADA  ********************";
    cout << "\na = " << a << endl;
    cout << "\nb = " << b << endl;
    cout << "\nc = " << c << endl;
    troca(&a, &b, &c);


    return 0;
}



void troca (int *A, int *B, int *C){
    int maior, menor;
    if(*A > *B && *A > *C){
        if(*B > *C){
            maior = *A;
            menor = *C;
            *C = maior;
            *A = menor;
        }
        else{
            maior = *A;
            menor = *B;
            *B = *C;
            *C = maior;
            *A = menor;
        }
    }

    else if(*B > *C && *B > *A){
        if(*A > *C){
            maior = *B;
            menor = *C;
            *B = *A;
            *C = maior;
            *A = menor;

        }
        else{
            maior = *B;
            menor = *A;
            *B = *C;
            *C = maior;
            *A = menor;

        }
    }
    else{
        if(*C > *A && *C > *B){
            if(*B > *A){
                maior = *C;
                menor = *A;
                *C = maior;
                *A = menor;
            }
            else{
                maior = *C;
                menor = *B;
                *B = *A;
                *C = maior;
                *A = menor;
            }
        }
    }

    cout << "\n******************  VALORES TROCADOS  ********************";
    cout << "\nA = " << *A << endl;
    cout << "\nB = " << *B << endl;
    cout << "\nC = " << *C << endl;
}

