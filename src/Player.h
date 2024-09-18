
#ifndef PLAYER_H_
#define PLAYER_H_
#include"MoveableObject.h"
class Player:public MoveableObject{
public:
	Player(int a,int b);
	void Draw();
	void move_up(int );
	void move_down(int );
	void move_right(int );
	void move_left(int );
};

#endif /* PLAYER_H_ */
