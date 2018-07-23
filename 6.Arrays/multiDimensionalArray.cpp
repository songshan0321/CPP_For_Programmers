/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4. 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. 
*/

#include<iostream>

int main()
{
    //TODO: multiply a 4x4 array with vector of size 4. 
    //Print the resultant product vector
    
    int arrayInput[4][4];
    int arrayResult[4] = {0,0,0,0};
    int vec[4];
    // Read in array
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            std::cin>>arrayInput[i][j];
        }
    }
    // Read in vector
    for (int i=0;i<4;i++){
        std::cin>>vec[i];
    } 
    // Multiply
    for (int i=0;i<4;i++){
        for (int j=0;j<4;j++){
            arrayResult[i] += arrayInput[i][j]*vec[j];
        }
    }
    // Print out arrayResult
    for (int i=0;i<4;i++){
        std::cout<<"\narrayResult["<<i<<"] = "<<arrayResult[i];
    }
    
    return 0;
}
