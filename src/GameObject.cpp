
#include "GameObject.h"
GameObject::GameObject(){
	pos.setX(0);
	pos.setY(0);
}	
GameObject::GameObject(int a,int b){
	pos.setX(a);
	pos.setY(b);
}	
Position& GameObject::getPos(){
	return pos;
}

void GameObject::setPos(Position& p) {
	this->pos = p;
}
GameObject::~GameObject() {
	// TODO Auto-generated destructor stub
}

