#include <stdio.h>
#include <stdlib.h>
 void LogMove(FILE *f,int turn,char player, int row,int col){
 if(f==NULL){
 printf("Error de Ouvrire le fichier Log Move\n");
 }
 fprintf(f,"Tour %d : Joueur %c --> (%d,%d)\n",turn,player,row,col);
}
