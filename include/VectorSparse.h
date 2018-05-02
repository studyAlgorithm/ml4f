#pragma once

#include "Vector.h"
#include <map>

class VectorSparse : public Vector {

private:
	int n;
	std::map<int, double> elements;

public:
	VectorSparse();
	VectorSparse(int n);

	virtual int GetDim() const;
	virtual void SetDim(int n);
	virtual double GetElement(int i) const;
	virtual void SetElement(int i, double value);

	~VectorSparse();

};
