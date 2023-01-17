#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void girar(char matriu_clau[][6], int clau)
{
    char matriu_auxiliar[6][6];
    int i, j;

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            matriu_auxiliar[i][j] = matriu_clau[i][j];
        }
    }

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
                matriu_clau[i][j] = matriu_clau[i][j+clau];
                printf("%c", matriu_clau[i][j]);
            
 
        }
    }


/*   for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            matriu_clau[i][j] = matriu_auxiliar[i][j];
        }
    }

    printf("\n");

    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%c", matriu_clau[i][j]);
        }
    }

    printf("\n");   */



    matriu_clau[6][2] = matriu_auxiliar[0][0];
    matriu_clau[6][3] = matriu_auxiliar[0][1];
    matriu_clau[6][4] = matriu_auxiliar[0][2];
    matriu_clau[6][5] = matriu_auxiliar[0][3];
    printf("%c", matriu_clau[6][2]);
    printf("%c", matriu_clau[6][3]);
    printf("%c", matriu_clau[6][4]);
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
    
    girar(matriu_clau, 4);

    printf("\n");

    return 0;
}
