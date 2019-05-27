#ifndef FIGURE_H
#define FIGURE_H
class Figure{
	
	public:		
		int type_figure, x , y , a ,b , couleur ;
		int get_x_centre();
		int get_y_centre();
		int get_couleur();
		Figure(int x , int y , int a , int b , int couleur);
		Figure();
		virtual void dessiner(int ldisp);
};
#endif

