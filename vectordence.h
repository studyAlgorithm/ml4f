#pragma once
#include <vector>
#include<iostream>
using namespace std;
class Vectordence
{
public:
	Vectordence();
	Vectordence(int m, int n);
	void Initdence(int m, int n);//��ʼ������
	//Vectordence(const vector<vector<double>>bb);//��������
//bool Insertdence(vector<vector<double>> &vec, double **b);
//void swap(vector<vector<double>> & other);
	void show_vector(vector<vector<double>> &vec);

	~Vectordence();
private:
	std::vector<double> vec;
	int m;
	int n;
};