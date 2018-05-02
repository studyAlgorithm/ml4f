#include "MatrixSparse.h"
#include <map>

MatrixSparse::MatrixSparse() {}

MatrixSparse::MatrixSparse(int m, int n) {
	this->m = m;
	this->n = n;
}

//�õ�����
int MatrixSparse::GetRowNum() const{
	return m;
};

//�õ�����
int MatrixSparse::GetColNum() const{
	return n;
};

//�õ���i������
void MatrixSparse::GetRowVector(int i, Vector& rowVector) const{
	if (i < 0 || i >= m) {
		exit(-1);
	}

	rowVector.SetDim(this->n);

	if (elements.find(i) != elements.end()) {
		rowVector = elements.at(i);
	}

}; 

//�õ���j������
void MatrixSparse::GetColVector(int colIndex, Vector& colVector) const {
	if (colIndex >= n) {
		std::exit(-1);
	}

	colVector.SetDim(this->m);

	for (int i = 0; i < m; ++i) {
		VectorSparse rowVector;
		GetRowVector(i, rowVector);


		for (int j = 0; j < m; ++j) {

			double value = rowVector.GetElement(j);

			if (value != 0) {
				colVector.SetElement(j, value);
			}
		}

	}


};

double MatrixSparse::GetElement(int i, int j) const {

	if (elements.find(i) != elements.end()) {
		double value = elements.at(i).GetElement(j);
		return value;
	}
	return 0;
}
void MatrixSparse::SetElement(int i, int j, double v){

	if (elements.find(i) != elements.end()) {
		elements.at(i).SetElement(j, v);
	}
	else {
		VectorSparse rowVector(m);
		rowVector.SetElement(j, v);
		elements[i] = rowVector;
	}

};
