#include <graphics.h>
#include "Cercle.h"
#include <iostream>
using namespace std;

Cercle::Cercle(int x , int y , int couleur , int a){
	this->x=x;
	this->y=y;
	this->couleur=couleur;
	this->a=a;
	this->type_figure=4;
	
}
void Cercle::dessiner(int ldisp){
	circle(x,y , this->a/2);
}
