#pragma once

#include "Matrix.h"
#include "VectorSparse.h"
#include <map>

class MatrixSparse : public Matrix {

private:
	int m, n;
	std::map<int, VectorSparse>  elements;

public:
	MatrixSparse(); //�޲ι��캯��
	MatrixSparse(int m, int n); //���þ����ά��

	virtual int GetRowNum() const; //�õ�����
	virtual int GetColNum() const; //�õ�����
	virtual void GetRowVector(int i, Vector& rowVector) const; //�õ���i������
	virtual void GetColVector(int colIndex, Vector& colVector) const; //�õ���j������
	virtual double GetElement(int i, int j) const; //�õ�Ԫ�� Mij
	virtual void SetElement(int i, int j, double v); //����i�е�j�е�ֵ����Ϊv


};
