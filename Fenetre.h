#include <iostream>
using namespace std;


class Fenetre{
	public :
		double longueur;
		double largeur;
		char *titre;
		Fenetre(double longueur , double largeur , char *titre);
		void ouvrir_graphique();
		void fermer_graphique();
		int get_couleur_fond();
		int get_x_max();
		int get_y_max();
		int get_couleur(int x , int y);
		void allume(int x , int y, int c);
		
	
};
