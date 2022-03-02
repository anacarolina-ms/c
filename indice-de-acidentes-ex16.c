/*
Autor: Ana Carolina Marcelo da Silva
Data: 12/11/2020
Descrição: Exercício 16 da lista sobre estruturas de repetição.
*/

#include <stdio.h>

main(){
    int codigoCidade, veiculos, acidentes;
    char repetir;

    int acidentesMaior;
    float indiceMaior;
    int codigoCidadeMaior;
    int acidentesMenor;
    float indiceMenor;
    int codigoCidadeMenor;
    float mediaVeiculos;
    float mediaAcidentes2000;
    int qtdCidades = 0;
    int somaVeiculos = 0;
    int somaAcidentes = 0;
    int somaAcidentes2000 = 0;
    int qtdCidades2000 = 0;

    do{
        printf("\nDigite o codigo da cidade: ");
        scanf("%d", &codigoCidade);
        fflush(stdin);

        printf("Digite o numero de veiculos de passeio da cidade: ");
        scanf("%d", &veiculos);
        fflush(stdin);

        printf("Digite o numero de acidentes com vitimas: ");
        scanf("%d", &acidentes);
        fflush(stdin);

        qtdCidades++;
        somaAcidentes += acidentes;

        if(qtdCidades == 1){
            acidentesMaior = acidentes;
            codigoCidadeMaior = codigoCidade;
            acidentesMenor = acidentes;
            codigoCidadeMenor = codigoCidade;
        } else {
            if(acidentes < acidentesMenor){
                acidentesMenor = acidentes;
                codigoCidadeMenor = codigoCidade;
            }
            else if(acidentes > acidentesMaior){
                acidentesMaior = acidentes;
                codigoCidadeMaior = codigoCidade;
            }
        }
        somaVeiculos += veiculos;

        if(veiculos < 2000){
            somaAcidentes2000 += acidentes;
            qtdCidades2000++;
        }

        printf("Deseja entrar com dados da proxima cidade? (S/N)\n");
        printf(">> ");
        scanf("%c", &repetir);
        fflush(stdin);
        repetir = toupper(repetir);

        while(repetir != 'S' && repetir != 'N' ){
            printf("ERRO! Digite apenas S ou N!\n");
            printf("Deseja entrar com dados da proxima cidade? (S/N)\n");
            printf(">> ");
            scanf("%c", &repetir);
            fflush(stdin);
            repetir = toupper(repetir);
        }
    } while(repetir == 'S');

    indiceMaior = acidentesMaior / (float)somaAcidentes;
    indiceMenor = acidentesMenor / (float)somaAcidentes;
    mediaVeiculos = somaVeiculos / (float)qtdCidades;
    mediaAcidentes2000 = somaAcidentes2000 / (float)qtdCidades2000;

    printf("\n\nMenor indice de acidentes: %f%% >> Codigo: %d\n", indiceMenor, codigoCidadeMenor);
    printf("Maior indice de acidentes: %f%% >> Codigo: %d\n", indiceMaior, codigoCidadeMaior);
    printf("Media de veiculos em todas as cidades: %f\n", mediaVeiculos);
    printf("Media de acidentes em cidades com menos de 2000 veiculos: %f\n", mediaAcidentes2000);
}
