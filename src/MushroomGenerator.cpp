
#include"MushroomGenerator.h"
#include"CentipedeGenerator.h"
#include"Player.h"
MushroomGenerator::MushroomGenerator():Mushroom(0,0){
	m_ptr=new Mushroom[27];
      for(int i=0;i<27;i++){
		m_ptr[i].getPos().setX(0);
         	m_ptr[i].getPos().setY(0);
      }
}
MushroomGenerator::MushroomGenerator(int x_pos,int y_pos):Mushroom(x_pos,y_pos){
      m_ptr=new Mushroom[27];
      for(int i=0;i<27;i++){
      	m_ptr[i].getPos().setX(rand()%650+150);
            m_ptr[i].getPos().setY(rand()%650+150);
      }
}		
void MushroomGenerator::Draw(){
	for (int i=0;i<27;i++)
		DrawSquare(m_ptr[i].getPos().getX(), m_ptr[i].getPos().getY(),10,colors[ORANGE]);
}
bool MushroomGenerator::check(){
	Bomb b;
	for(int i=0;i<27;i++){
		if(b.getX()==m_ptr[i].getPos().getX() || b.getY()==m_ptr[i].getPos().getY())
			life++;		
		if(life==2){
			m_ptr[i].getPos().setX(10000);
			m_ptr[i].getPos().setY(10000);	
		}	
	}
	CentipedeGenerator c;
	for(int i=0;i<27;i++){
		if(c.getCX()==m_ptr[i].getPos().getX() || c.getCY()==m_ptr[i].getPos().getY())
			c.move();
	}		
}			
			
