#include "VectorSparse.h"
#include <map>

VectorSparse::VectorSparse() {}

VectorSparse::VectorSparse(int n) {
	this->n = n;
}

//�õ�������ά��
int VectorSparse::GetDim() const {
	return n;
}

//����������ά��
void VectorSparse::SetDim(int n) {
	this->n = n;
}

//�õ������ĵ�i��Ԫ��
double VectorSparse::GetElement(int i) const {
	std::map<int, double>::const_iterator ite = elements.find(i);

	if (ite == elements.end()) {
		return 0;
	}
	else {
		return elements.at(i);
	}

}
//�޸������ĵ�i��Ԫ��
void VectorSparse::SetElement(int i, double value) {
	elements[i] = value;
}

//��������
VectorSparse::~VectorSparse() {
	
}