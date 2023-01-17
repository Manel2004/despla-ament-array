#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void girar(char matriu_clau[][6])
{
    int aux = matriu_clau[0][0];
    int i, j;

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%c", matriu_clau[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            matriu_clau[i][j] = matriu_clau[i][j+1];
            printf("%c", matriu_clau[i][j]);
        }
    }

    matriu_clau[6][5] = aux;
    printf("%c", matriu_clau[6][5]);
}


int main()
{
    char matriu_clau[6][6] = {{'A', 'B', 'C', 'D', 'E', 'F'},
                              {'G', 'H', 'I', 'J', 'K', 'L'},
                              {'M', 'N', 'O', 'P', 'Q', 'R'},
                              {'S', 'T', 'U', 'V', 'W', 'X'},
                              {'Y', 'Z', ' ', '1', '2', '3'},
                              {'4', '5', '6', '7', '8', '9'}};
    
    girar(matriu_clau);

    printf("\n");

    return 0;
}
