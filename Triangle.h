#include <graphics.h>
#include "Figure.h"
class Triangle:public Figure{
	public :
		Triangle(int x , int y, int couleur , int a , int b);
		void dessiner(int ldisp);
};
