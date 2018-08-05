/*header file*/
// TODO:

#include <iostream>

using namespace std;

template <class T>
class Multiplier
{
private:
    T m1;
    T m2;
    T product;
public:
    void setM1(T input);
    void setM2(T input);
    void setProduct();
    void printEquation();
};

template <class T>
void Multiplier<T>::setM1(T input){
    m1 = input;
}

template <class T>
void Multiplier<T>::setM2(T input){
    m2 = input;
}

template <class T>
void Multiplier<T>::setProduct(){
    product = m1 * m2;
}

template <class T>
void Multiplier<T>::printEquation(){
    cout<<"\n"<<m1<<" * "<<m2<<" = "<<product;
}


