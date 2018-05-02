#include "VectorSparse.h"
#include <map>

VectorSparse::VectorSparse() {}

VectorSparse::VectorSparse(int n) {
	this->n = n;
}

//得到向量的维度
int VectorSparse::GetDim() const {
	return n;
}

//设置向量的维度
void VectorSparse::SetDim(int n) {
	this->n = n;
}

//得到向量的第i个元素
double VectorSparse::GetElement(int i) const {
	std::map<int, double>::const_iterator ite = elements.find(i);

	if (ite == elements.end()) {
		return 0;
	}
	else {
		return elements.at(i);
	}

}
//修改向量的第i个元素
void VectorSparse::SetElement(int i, double value) {
	elements[i] = value;
}

//析构函数
VectorSparse::~VectorSparse() {
	
}