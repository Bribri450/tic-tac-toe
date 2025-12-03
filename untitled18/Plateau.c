#include "Plateau.h"
#include <stdio.h>

void initBoard(char board[3][3]) {

    board[0][0] = '1'; board[0][1] = '2'; board[0][2] = '3';
    board[1][0] = '4'; board[1][1] = '5'; board[1][2] = '6';
    board[2][0] = '7'; board[2][1] = '8'; board[2][2] = '9';
}

void printBoard(char board[3][3]) {

    for (int i = 0; i < 3; i++) {
        printf("%c   |  %c  |   %c\n", board[i][0], board[i][1], board[i][2]);
            if (i != 2) {
                printf("----|-----|----\n");
            }
    }
}

