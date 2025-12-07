#ifndef UNTITLED18_PLATEAU_H
#define UNTITLED18_PLATEAU_H
void initBoard(char board[3][3]);
void printBoard(char board[3][3]) ;
void placement(char board[3][3]);

typedef struct Joueur {

    char nom[50];
    int position_x;
    int position_y;

}Joueur;

typedef struct JJoueur {

    char nom[50];
    int position_x;
    int position_y;

}JJoueur;
#endif //UNTITLED18_PLATEAU_H