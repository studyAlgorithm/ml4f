#pragma once
#include <iostream>
#include "VectorSparse.h"


int TestVectorSparse() {

	std::cout << "TestVectorSparse:" << std::endl;

	VectorSparse vs;
	vs.SetElement(0, 2);
	vs.SetElement(0, 3);

	std::cout << vs.GetElement(0) << std::endl;

	return 0;
}
