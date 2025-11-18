#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main () {

// Movimentação Torre cinco casas para direita
for (int i = 1; i <= 5; i++)
{
    printf("Torre: Direta %d\n", i);
}
// Pular linha
printf("\n");

// Movimentação Bispo cinco casas cima direita
int j = 1;
while (j <= 5)
{
    printf("Bispo: Cima,Direta %d\n", j);
    j++;
}

printf("\n");

int k = 1;
do
{
   printf("Rainha: Esquerda %d\n", k);
   k++;
} while (k <= 5);

// Movimentação Rainha oito casas para a esquerda



    return 0;
}