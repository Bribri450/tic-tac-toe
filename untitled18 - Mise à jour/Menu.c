#include "Menu.h"
#include <stdio.h>
#include "Plateau.h"


int debut() {
    char nb;

    printf("Bienvenue pour commencer une partie de TIC TAC TOE veuillez appuyer sur a\n");
    scanf(" %c", &nb);

    if (nb != 'a') {
        printf("Erreur");
    }
    return 0;
}



void choix2() {

    Joueur J1;
    JJoueur J2;

    printf("Entrer votre prenom J1 : ");
    scanf("%s", &J1.nom);
    printf("J1 : %s\n");

    printf("Entrer votre prenom J2: ");
    scanf("%s", &J2.nom);
    printf("J2 : %s\n");

}


int menu() {

    int choix;
    char board[3][3];

    printf("1. Lancer une partie\n");
    printf("2. Choix des joueurs\n");
    printf("3. Acceder aux fichiers contenant les logs\n");
    printf("4. Quittez le jeu tappez\n");
    scanf("%i", &choix);


    switch (choix) {
        case 1 :
            initBoard(board);
            printBoard(board);
            choix2();
            placement(board);
            break;
        case 2 :
            printf("Choix des joueurs");
            break;
        case 3 :
            printf("Acceder aux fichiers contenant les logs");
            break;
        case 4 :
            return 0;
    }

    return 0;
}