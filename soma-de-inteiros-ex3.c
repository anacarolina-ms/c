/*
Autor: Ana Carolina Marcelo da Silva
Data: 11/11/2020
Descrição: Exercício 3 da lista sobre estruturas de repetição.
*/

#include <stdio.h>

main(){
    int n1, n2, soma;
    char resp;

    do{
        printf("\nDigite um numero inteiro: ");
        scanf("%d", &n1);
        fflush(stdin);

        printf("\nDigite um segundo numero inteiro: ");
        scanf("%d", &n2);
        fflush(stdin);

        soma = n1 + n2;

        printf("\nA soma dos numeros %d e %d e': %d", n1, n2, soma);

        printf("\nDeseja somar outros dois numeros? (s/n)\n");
        printf(">> ");
        scanf("%c", &resp);
        fflush(stdin);
    } while(resp == 's' || resp == 'S');
}
