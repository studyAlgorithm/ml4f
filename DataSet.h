#pragma once
#include "Matrix.h"
#include "Vector.h"

enum dataType {label, noLabel};

class DataSet {
private:
	dataType dt;
	Matrix* matrix;
	Vector* labelVector;
public:
	DataSet(Matrix* matrix, Vector* labelVector) :matrix(matrix), labelVector(labelVector) {
		dt = label;
	};
	DataSet(Matrix* matrix) : matrix(matrix), labelVector((Vector*)nullptr) {
		dt = noLabel;
	};

	~DataSet() {
		delete matrix;
		if (dt == label) {
			delete labelVector;
		}
	};

};