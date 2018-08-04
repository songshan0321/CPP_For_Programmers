#include<iostream>

//C++ allows us to 'overload' the same function name as long as
//the variable types in the function inputs are different.

class Compare
{
public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);
    int findSmaller(int input1, int input2, int input3);
    float findSmaller(float input1, float input2, float input3);
    char findSmaller(char input1, char input2, char input3);
    int findSmaller(int array[], int size);
    float findSmaller(float array[], int size);
    char findSmaller(char array[], int size);
};

int Compare::findSmaller(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
float Compare::findSmaller(float input1, float input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
// Compare three arguments
int Compare::findSmaller(int input1, int input2, int input3)
{
    int min = input1;
    if(input2<min){
        min = input2;
    }
    if(input3<min){
        min = input2;
    }
    return min;
}

float Compare::findSmaller(float input1, float input2, float input3)
{
    float min = input1;
    if(input2<min){
        min = input2;
    }
    if(input3<min){
        min = input2;
    }
    return min;
}

char Compare::findSmaller(char input1, char input2, char input3)
{
    char min = input1;
    if(input2<min){
        min = input2;
    }
    if(input3<min){
        min = input2;
    }
    return min;
}

// Compare arrays
int Compare::findSmaller(int array[], int size){
    int min = array[0];
    for(int i=1;i<size;i++){
        if(array[i]<min){
            min = array[i];
        }
    }
    return min;
}

float Compare::findSmaller(float array[], int size){
    float min = array[0];
    for(int i=1;i<size;i++){
        if(array[i]<min){
            min = array[i];
        }
    }
    return min;
}
char Compare::findSmaller(char array[], int size){
    char min = array[0];
    for(int i=1;i<size;i++){
        if(array[i]<min){
            min = array[i];
        }
    }
    return min;
}


