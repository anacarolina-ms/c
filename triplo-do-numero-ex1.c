/*
Autor: Ana Carolina Marcelo da Silva
Data: 11/11/2020
Descrição: Exercício 1 da lista sobre estruturas de repetição.
*/

#include <stdio.h>

main(){
    int numero, triplo;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    fflush(stdin);

    while(numero != 0){
        triplo = numero * 3;

        printf("O triplo do numero lido, %d, e': %d\n\n", numero, triplo);

        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);
        fflush(stdin);
    }
}
