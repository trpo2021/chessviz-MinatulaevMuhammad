#include <iostream> 
#include <stdlib.h>
#include <stdio.h>
#include "print.h"


void print(char chessboard[11][11])
{
    int i, z;
    printf("\n");
    for (i = 0; i < 8; i++) {
        for (z = 0; z < 9; z++) {
            if(z==1) 
            printf("  %c ", chessboard[i][z]);
            else
                printf("%c ", chessboard[i][z]);
        }
        printf("\n");
    }
    printf("\n    a b c d e f g h\n");
    
}