#include "VectorSparse.h"

//�õ�������ά��
int VectorSparse::GetDim() const {
	return n;
}

//�õ������ĵ�i��Ԫ��
double VectorSparse::GetElement(int i) const {
	return elements.at(i);
}
//�޸������ĵ�i��Ԫ��
void VectorSparse::SetElement(int i, double value) {
	elements[i] = value;
}

//��������
VectorSparse::~VectorSparse() {
	
}