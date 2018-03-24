#ifndef LA_VECTOR_H
#define LA_VECTOR_H

#include <vector>

template<class DataType>
class LA_Vector{
    private:
        std::vector<DataType> dataVector;
    public:
        LA_Vector(std::vector<DataType> inputVector);
        void putIndex( int index ); //get element value by index
        DataType getIndex( int index ); //update element value by index
        DataType operator + (); //vector plus methods
        DataType operator - (); //vector minus methods
        ~LA_Vector();
    

};

template<class DataType>
LA_Vector<DataType>::LA_Vector(std::vector<DataType> inputVector){
    this->dataVector = inputVector;
}

template<class DataType>
LA_Vector<DataType>::~LA_Vector(){
    return;
}


#endif
