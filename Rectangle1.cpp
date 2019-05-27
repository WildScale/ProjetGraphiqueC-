#include <graphics.h>
#include "Rectangle1.h"


Rectangle1::Rectangle1(int x,int y, int couleur, int a,int b){
	this->x = x;
	this->y = y;
	this->couleur = couleur;
	this->a = a;
	this->b = b;
	type_figure = 5;
} 

void Rectangle1::dessiner(int ldisp){
	rectangle(x-(a/2) , y-(b/2) , x+(a/2) , y+(b/2) );
}
