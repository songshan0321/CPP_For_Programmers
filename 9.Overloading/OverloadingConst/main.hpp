/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

#include<iostream>
#include<string>
using namespace std;

class Dog
{
    string name;
    int licenseNumber;
public:
    Dog();
    Dog(string nameIn);
    Dog(int licenseNumberIn);
    Dog(string nameIn, int licenseNumberIn);
    void setName(string nameIn);
    void setLicense(int licenseNumberIn);
    string getName();
    int getLicense();
};

Dog::Dog(){
    name = "NA";
    licenseNumber = 0;
}

Dog::Dog(string nameIn){
    name = nameIn;
    licenseNumber = 0;
}

Dog::Dog(int licenseNumberIn){
    name = "NA";
    licenseNumber = licenseNumberIn;
}

Dog::Dog(string nameIn, int licenseNumberIn){
    name = nameIn;
    licenseNumber = licenseNumberIn;
}

void Dog::setName(string nameIn){
    name = nameIn;
}

void Dog::setLicense(int licenseNumberIn){
    licenseNumber = licenseNumberIn;
}
string Dog::getName(){
    return name;
}
int Dog::getLicense(){
    return licenseNumber;
}

