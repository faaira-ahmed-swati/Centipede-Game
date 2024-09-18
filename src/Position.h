/*
 * Position.h
 *
 *  Created on: May 4, 2019
 *      Author: faaira
 */

#ifndef POSITION_H_
#define POSITION_H_
#include<iostream>
using namespace std;
class Position {
protected:
	int x,y;
public:
	Position();
	Position(int,int);
	void setX(int X);
	int getX();
	void setY(int Y);
	int getY();
	virtual ~Position();
};

#endif /* POSITION_H_ */
