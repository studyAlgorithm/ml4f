#pragma once
#include <string>

class LoadDataSet {
public:
	virtual void LoadDense(std::string dataFilePath) = 0;
	virtual void LoadSparse(std::string dataFilePath) = 0;

};
