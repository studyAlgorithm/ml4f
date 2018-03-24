#include <iostream>
#include <vector>
#include "LA_Vector.h"

using namespace std;

int main(){
    vector<int> dataVector;
    dataVector.push_back(1);
    dataVector.push_back(2);

    LA_Vector<int> laVector(dataVector);


    cout << "done" << endl;
}
