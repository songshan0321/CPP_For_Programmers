/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**The each print of the array should separate the numbers in the array by
**one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int userInput[41];
    int temp;
    for(int i = 0; i <41; i++)
    {
        cin>>userInput[i];
    }
    // print in order
    for(int i = 0; i < 41; i++)
    {
        cout<<userInput[i]<<" ";
    }
    cout<<"\n";
    // print in reverse order
    for(int i = 40; i >= 0; i--)
    {
        cout<<userInput[i]<<" ";
    }
    cout<<"\n";
    // sort array
    for(int j = 0; j <41; j++)
    {
        for(int i = 0; i <40-j; i++){
            if (userInput[i]>userInput[i+1]){
                temp = userInput[i];
                userInput[i] = userInput[i+1];
                userInput[i+1] = temp;
            }  
        }
    }
    // print in ascending order
    for(int i = 0; i <41; i++)
    {
        cout<<userInput[i]<<" ";
    }
    return 0;
}
