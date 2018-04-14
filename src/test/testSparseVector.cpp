#include <iostream>
#include "VectorSparse.h"


int main() {
	VectorSparse vs;
	vs.SetElement(0, 2);
	vs.SetElement(0, 3);

	std::cout << vs.GetElement(0) << std::endl;

	std::system("pause");
	return 0;
}