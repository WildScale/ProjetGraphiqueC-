#include <graphics.h>
#include "Figure.h"
class Cercle: public Figure{
	public:
		Cercle(int x , int y, int couleur , int a);
		void dessiner(int ldisp);
};
