#include "Dessin.h"
#include <iostream>
#include "Figure.h"
#include "Rectangle1.h"
#include "Arcc.h"
#include "Triangle.h"
#include "Cercle.h"
#include "Ligne.h"
#include "Ellipse1.h"
#include <math.h>
#define PI 3.14159265359
#define Largeur getmaxx()
#define Longueur getmaxy()

#define Sol Largeur*0.75
using namespace std;
int ldisp = 1;
void Dessin::deplacer(int x, int y){	

	for(int i=0 ; i<500; i++){
			//Nuages
			cleardevice();
			
			Ellipse1 ellipse(200,30,60,240,10,15);
			ellipse.dessiner(1);
			Ellipse1 ellipse1(225,20,345,165,20,15);
			ellipse1.dessiner(1);
			Ellipse1 ellipse2(262,27,340,160,20,15);
			ellipse2.dessiner(1);
			Ellipse1 ellipse3(268,42,230,50,20,10);
			ellipse3.dessiner(1);
			Ellipse1 ellipse4(226,46,163,340,31,15);
			ellipse4.dessiner(1);
			Ellipse1 ellipse5(300,21,20,182,21,19);
			ellipse5.dessiner(1);
			Ellipse1 ellipse6(325,31,290,100,21,15);
			ellipse6.dessiner(1);
			Ellipse1 ellipse7(299,45,228,20,33,11);
			ellipse7.dessiner(1);
			Ellipse1 ellipse8(40,30,60,240,10,15);
			ellipse8.dessiner(1);
			Ellipse1 ellipse9(65,20,345,165,20,15);
			ellipse9.dessiner(1);
			Ellipse1 ellipse10(105,27,340,160,20,15);
			ellipse10.dessiner(1);
			Ellipse1 ellipse11(109,42,230,50,20,10);
			ellipse11.dessiner(1);
			Ellipse1 ellipse12(66,46,163,340,31,17);
			ellipse12.dessiner(1);
			
			Ellipse1 ellipse13(450,30,60,240,10,15);
			ellipse13.dessiner(1);
			Ellipse1 ellipse14(475,20,345,165,20,15);
			ellipse14.dessiner(1);
			Ellipse1 ellipse15(512,27,340,160,20,15);
			ellipse15.dessiner(1);
			Ellipse1 ellipse16(518,42,230,50,20,10);
			ellipse16.dessiner(1);
			Ellipse1 ellipse17(476,46,163,340,31,15);
			ellipse17.dessiner(1);
			//Soleil 
			
			Cercle cercle(400,10,30,30);
			cercle.dessiner(1);
			
			if(ldisp==19){
				ldisp=-ldisp;
			}
			
			else if(ldisp>=0)
			
				ldisp=((ldisp+1)%20);
			
			else if(ldisp<0)
			
				ldisp=((ldisp+1)%20);
		  	
		  	
			//Tete
			
			Cercle c1(((x/2)+i),y/2,5,100);
			
			c1.dessiner(1);
			
			//Visage
			
			Cercle c2(((x/2)+i-15),y/2.15,5,13);
			
			c2.dessiner(1);
			
			Cercle c3(((x/2)+i+15),y/2.15,5,13);
			
			c3.dessiner(1);
			
			Triangle t1(((x/2)+i),(y/2)+1,5,13,13);
			
			t1.dessiner(1);
			
			Arcc a1(((x/2)+i),(y/2)-15,5,13,13);
			
			a1.dessiner(1);		
			
			//Corps
			
			Rectangle1 r1((x/2)+i,y,5,100,195);
			
			r1.dessiner(1);
			
			Ligne l1(((x/2)+100)+i,(y/2)+115,5,100,60);
			
			l1.dessiner(1);
			
			//Bras
			
			Ligne l2(((x/2)-100)+i,(y/2)+115,5,-100,60);
			
			l2.dessiner(1);
			
			//Pieds
			
			line((x/2)+i,Sol-50,(x/2)+i+ldisp,Sol+50);
			
			line((x/2)+i,Sol-50,(x/2)+i-ldisp,Sol+50);
	
			line(0,Sol+50,Longueur,Sol+50);
					
            delay(15);

}

}

float j,k;
float step = 0;

void Dessin::deplacerCirc(int x,int y){
		while(!kbhit()){
		
		  cleardevice();
		  
		  j = 100*cos(step);
		  
		  k = 100*sin(step);
		  
		   if(step >= PI){
		  
		   		step = -step;
		  
		   }
		  
		   step = step + PI/100;	
		  
		   if(step <= -PI){
		  
		   		step =0;
			}
						                      
			//Tete
			Cercle c1(((x+50/2)+j),y/2+k,5,100);
			
			c1.dessiner(1); 
			
			//Visage
			Cercle c2(((x+50/2)+j-15),y/2.15+k,5,13);
			
			c2.dessiner(1);
			
			Cercle c3(((x+50/2)+j+15),y/2.15+k,5,13);
			
			c3.dessiner(1);
			
			Triangle t1(((x+50/2)+j),(y/2)+1+k,5,13,13);
			
			t1.dessiner(ldisp);
			
			Arcc a1(((x+50/2)+j),(y/2)-15+k,5,13,13);
			
			a1.dessiner(ldisp);			 
			
			//Corps
			
			Rectangle1 r1((x+50/2)+j,y+k,5,100,195);
			
			r1.dessiner(ldisp);       
			
			//Bras
			
			Ligne l1(((x+50/2)+100)+j,(y/2)+k+115,5,100,60);
			
			l1.dessiner(ldisp);
			
			Ligne l2(((x+50/2)-100)+j,(y/2)+115+k,5,-100,60);
			
			l2.dessiner(ldisp);
			
			//Pieds
			
			line((x+50/2)+j,y+99+k,(x+50/2)+j+ldisp+35,y+199+k);
			
			line((x+50/2)+j,y+99+k,(x+50/2)+j-ldisp-35,y+199+k);
            
			delay(10);

		}
	}




