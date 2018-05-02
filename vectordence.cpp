
#include <vector>
#include<iostream>
#include "vectordence.h"
using namespace std;
Vectordence::Vectordence()
{
}
Vectordence::Vectordence(int R, int C) :m(R), n(C) {};

/*Vectordence::Vectordence(const Vectordence &b) {
	vector<vector<double>> temlist;
	temlist = b.Initdence;
}
*/

void Vectordence::Initdence(int m, int n) {
	std::vector<vector<double>>vec;
	for (int i = 0; i < m; i++) 
	{
		vec.resize(n);//设置一个m行n列的二维向量
		vec[i].resize(n);
	}

	for (int i = 0; i < vec.size(); i++)
		vec[i].resize(n);

	for (int i = 0; i < vec.size(); i++)
	{
		for (int j = 0; j < vec[0].size(); j++)
		{
			vec[i][j] = (i + 1)*(j + 1);
		}
	}
	vector<double> vec_tmp;
	vector<double>::iterator it;
	vector<vector<double>>::iterator iter;
	cout << "Use iterator : " << endl;
	for (iter = vec.begin(); iter != vec.end(); iter++)
	{
		vec_tmp = *iter;
		for (it = vec_tmp.begin(); it != vec_tmp.end(); it++)
			cout << *it << " ";
		cout << endl;
	}
}

/*bool Vectordence::Insertdence(vector<vector<double>> &vec, double **b) {
	double (*aa)[];
	vector<double> vec_tmp;
	vector<double>::iterator it;
	vector<vector<double>>::iterator iter;
	cout << "Use iterator : " << endl;
	for (iter = vec.begin(); iter != vec.end(); iter++)
	{
		vec_tmp = *iter;
		for (it = vec_tmp.begin(); it != vec_tmp.end(); it++)

	}
	return true;
}
*/

void Vectordence::show_vector(vector<vector<double>> &vec) {
	vector<double> vec_tmp;
	vector<double>::iterator it;
	vector<vector<double>>::iterator iter;
	cout << "Use iterator : " << endl;
	for (iter = vec.begin(); iter != vec.end(); iter++)
	{
		vec_tmp = *iter;
		for (it = vec_tmp.begin(); it != vec_tmp.end(); it++)
			cout << *it << " ";
		cout << endl;
	}

}

Vectordence::~Vectordence()
{
}
