#include <iostream>
using namespace std;

class  Position{
private:
	double x,y;
public:
	Position(double xx,double yy):x(xx),y(yy){};
	void SetX(double x);
	void SetY(double y);
	double GetX();
	double GetY();
	
};

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

int main(){
	Position pp(3,8);
	cout<<pp.GetX()<<endl<<pp.GetY()<<endl;
	pp.SetX(1.5);
	pp.SetY(1.5);
	cout<<pp.GetX()<<endl<<pp.GetY()<<endl;
	int i;
	cin >> i;
	
}
