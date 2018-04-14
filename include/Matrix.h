#pragma once

#include "Vector.h"

class Matrix {
private:
	int m; //����
	int n; //����
public:
	virtual int GetRowNum() = 0; //�õ�����
	virtual int GetColNum() = 0; //�õ�����
	virtual Vector& GetRowVector(int i) = 0; //�õ���i������
	virtual Vector& GetColVector(int colIndex) = 0; //�õ���j������
	virtual int GetElement(int i, int j) = 0; //�õ�Ԫ�� Mij

};
