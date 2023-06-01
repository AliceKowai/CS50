#include <stdio.h>

int main(void) {
    int altura = 0;
    do
    {
        printf("Digite altura \n");
        scanf("%d", &altura);
        while (getchar() != '\n');
        
        
    } while (altura < 1 || altura > 8);
    for (int i = 0; i <= altura; i++)
    {
        printf("\n");
        for (int y = 0; y < i; y++)
        {
            printf("#");
            printf("#");
        }
    }
    
}
