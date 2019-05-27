#include "Ellipse1.h"
#include <graphics.h>

Ellipse1::Ellipse1(int x , int y , int debut_angle , int fin_angle , int x_rayon , int y_rayon){
	this->x=x;
	this->y=y;
	this->debut_angle=debut_angle;
	this->fin_angle=fin_angle;
	this->x_rayon=x_rayon;
	this->y_rayon=y_rayon;

}

void Ellipse1::dessiner(int ldisp){
	ellipse(x , y , debut_angle , fin_angle ,  x_rayon ,  y_rayon);
}
