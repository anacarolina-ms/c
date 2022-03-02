/*
Autor: Ana Carolina Marcelo da Silva
Data: 12/11/2020
Descrição: Exercício 18 da lista sobre estruturas de repetição.
*/

#include <stdio.h>
#include <string.h>

main(){
    char nome[50] = "";
    char primeiro[50];
    char ultimo[50];

    prinf("Digite um nome: ");
    scanf("%[^\n]", &nome);
    fflush(stdin);

    strcpy(primeiro, nome);
    strcopy(ultimo, nome);

    while(strcmp(nome, "") != 0){
        if(strcmp(nome, primeiro) < 0){
            strcpy(primeiro, nome);
        }
        else if(strcmp(nome, ultimo) > 0){
            strcpy(ultimo, nome);
        }
        strcpy(nome, "");
        printf("Digite um nome: ");
        scanf("%[^\n]", &nome);
        fflush(stdin);
    }

    prinf("Primeiro nome da lista: %s\n", primeiro);
    printf("Ultimo nome da lista: %s\n", ultimo);
}
