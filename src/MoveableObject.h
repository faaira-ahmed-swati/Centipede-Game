/*
 * MoveableObject.h
 *
 *  Created on: May 4, 2019
 *      Author: faaira
 */
#ifndef MOVEABLEOBJECT_H_
#define MOVEABLEOBJECT_H_
#include"GameObject.h"
class MoveableObject:public GameObject {
	public:
	MoveableObject();
	MoveableObject(int,int);
	virtual ~MoveableObject();
};

#endif /* MOVEABLEOBJECT_H_ */

