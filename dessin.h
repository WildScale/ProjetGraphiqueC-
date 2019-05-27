#ifndef DESSIN_H
#define DESSIN_H
#include <graphics.h>
#include"Figure.h"
class Dessin{
		
	public :
		int nbr;	
		Figure figures[500];
		void deplacer(int x, int y);
		void deplacerCirc(int x,int y);
};
#endif

