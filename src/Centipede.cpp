/*
 * Centipede.cpp
 *
 *  Created on: May 4, 2019
 *      Author: faaira
 */

#include "Centipede.h"

Centipede::Centipede():MoveableObject(0,0){
	// TODO Auto-generated constructor stub
	boundary_check=false;
}
Centipede::Centipede(int x,int y):MoveableObject(x,y){
	boundary_check=false;
}
bool Centipede::isBoundaryCheck(){
	return boundary_check;
}
void Centipede::setBoundaryCheck(bool boundaryCheck) {
	boundary_check = boundaryCheck;
}
void Centipede::SetDirection(int direction){
	if(direction==0){
		if(boundary_check==false)
			getPos().setX(getPos().getX()+10);	
		else if(boundary_check==true)
			getPos().setX(getPos().getX()-10);	
	}
	else if(direction==1)
		getPos().setY(getPos().getY()-40);
}
Centipede::~Centipede() {
	// TODO Auto-generated destructor stub
}

