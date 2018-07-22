/*For this program print for each variable
**print the value of the variable, 
**then print the address where it is stored. 
*/
#include<iostream>
#include<string>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;
    int *pointerGivenInt = &givenInt;
    int **pointerPointerGivenInt = &pointerGivenInt;
    
    std::cin>>givenInt;
    std::cin>>givenFloat;
    std::cin>>givenDouble;
    std::cin.ignore();
    std::getline(std::cin,givenString);
    std::cin>>givenChar;
    
    std::cout<<"givenInt = "<<givenInt;
    std::cout<<"\naddress of givenInt = "<< &givenInt;
    std::cout<<"\ngivenFloat = "<<givenFloat;
    std::cout<<"\naddress of givenFloat = "<< &givenFloat;
    std::cout<<"\ngivenDouble = "<<givenDouble;
    std::cout<<"\naddress of givenDouble = "<< &givenDouble;
    std::cout<<"\ngivenString = "<<givenString;
    std::cout<<"\naddress of givenString = "<< &givenString;
    std::cout<<"\ngivenChar = "<<givenChar;
    std::cout<<"\naddress of givenChar = "<< (void *) &givenChar;
    std::cout<<"\ngivenInt = "<<*pointerGivenInt;
    std::cout<<"\ngivenInt = "<<**pointerPointerGivenInt;
    return 0;
}

