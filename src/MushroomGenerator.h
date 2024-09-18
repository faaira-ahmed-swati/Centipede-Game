#ifndef MUSHROOMGENERATOR_H_
#define MUSHROOMGENERATOR_H_
#include"Mushroom.h"
#include<cstdlib>
#include<time.h>
#include"Bomb.h"
class MushroomGenerator:public Mushroom{
protected:
    Mushroom *m_ptr;
    int life;
public:
   MushroomGenerator();
   MushroomGenerator(int ,int );
   bool check();
   void Draw();
};
#endif /* MUSHROOMGENERATOR_H_ */

