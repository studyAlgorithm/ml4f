// ARRAY_H.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "ARRAY_H.h"
#include <assert.h>
#include<iostream>
using namespace std;
int main()
{

    return 0;
}



template <class T> 
Array<T>::Array(int sz){
	assert(sz >= 0);
	size = sz;
	list = new T[size];
}

template <class T> 
Array<T>::~Array() {
	delete[] list;
}

template <class T> 
Array<T>::Array(const Array<T> &a) {
	size = a.size;
	list = new T[size];
	for (int i = 0; i < size; i++)
		list[i] = a.list[i];
}

template <class T>
Array<T> &Array<T>::operator = (const Array<T> &rhs){
	if (&rhs != this) {
		if (size != rhs.size) {
			delete[] list;
			size = rhs.size;
			list = new list[size];
		}
		for (int i = 0; i < size; i++)
			list[i] = rhs.list[i];
	}
	return *this;
}

template <class T>
T & Array<T>::operator[ ](int n) {
	assert(n >= 0 && n < size);
	return list[n];
}
template <class T>
const T &Array<T>::operator[ ] (int n) const {
	assert(n >= 0 && n < size);
	return list[n];
}

template <class T>
Array<T>::operator T * () {
	return list;
}

template <class T>
Array<T>::operator const T * () const {
	return list;
}
template <class T>
int Array<T>::getSize() const {
	return this->size;
}

template <class T>
void Array<T>::resize(int sz) {
	assert(sz >= 0);
	if (sz = size);
	return;
	T* newList = new T [sz];
	int n = (sz < size) ? sz : size;
	for (int i = 0; i < n; i++)
		newList[i] = list[i];
	delete[] list;
	list = newList;
	size = sz;
}