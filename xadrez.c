#include <stdio.h>

int main(){

    printf("Movimento da torre:\n");
    for ( int i = 1; i <= 5; i++){
        printf("Direita\n");
    }

printf("\nMovimento do Bispo:\n");

int b = 1; 
while (b<=5)
{
    printf("Cima Direita\n");
    b++;
}

printf("\nMovimento da Rainha:\n");
int r = 1;
do
{
    printf("Esquerda\n");
    r++;
} while (r <=8);

printf("\nMovimento do Cavalo\n");

int movimentoCavalo = 1;

for (int m =1; m <= movimentoCavalo; m++){
    int passosBaixos = 1;
    while (passosBaixos <=2)
    {
        printf("Baixo\n");
        passosBaixos++;
    }
    printf("Esquerda\n");
}
return 0;
}