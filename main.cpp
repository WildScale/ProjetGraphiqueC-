#include <iostream>
#include <graphics.h>
#include "Fenetre.h"
#include "Dessin.h"
#include "Cercle.h"
#include "Arcc.h"
int main(){
	Fenetre fenetre(1000,1000,"Bonhomme Graphics.h");
	Dessin dessin;	
	int x_pos,y_pos;
	cout<<"Trajectoire rectiligne ou circulaire ? "<<endl;
	int trajectoire ;
	cin>>trajectoire ;
	if(trajectoire==1){
	fenetre.ouvrir_graphique();
	x_pos=fenetre.get_x_max()/2;
	y_pos=fenetre.get_y_max()/2;	
    dessin.deplacer(x_pos,y_pos);
	
	getch();
	fenetre.fermer_graphique();
	}
	else if(trajectoire==2){
	fenetre.ouvrir_graphique();
	x_pos=fenetre.get_x_max()/2;
	y_pos=fenetre.get_y_max()/2;	
    dessin.deplacerCirc(x_pos,y_pos);
	
	getch();
	fenetre.fermer_graphique();
	}
 	
    
	return 0;
}
