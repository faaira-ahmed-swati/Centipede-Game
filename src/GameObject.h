/*
 * GameObject.h
 *
 *  Created on: May 4, 2019
 *      Author: faaira
 */
#ifndef GAMEOBJECT_H_
#define GAMEOBJECT_H_
#include"Position.h"
#include "Board.h"
#include "util.h"
#include <iostream>
#include<string>
#include<cmath>
using namespace std;
class GameObject {
protected:
	Position pos;
public:
	GameObject();
	GameObject(int,int);
	Position& getPos();
	void setPos(Position& p);
	virtual ~GameObject();
};

#endif /* GAMEOBJECT_H_ */
