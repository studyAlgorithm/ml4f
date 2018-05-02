#pragma once
#include "Vector.h"

class Matrix {

public:
	virtual int GetRowNum() const = 0; //�õ�����
	virtual int GetColNum() const = 0; //�õ�����
	virtual void GetRowVector(int i, Vector& rowVecotr) const = 0; //�õ���i������
	virtual void GetColVector(int colIndex, Vector& rowVector) const = 0; //�õ���j������
	virtual double GetElement(int i, int j) const = 0; //�õ�Ԫ�� Mij
	virtual void SetElement(int i, int j, double v) = 0; //����i�е�j�е�ֵ����Ϊv

};
