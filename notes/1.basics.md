# Lesson1: Basics

## cout

```c++
int integer = 4543;
std::cout<<”The value of integer is “<<integer;
```

Output: The value of integer is 4543

## Enumerated Constants

```c++
/*Enum example*/

#include <iostream>

using namespace std;

int main()
{
    //define MONTHS as having 12 possible values
    enum MONTH {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    
    //define bestMonth as a variable type MONTHS
    MONTH bestMonth;
    
    //assign bestMonth one of the values of MONTHS
    bestMonth = Jan;
    
    //now we can check the value of bestMonths just 
    //like any other variable
    if(bestMonth == Jan)
    {
        cout<<"I'm not so sure January is the best month\n";
    }
    return 0;
}
```



## Format Output

```c++
#include <iomanip>

std::cout<<"\n\nThe text without any formating\n";
std::cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
std::cout<<"\nThe text with setw(15)\n";
std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
std::cout<<"\n\nThe text with tabs\n";
std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";
```

Output will be:

```
The text without any formating
IntsFloatsDoubles

The text with setw(15)
Ints         Floats        Doubles


The text with tabs
Ints    Floats    Doubles
```

## File IO

File IO Steps:

 - Include the <fstream> library 
 - Create a stream (input, output, both)
      - ofstream myfile; (for writing to a file)
      - ifstream myfile; (for reading a file)
      - fstream myfile; (for reading and writing a file)
 - Open the file  myfile.open(“filename”);
 - Write or read the file
 - Close the file myfile.close();

## Header Files

Then added a statement to include main.hpp

```c+
 #include "main.hpp"
```

## Stringstream

Steps for using Stringstream:

Include the Stringstream library.

```c++#include<sstream>```

Use getline to get the string from the user

``` std::getline(std::cin, stringVariable);```

Convert the string variable to a float variable.

```std::stringstream(stringVariable) >> numericVariable;```









