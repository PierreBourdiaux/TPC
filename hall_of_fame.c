#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hall_of_fame.h"

// un petit commentaire ?
void afficherDonnee(FILE * file, donnee_t d) {
   // TO DO
}

// un petit commentaire ?
void saisirDonnee(FILE *file, donnee_t * p){
   // TO DO
}

void fgetsNR(char * chaine, int nbChar, FILE * fi){
   fgets(chaine, nbChar, fi);
   chaine[strlen(chaine)-1]='\0';
}

void fctTest(){
   donnee_t essai;
   essai.score = 1000;
   strcpy(essai.jeu, "Jeu cool");
   strcpy(essai.alias, "Moi");
   printf("Score : %d\njeu : %s\nalias : %s\n", essai.score, essai.jeu, essai.alias);


}

