/*
 * Player.cpp
 *
 *  Created on: May 4, 2019
 *      Author: faaira
 */

#include "Player.h"

Player::Player(int a,int b):MoveableObject(a,b) {
	// TODO Auto-generated constructor stub
}
void Player::Draw(){
	DrawSquare(getPos().getX(),getPos().getY(),20,colors[FIREBRICK]);
}
void Player::move_up(int u){
	if(getPos().getY()<90)
		getPos().setY(getPos().getY()+10*u);
}
void Player::move_down(int d){
	if(getPos().getY()>10)
		getPos().setY(getPos().getY()+10*d);
}
void Player::move_right(int r){
	if(getPos().getX()<985)
		getPos().setX(getPos().getX()+10*r);
}
void Player::move_left(int l){
	if(getPos().getX()>10)
		getPos().setX(getPos().getX()+10*l);
}
