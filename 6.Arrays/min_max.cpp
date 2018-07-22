/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/
#include <iostream>

using namespace std;

int main(){
    int num;
    int min =100;
    int max = 0;
    float sum = 0;
    for (int i = 0; i <15; i++){
        cout<<"\nEnter a number range between 0 ~ 100: ";
        cin>>num;
        sum += num;
        if (num>max){
            max = num;
        }
        if (num<min){
            min = num;
        }
    }
    cout<<"\n\nmax = "<<min;
    cout<<"\nmin = "<<max;
    cout<<"\navg = "<<sum/15.0;
    return 0;
}
