#pragma once
#include <iostream>
#include "MatrixSparse.h"


int TestMatrixSparse() {
	std::cout << "TestMatrixSparse" << std::endl;

	MatrixSparse ms(2,3);

	std::cout << ms.GetRowNum() << std::endl;
	std::cout << ms.GetColNum() << std::endl;

	for (int i = 0; i < 1000000000000; ++i) {
		VectorSparse rowVector;
		ms.GetColVector(0, rowVector);
		VectorSparse colVector;
		ms.GetRowVector(0, colVector);
	}


	std::cout << ms.GetElement(0, 0) << std::endl;
	


	return 0;
}