/*
 * CentipedeGenerator.cpp
 *
 *  Created on: May 5, 2019
 *      Author: faaira
 */

#include "CentipedeGenerator.h"
#include"MushroomGenerator.h"
CentipedeGenerator::CentipedeGenerator():Centipede(0,0) {
	// TODO Auto-generated constructor stub
	ptr=new Centipede[6];
	for(int i=0;i<6;i++){
		ptr[i].getPos().setX(0);
	    	ptr[i].getPos().setY(0);
	}
}
CentipedeGenerator::CentipedeGenerator(int x,int y):Centipede(x,y) {
	ptr=new Centipede[6];
	int temp=x;
	for(int i=0;i<6;i++){
		ptr[i].getPos().setX(temp);
	    	ptr[i].getPos().setY(y);
	    	temp-=18;
	}
}
Centipede*& CentipedeGenerator::getPtr(){
	return ptr;
}
bool CentipedeGenerator::isBoundaryCheck(){
	return boundary_check;
}
void CentipedeGenerator::setBoundaryCheck(bool boundaryCheck) {
	boundary_check = boundaryCheck;
}
void CentipedeGenerator::setPtr(Centipede*& ptr) {
	this->ptr = ptr;
}
int CentipedeGenerator::getCX(){
	ptr[0].getPos().getX();
}
int CentipedeGenerator::getCY(){
	ptr[0].getPos().getY();
}		
void CentipedeGenerator::Draw(){
	MushroomGenerator mg;
	for(int i=0;i<6;i++){
		mg.check();
		DrawCircle(ptr[i].getPos().getX(),ptr[i].getPos().getY(),10,colors[GREEN]);
	}	
}				
void CentipedeGenerator::move(){
	if(ptr[0].getPos().getX()<30){
  	 	ptr[0].SetDirection(1);
   	 	DrawCircle(ptr[0].getPos().getX(),ptr[0].getPos().getY(),10,colors[GREEN]);
   	 	ptr[0].setBoundaryCheck(false);
    		ptr[0].getPos().setX(32);
  	}	
	if(ptr[0].getPos().getX()>20 && ptr[0].getPos().getX()<980){
    		ptr[0].SetDirection(0);
    		DrawCircle(ptr[0].getPos().getX(),ptr[0].getPos().getY(),10,colors[GREEN]);
  	}
  	if(ptr[0].getPos().getX()>960){
    		ptr[0].SetDirection(1);
    		DrawCircle(ptr[0].getPos().getX(),ptr[0].getPos().getY(),10,colors[GREEN]);
    		ptr[0].setBoundaryCheck(true);
    		ptr[0].getPos().setX(958); 
  	}	
	
}						
CentipedeGenerator::~CentipedeGenerator() {
	// TODO Auto-generated destructor stub
	delete[]ptr;
}

