#include "Triangle.h"
#include <graphics.h>

Triangle::Triangle(int x , int y , int couleur , int a , int b){
	this->x=x;
	this->y=y;
	this->couleur=couleur;
	this->a=a;
	this->b=b;
	this->type_figure=7;
}

void Triangle::dessiner(int ldisp){
	int points[8]={x,y,x+4,y+6,x,y+6};
	drawpoly(3,points);
}
