#include <graphics.h>
#include "Figure.h"
#include "Fenetre.h"
#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight*0.75
int figure, x , y , a ,b , couleur ;

int Figure::get_couleur(){
	return this->couleur;
}
Figure::Figure()
{
	
}

int Figure::get_x_centre(){
	return this->x;
}
int Figure::get_y_centre(){
	return this->y;
}


 void Figure::dessiner(int ldisp){
}


