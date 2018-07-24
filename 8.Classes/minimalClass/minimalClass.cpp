/*Goal: practice creating and using a class
**Use the class 'Dog' to create to 
**instances of the class, dog1 and dog2.
**Assign dog1 the name: Trixie
**Assign dog2 the name: Kali
**Assign dog1 the license #1234
**Assign dog2 the license #5678
*/


#include"main.hpp"

int main()
{
    Dog dog1;
    Dog dog2;
    
    dog1.setName("Trixie");
    dog2.setName("Kali");
    dog1.setLicenseNumber(1234);
    dog2.setLicenseNumber(5678);
    
    // Print values
    dog1.printInfo();
    cout<<"\n";
    dog2.printInfo();
    cout<<"\n";
    return 0;
}
