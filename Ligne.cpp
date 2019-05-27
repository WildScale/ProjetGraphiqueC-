#include <graphics.h>
#include "Ligne.h"
#define ScreenWidth getmaxx()
#define ScreenHeight getmaxy()
#define GroundY ScreenHeight*0.75
Ligne::Ligne(int x , int y , int couleur , int a , int b){
	this->x=x;
	this->y=y;
	this->couleur=couleur;
	this->a=a;
	this->b=b;
	
	if(b==0){
		type_figure=1;
	}
	else if(a==0){
		type_figure = 2;
	}else{
		type_figure = 3;
	}
	
	
}
void Ligne::dessiner(int ldisp){
	switch(this->type_figure){
		case 1 :
			b = 0 ;
			line(x-(a/2) , y , x+(a/2) , y);
			break ;
		case 2 : 
		    a = 0 ;
			line(x , y-(b/2) , x , y+(b/2));
			break ; 
		case 3 :
			if(y>0){
				line(x - (a/2) , y-(b/2) , x+(a/2) , y+(b/2));
			}else{
				this->y = -y;
				line(x - (a/2) , y+(a/2) , x+(b/2) , y-(b/2));
			}		    
			break ; 
	
		case 9 :
			line(x,GroundY-50,x+ldisp+30,GroundY+50);
			line(x,GroundY-50,x-ldisp-30,GroundY+50);
			break;
}
}
