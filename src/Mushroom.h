/*
 * Mushroom.h
 *
 *  Created on: May 4, 2019
 *      Author: faaira
 */

#ifndef MUSHROOM_H_
#define MUSHROOM_H_
#include"GameObject.h"
class Mushroom:public GameObject{
public:
    Mushroom();
    Mushroom(int a,int b);
    virtual ~Mushroom();
};
#endif /* MUSHROOM_H_ */
