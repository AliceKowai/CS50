#include <stdio.h>

int main(void) {
    char nome[100];
    int idade;
    int idadeDele;

    printf("Seu nome? \n");
    scanf("%s", nome);
    printf("Qual e a sua idade? \n");
    scanf("%i", &idade);
    printf("Qual e a idade dele? \n");
    scanf("%i", &idadeDele);
    int diferenca = idade - idadeDele;
    printf("Oi, %s. A diferenca entre as idades de voces e %i\n", nome, diferenca);  
    return 0;
}