/*GOAL: Practice writing to the console and learn 
**the variables types available in C++
**Print the sizes of each variable to the console.
**Print them in the following order:
**int, short, long, char, float, double, bool
**
**Use the command sizeof(variable type) ie: sizeof(int)
*/


#include <iostream>

using namespace std;

int main(){
    cout << "int: " << sizeof(int) << "\n";
    cout << "short: " << sizeof(short) << "\n";
    cout << "long: " << sizeof(long) << "\n";
    cout << "char: " << sizeof(char) << "\n";
    cout << "float: " << sizeof(float) << "\n";
    cout << "double: " << sizeof(double) << "\n";
    cout << "bool: "<< sizeof(bool) << "\n";

    return 0;
}