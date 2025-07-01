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


return 0;}