/*
Autor: Ana Carolina Marcelo da Silva
Data: 11/11/2020
Descri��o: Exerc�cio 7 da lista sobre estruturas de repeti��o.
*/

#include <stdio.h>
#include <math.h>

main(){
    float y;
    float x;

    do{
        printf("Digite uma valor para y (diferente de zero): ");
        scanf("%f", &y);
        fflush(stdin);
    } while(y == 0);

    x = (2*pow(y, 2)+1)/y;

    printf("\nPara y = %f, x = %f\n", y, x);
}
