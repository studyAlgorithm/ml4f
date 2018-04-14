#pragma once

#include "Vector.h"

class Matrix {
private:
	int m; //行数
	int n; //列数
public:
	virtual int GetRowNum() = 0; //得到行数
	virtual int GetColNum() = 0; //得到列数
	virtual Vector& GetRowVector(int i) = 0; //得到第i行向量
	virtual Vector& GetColVector(int colIndex) = 0; //得到第j列向量
	virtual int GetElement(int i, int j) = 0; //得到元素 Mij

};
