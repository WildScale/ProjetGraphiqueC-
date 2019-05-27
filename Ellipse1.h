#include "Figure.h"
class Ellipse1 : public Figure {
	public :
		int x ;
		int y;
		int debut_angle ;
		int fin_angle;
		int x_rayon ;
		int y_rayon;
		Ellipse1(int x , int y, int debut_angle , int fin_angle , int x_rayon , int y_rayon);
		void dessiner(int ldisp);
};
