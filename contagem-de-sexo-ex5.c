/*
Autor: Ana Carolina Marcelo da Silva
Data: 12/11/2020
Descri��o: Exerc�cio 5 da lista sobre estruturas de repeti��o.
*/

#include <stdio.h>

main(){
    int feminino = 0;
    int masculino = 0;
    char repetir;

    printf("Digite o sexo da pessoa: (F ou M) ");
    scanf("%c", &repetir);
    fflush(stdin);
    repetir = toupper(repetir);

    if(repetir == 'F'){
            feminino++;
    }
    if(repetir == 'M'){
        masculino++;
    }

    while(repetir == 'M' || repetir == 'F'){
        printf("Digite o sexo da pessoa: (F ou M) ");
        scanf("%c", &repetir);
        fflush(stdin);
        repetir = toupper(repetir);

        if(repetir == 'F'){
            feminino++;
        }
        if(repetir == 'M'){
            masculino++;
        }
    }

    printf("\n\nForam inseridas %d pessoas do sexo feminino.", feminino);
    printf("\nForam inseridas %d pessoas do sexo masculino.", masculino);
}
