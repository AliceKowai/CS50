#include <stdio.h>
#include <string.h>

char permission[4];
int reject = -1;

void meow(void);
void doWhile(void);

int main (void){

   while (strcmp(permission, "s")!=0)
   {
        printf("Voce quer se casar comigo?");
        scanf("%s", permission);
        reject++;
   }
   printf("A teimosia e a chave para a felicidade? Voce foi rejeitada %i vezes ", reject);
   meow();
   doWhile();
    
    return 0;
}


void meow (void){

    for (int i = 0; i < 10; i++)
    {
        printf("%i \n",i);
    }
    
}

void doWhile(void){
    char racao[4];
    do{
        printf("meow, meoooow **Olhando, esperando junto ao pote vazio, vai colocar racao?**");
        scanf("%s", racao);
    } while (strcmp(racao, "s")!=0);{
        printf("meooooow, meooooow");
    }
    
}