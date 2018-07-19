/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

#include <iostream>
#include <string>

using namespace std;

string name;
string address;
string number;

int main(){
    for (int i = 0; i < 2; i++){
        getline(cin,name);

        getline(cin,address);

        getline(cin,number);
        cout<<name<<"\n\t\t"<<address<<"\n\t\t"<<number<<"\n";
    }
}