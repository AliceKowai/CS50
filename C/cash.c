#include <stdio.h>

int main()
{
    float valorDaCompra= 0.0;

    do
    {
        printf("Qual foi o valor da compra? \n");
        scanf("%d ", valorDaCompra);
    } while (valorDaCompra < 0);

    printf("%d",valorDaCompra);
}
