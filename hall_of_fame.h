#ifndef hall_of_fame_h
#define hall_of_fame_h

/* DECLARATION DES TYPES PERSONNELS */
typedef struct donnee{
    int score;
    char jeu[100];
    char alias[40];
}donnee_t;

// et de leur typedef si besoin


/* DECLARATIONS DES METHODES */
void afficherDonnee(FILE *, donnee_t);
void saisirDonnee (FILE * , donnee_t *);
// mettre ici les autres declarations
void fgetsNR(char *, int, FILE *);
void fctTest();



#endif