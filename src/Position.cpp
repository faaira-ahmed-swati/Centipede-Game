/*
 * Position.cpp
 *
 *  Created on: May 4, 2019
 *      Author: faaira
 */

#include "Position.h"

Position::Position() {
	// TODO Auto-generated constructor stub
	x=y=0;
}
Position::Position(int a,int b){
	x=a;
	y=b;
}	
void Position::setX(int X){
	x=X;
}
int Position::getX(){
	return x;
}
void Position::setY(int Y){
	y=Y;
}
int Position::getY(){
	return y;
}
Position::~Position() {
	// TODO Auto-generated destructor stub
}

