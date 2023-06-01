#include <stdio.h>
#include <string.h>


int main(void)
{
    int altura = 0;
    char piramed[100][50];
    char piramed2[100][50];
    do
    {
        printf("Digite altura \n");
        scanf("%d", &altura);
        while (getchar() != '\n');

    } while (altura < 1 || altura > 8);

    for (int i = 0; i <= altura; i++)
    {   
        strcpy(piramed[i], "#");
        strcpy(piramed2[i], "#");
        printf("\n");

        for (int y = 0; y < i; y++)
        {
            printf("%s", piramed2);
        }
        for (int space = altura; space >= i; space--)
        {
            printf(" ");
        }

        for (int y = 0; y < i; y++)
        {
            printf("%s", piramed);
        }
    }
}
