#include <graphics.h>
#include "Arcc.h"
#include <iostream>
using namespace std;

Arcc::Arcc(int x , int y, int couleur , int a , int b){
	this->x=x;
	this->y=y;
	this->couleur=couleur;
	this->a=a;
	this->b=b;
	this->type_figure=8;
}


void Arcc::dessiner(int ldisp){
	arc(x,y,260,280,50);
}
