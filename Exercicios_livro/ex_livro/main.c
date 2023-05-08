#include <stdio.h>
#include <stdlib.h>

int menu(int *idade){
    int montante;
    long int n_conta;
    printf("Qual a idade: "); scanf("%d", &*idade);
    printf("\nDigite o montante a depositar:  "); scanf("%d", &montante);
    printf("\nQual o n° da conta: "); scanf("%ld", &n_conta);
    printf("\nUma pessoa de %d anos depositou $%d na conta %ld \n", *idade, montante, n_conta);
    return 0;

}

int main(){
    int idade;
    do{
        menu(&idade);
    }while(idade < 60);

    return 0;
}


