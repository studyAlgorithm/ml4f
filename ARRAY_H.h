#pragma once
#ifndef ARRAY_H
#define ARRAY_H
#include <cassert>

template <class T>
class Array
{
private:
	T* list;
	int size;
public:
	Array(int size=50);
	Array(const Array<T> &a);
	~Array();
	Array<T> & operator = (const Array<T> &rhs);
	T & operator [ ](int n);
	const T & operator [] (int n) const;
	operator T * ();//指针转换运算符，把对象转换成指针
	operator const T * () const;
	int getSize() const;
	void resize(int sz);
};
#endif
