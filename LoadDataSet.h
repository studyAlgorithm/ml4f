#pragma once
class LoadDataSet
{
public:
	virtual void DataSet()=0;
	virtual int getDim()=0;
	virtual double GetElement()=0;
	virtual int GetRowNum()=0;
	virtual int GetColNum()=0;
	virtual vector GetRowVector()=0;
	virtual vector GetColVector()=0;
	virtual ~LoadDataSet()=0;
private:
	
	int m;
	int n;
};

