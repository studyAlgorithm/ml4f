#ifndef TESTHEADER_H
#define TESTHEADER_H

class  Position{
private:
	double x,y;
public:
	Position();
	Position(double xx,double yy);
	void SetX(double x);
	void SetY(double y);
	double GetX();
	double GetY();
	
};

#endif 
