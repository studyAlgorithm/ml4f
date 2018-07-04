#pragma once

class Vector {
private:
	int n; //向量的维度

public:
	virtual int GetDim() const = 0; //得到向量的维度
	virtual double GetElement(int i) const = 0; //获得向量第i个元素
	virtual void SetElement(int i, double value) = 0; //将第i个元素的值设置为value
	


};
