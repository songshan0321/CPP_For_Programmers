/*Goal: Practice writing generic functions*/

#include<iostream>

using namespace std;

template <typename T>
T sumTwo(T input1, T input2);

int main()
{
    int a = 90;
    int b = 1; 
    std::cout<<a <<" + "<<b<<" = "<< sumTwo(a,b);
    return 0;
}

template <typename T>
T sumTwo(T input1, T input2){
    return input1 + input2;
}
