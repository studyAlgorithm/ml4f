#pragma once

#include "Matrix.h"
#include "VectorSparse.h"
#include <map>

class MatrixSparse : public Matrix {

private:
	int m, n;
	std::map<int, VectorSparse>  elements;

public:
	MatrixSparse(); //无参构造函数
	MatrixSparse(int m, int n); //设置矩阵的维度

	virtual int GetRowNum() const; //得到行数
	virtual int GetColNum() const; //得到列数
	virtual void GetRowVector(int i, Vector& rowVector) const; //得到第i行向量
	virtual void GetColVector(int colIndex, Vector& colVector) const; //得到第j列向量
	virtual double GetElement(int i, int j) const; //得到元素 Mij
	virtual void SetElement(int i, int j, double v); //将第i行第j列的值设置为v


};
