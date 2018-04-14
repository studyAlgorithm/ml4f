#include "VectorSparse.h"

//得到向量的维度
int VectorSparse::GetDim() const {
	return n;
}

//得到向量的第i个元素
double VectorSparse::GetElement(int i) const {
	return elements.at(i);
}
//修改向量的第i个元素
void VectorSparse::SetElement(int i, double value) {
	elements[i] = value;
}

//析构函数
VectorSparse::~VectorSparse() {
	
}