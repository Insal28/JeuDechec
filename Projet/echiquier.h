#ifndef ECHIQUIER_H
#define ECHIQUIER_H

#include "case.h"
#include "piece.h"
#include "commun.h"

typedef struct{
	Case* tabCases[8][8];
	Piece* tabPieces[8][8];
	Dimension dimension;
}Echiquier;

Echiquier* creerEchiquier();
void afficherEchiquier(Echiquier* echiquier, SDL_Renderer* contexte);


#endif