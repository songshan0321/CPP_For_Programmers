/*Fix the errors and get an error free compilation and execution.*/

#include<iostream>
#include<cmath>

int main()
{
    float coEff1, coEff2, constant;
    float exp1, exp2;
    float y;
    float x;
    //Calculate the value of y for a user defined three term polynomial
    //Get the coefficients, exponents, and the constants
    std::cout<<"What is the first coefficient?";
    std::cin>>coEff1;
    std::cout<<coEff1<<"\n";
    std::cout<<"What is the exponent of the first term?";
    std::cin>>exp1;
    std::cout<<exp1<<"\n";
    std::cout<<"What is the second coefficient?";
    std::cin>>coEff2;
    std::cout<<coEff2<<"\n";
    std::cout<<"What is the exponent of the second term?";
    std::cin>>exp2;
    std::cout<<exp2<<"\n";
    std::cout<<"What is the constant?";
    std::cin>>constant;
    std::cout<<constant<<"\n";
    //Print the complete equation
    std::cout<<"The polynomial we are solving is:\n";
    std::cout<<"\t"<<coEff1<<"*x^"<<exp1<<" + "<<coEff2<<"*x^"<<exp2<<"+ "<<constant;
    std::cout<<"\nWhat is the value of x?";
    std::cin>>x;
    std::cout<<x<<"\n";
    //Solve the equation with the given x
    y = coEff1*pow(x,exp1) + coEff2*pow(x,exp2) + constant;    
    std::cout<<"y = "<<coEff1<<"*"<<x<<"^"<<exp1<<" + "<<coEff2<<"*"<<x<<"^"<<exp2 <<" + " <<constant<<" = "<<y;
    return 0;
}
