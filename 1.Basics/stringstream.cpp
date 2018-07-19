/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string strLength;
string strWidth;
float length;
float width;
float area;

int main(){
    cout<<"Enter length of room: ";
    getline(cin,strLength);
    cout<<"Enter width of room: ";
    getline(cin,strWidth);
    stringstream(strLength)>>length;
    stringstream(strWidth)>>width;
    area = length * width;
    cout<<"\n"<<area;
    return 0;
}