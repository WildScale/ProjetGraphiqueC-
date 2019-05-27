#include <graphics.h>
#include "Figure.h"
class Ligne:public Figure{
	public :
		Ligne(int x , int y , int couleur , int a , int b);
		void dessiner(int ldisp);
};
