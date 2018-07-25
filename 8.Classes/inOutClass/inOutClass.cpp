/*Goal: practice creating and using classes.
**Create a class called Cat.
**Create the following members:
**private members: name, breed, age
**public members: setName, setBreed,setAge
**getName, getBreed, getAge, printInfo*/

#include<iostream>
#include "main.hpp"

int main(){
    
    string name,breed;
    int age;
    string name1,breed1;
    int age1;

    cout<<"Input your cat's name: ";    
    cin>>name;
    cout<<"\nInput your cat's breed: ";    
    cin>>breed;
    cout<<"\nInput your cat's age: ";    
    cin>>age;

    Cat cat1;
    cat1.setName(name);
    cat1.setBreed(breed);
    cat1.setAge(age);
    
    name1 = cat1.getName();
    breed1 = cat1.getBreed();
    age1 = cat1.getAge();
    cat1.printInfo();
    cout<<"\n";
    
    return 0;
}

