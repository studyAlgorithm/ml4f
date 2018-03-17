#include "testHeader.h"
#include <iostream>
using namespace std;

int main(){
	Position pp(3,8);
	cout<<pp.GetX()<<endl<<pp.GetY()<<endl;
	pp.SetX(1.5);
	pp.SetY(1.5);
	cout<<pp.GetX()<<endl<<pp.GetY()<<endl;
	
}
