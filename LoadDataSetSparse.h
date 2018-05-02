#pragma once
#include "LoadDataSet.h"
#include <string>

class LoadDataSetSparse : public LoadDataSet {
	virtual void LoadDense(std::string dataFilePath);
	virtual void LoadSparse(std::string dataFilePath);
};
