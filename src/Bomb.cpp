/*
 * Bomb.cpp
 *
 *  Created on: May 5, 2019
 *      Author: faaira
 */

#include "Bomb.h"
#include"Player.h"
#include"MushroomGenerator.h"
Bomb::Bomb():MoveableObject(0,0){
	// TODO Auto-generated constructor stub

}
Bomb::Bomb(int x_pos,int y_pos):MoveableObject(x_pos,y_pos){
}
void Bomb::Draw(){
	DrawSquare(getPos().getX()+6,getPos().getY()+6,5, colors[WHITE]);
	move(1);		
}
void Bomb::move(int i){
	MushroomGenerator mg;
	mg.check();
	getPos().setY(getPos().getY()+5*i);
}
int Bomb::getX(){
	return getPos().getX();
}
int Bomb::getY(){
	return getPos().getY();
}			
Bomb::~Bomb() {
	// TODO Auto-generated destructor stub
}

