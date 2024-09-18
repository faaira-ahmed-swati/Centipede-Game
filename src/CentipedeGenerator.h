/*
 * CentipedeGenerator.h
 *
 *  Created on: May 7, 2019
 *      Author: faaira
 */

#ifndef CENTIPEDEGENERATOR_H_
#define CENTIPEDEGENERATOR_H_
#include"Centipede.h"
class CentipedeGenerator:public Centipede {
public:	
	Centipede *ptr;
	bool boundary_check;
	CentipedeGenerator();
	CentipedeGenerator(int,int);
	void Draw();
	void move();
	int getCX();
	int getCY();
	Centipede*& getPtr();
	void setPtr(Centipede*& ptr);
	bool isBoundaryCheck();
	void setBoundaryCheck(bool boundaryCheck);
	virtual ~CentipedeGenerator();
};

#endif /* CENTIPEDEGENERATOR_H_ */
