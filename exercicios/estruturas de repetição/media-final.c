/*
Autor: Ana Carolina Marcelo da Silva
Data: 12/11/2020
Descri��o: Exerc�cio 10 da lista sobre estruturas de repeti��o.
*/

#include <stdio.h>

main(){
    float nota, media, somaNotas;
    int qtdNotas = 0;

    printf("Digite uma nota: \n");
    scanf("%f", &nota);
    fflush(stdin);

    do {
        somaNotas += nota;
        qtdNotas++;

        printf("Digite uma nota: \n");
        scanf("%f", &nota);
        fflush(stdin);
    } while(nota >= 0.0);

    media = somaNotas / (float)qtdNotas;

    printf("\nSua media final e': %f", media);
}
