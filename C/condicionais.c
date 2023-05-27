#include <stdio.h>
#include <string.h>

int main(void) {
    char permission[4];
    
    printf("Você aceita casar comigo? \n");
    scanf("%s", permission);

    if (strcmp(permission,"s") == 0 || strcmp(permission,"S")==0) //função strcmp serve para comparar strings, essa função dá o return 0 quando é true a comparação
    {
       printf("Sou a pessoa mais feliz do mundo");

    } else if (strcmp(permission,"n") == 0 || strcmp(permission,"N") == 0 || strcmp(permission,"nao")== 0)
    {
        printf("Vou embora, noo quero ficar aqui olhando para sua cara estupida");

    }else
    {
        printf("Voce deve escolher sim ou nao");
    }

    return 0;
}