// constructing vectors
// constructing vectors
#include <iostream>
#include <vector>

using namespace std;

vector<float>::iterator it;

void printVector(vector<float> vIn);

void printVector(vector<float> vIn)
 {//printing the contents of vIns
    //TODO: Complete the function 
    for(it = vIn.begin(); it != vIn.end(); it++){
      cout<<*it<<" ";
    }

 }
 
