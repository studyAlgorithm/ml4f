#pragma once
#include "Vector.h"

class Matrix {

public:
	virtual int GetRowNum() const = 0; //得到行数
	virtual int GetColNum() const = 0; //得到列数
	virtual void GetRowVector(int i, Vector& rowVecotr) const = 0; //得到第i行向量
	virtual void GetColVector(int colIndex, Vector& rowVector) const = 0; //得到第j列向量
	virtual double GetElement(int i, int j) const = 0; //得到元素 Mij
	virtual void SetElement(int i, int j, double v) = 0; //将第i行第j列的值设置为v

};
