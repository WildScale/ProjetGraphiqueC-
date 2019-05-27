#include <iostream>
#include <graphics.h>
#include "Fenetre.h"
#include <string>

using namespace std;

Fenetre::Fenetre(double longueur , double largeur, char *titre){
	this->longueur=longueur;
	this->largeur=largeur;
	this->titre=titre;
}

void Fenetre::ouvrir_graphique(){
	initwindow(600,600,"Bonhomme");
}

void Fenetre::fermer_graphique(){
	while(!kbhit()){
			closegraph(); 
		}   
}
int Fenetre::get_x_max(){
	return getmaxx();
}

int Fenetre::get_couleur_fond(){
	return getbkcolor();
}

int Fenetre::get_y_max(){
	return getmaxy();
}

int Fenetre::get_couleur(int x , int y){
	return getpixel(x,y);
}

void Fenetre::allume(int x , int y , int c){
	putpixel(x,y,c);
}
