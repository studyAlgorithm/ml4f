#pragma once
#include <string>
#include "DataSet.h"


class LoadDataSet {
public:
	virtual void LoadDense(std::string dataFilePath, DataSet& dataSet) = 0;
	virtual void LoadSparse(std::string dataFilePath, DataSet& dataSet) = 0;

};
