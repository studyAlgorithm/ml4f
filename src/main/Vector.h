#pragma once

class Vector {
private:
	int n; //������ά��

public:
	virtual int GetDim() const = 0; //�õ�������ά��
	virtual double GetElement(int i) const = 0; //���������i��Ԫ��
	virtual void SetElement(int i, double value) = 0; //����i��Ԫ�ص�ֵ����Ϊvalue
	


};
