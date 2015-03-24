#ifndef DEPLACEMENTPOSSIBLE_H
#define DEPLACEMENTPOSSIBLE_H

#define LARGEUR_MATRICE_DEPLACEMENT_POSSIBLE 8
#define HAUTEUR_MATRICE_DEPLACEMENT_POSSIBLE 8

/* Matrice qui repr�sente chaque case du tableau afin de savoir si le d�placement est possible
   0 = d�placement interdit
   1 = deplacement Blanc OK
   2 = deplacement Noir OK */

typedef struct {
	short int deplacementPossible[LARGEUR_MATRICE_DEPLACEMENT_POSSIBLE][HAUTEUR_MATRICE_DEPLACEMENT_POSSIBLE];
} DeplacementPossible;

#endif