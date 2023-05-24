#include <stdio.h>

int main(void) {
    char nome[100];

    printf("Seu nome? \n");
    scanf("%s", nome);
    printf("Hello, %s" , nome);
    return 0;
}