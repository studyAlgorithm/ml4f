#pragma once

class Vector {

public:
	virtual int GetDim() const = 0; //�õ�������ά��
	virtual void SetDim(int i) = 0; //����������ά��
	virtual double GetElement(int i) const = 0; //���������i
	virtual void SetElement(int i, double value) = 0; //����i��Ԫ�ص�ֵ����Ϊvalue
	


};
