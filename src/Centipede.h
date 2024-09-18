/*
 * Centipede.h
 *
 *  Created on: May 7, 2019
 *      Author: faaira
 */

#ifndef CENTIPEDE_H_
#define CENTIPEDE_H_
#include"MoveableObject.h"
class Centipede:public MoveableObject{
protected:
	bool boundary_check;
public:
	Centipede();
	Centipede(int x,int y);
	void SetDirection(int);
	bool isBoundaryCheck();
	void setBoundaryCheck(bool boundaryCheck);
	virtual ~Centipede();
};

#endif /* CENTIPEDE_H_ */
