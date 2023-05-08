#include <iostream>
#define max 10

using namespace std;

int main()
{
    int vet1 [max];
    int vet2 [max];
    int i, j;
    printf("Passo A:\n");
    printf("Vetor 1:\n");
    for (i = 0 ; i < max ; i++){
        vet1[i] = i;
        printf("  %d\n", vet1[i]);

    }
    printf("\n\n");
    printf("Passo B e C: Copiando para o Vetor 2 e mostrando os dois vetores");
    printf("\n\nVetor 1\t\tVetor 2\n");
    for (j = 0 ; j < max ; j++){
        vet2[j] = vet1[j];
        printf("  %d\t\t  %d", vet1[j], vet2[j]);
        printf("\n");
    }
    printf("\n\n");
    printf("Passo D e E: Dobrando o valor do Vetor 1 e mostrando os 2 vetores");
    printf("\n\nVetor 1\t\tVetor 2\n");
    for (j = 0 ; j < max ; j++){
        vet1[j] = j * 2;
        printf("  %d\t\t  %d", vet1[j], vet2[j]);
        printf("\n");
    }
    printf("\n\n");
    printf("Passo F e G: Copiando os elementos para o seguundo vetor de forma invertida");
    printf("\n\nVetor 1\t\tVetor 2\n");
    for (j = 0 ; j < max ; j++){
        vet2[j] = vet1[max - 1 - j];
        printf("  %d\t\t  %d", vet1[j], vet2[j]);
        printf("\n");
    }


    return 0;
}
