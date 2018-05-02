#pragma once
#include "LoadDataSet.h"
#include "DataSet.h"
#include <string>


class LoadDataSetSparse : public LoadDataSet {
	virtual void LoadDense(std::string dataFilePath, DataSet& dataSet);
	virtual void LoadSparse(std::string dataFilePath, DataSet& dataSet);
};
