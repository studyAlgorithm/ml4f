#pragma once

class Vector {

public:
	virtual int GetDim() const = 0; //得到向量的维度
	virtual void SetDim(int i) = 0; //设置向量的维度
	virtual double GetElement(int i) const = 0; //获得向量第i
	virtual void SetElement(int i, double value) = 0; //将第i个元素的值设置为value
	


};
