/*
 * Bomb.h
 *
 *  Created on: May 5, 2019
 *      Author: faaira
 */

#ifndef BOMB_H_
#define BOMB_H_
#include"MoveableObject.h"
class Bomb:MoveableObject {
public:
	Bomb();
	Bomb(int,int);
	void Draw();
	void move(int);
	int getX();
	int getY();
	virtual ~Bomb();
};

#endif /* BOMB_H_ */
