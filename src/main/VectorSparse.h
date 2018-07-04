#pragma once

#include "Vector.h"
#include <map>

class VectorSparse : public Vector {

private:
	int n;
	std::map<int, double> elements;

public:
	virtual int GetDim() const;
	virtual double GetElement(int i) const;
	virtual void SetElement(int i, double value);

	~VectorSparse();

};
