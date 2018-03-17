#include <iostream>
#include "testHeader.h"
using namespace std;

Position::Position(){}

Position::Position(double xx, double yy){
	this->x = xx;
	this->y = yy;
}

void Position::SetX(double xx){
	x = xx;
}
void Position::SetY(double yy){
	y = yy;
}
double Position::GetX(){
	return this->x;
}
double Position::GetY(){
	return this->y;
}


