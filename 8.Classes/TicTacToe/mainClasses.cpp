#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Board
{
    string name1;
    string name2;
    string grid[4][4];
public:
    Board();
    void setName(int playerNum, string name);
    void setGrid(string input, int pos);
    string getName(int playerNum);
    string getGrid(int pos);
    int fourInRow();
    void printInfo();
};

Board::Board(){
    name1 = "Unknown";
    name2 = "Unknown";
    int count = 0;
    stringstream ss;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            ss.str(std::string());
            ss << count;
            grid[i][j] = ss.str();
	    count += 1;
        }
    }
}

void Board::setName(int playerNum, string name){
    if(playerNum==1){
        name1 = name;
    }
    else if(playerNum==2){
        name2 = name;
    }
    else{
        cout<<"Invalid player number.";
    }
}

void Board::setGrid(string input, int pos){
    int i = pos / 4;
    int j = pos % 4 ;
    grid[i][j] = input;
}

string Board::getName(int playerNum){
    if(playerNum==1){
        return name1;
    }
    else if(playerNum==2){
        return name2;
    }
    else{
        cout<<"Invalid player number.";
    }
}

string Board::getGrid(int pos){
    int i = pos / 4;
    int j = pos % 4 ;
    return grid[i][j];
}

int Board::fourInRow(){ // 0: no winner, 1: player 1 win, 2: player 2 win
    // Check row
    int countO;
    int countX;
    for(int i=0;i<4;i++){
        countO = 0;
        countX = 0;
        for(int j=0;j<4;j++){
            if(grid[i][j] == "o"){
                countO += 1;
            }
            else if(grid[i][j] == "x"){
                countX += 1;
            }
        }
        if(countO >= 4){
            return 1;
        }
        else if(countX >= 4){
            return 2;
        }
    }
    // Check Column
    for(int j=0;j<4;j++){
        countO = 0;
        countX = 0;
        for(int i=0;i<4;i++){
            if(grid[i][j] == "o"){
                countO += 1;
            }
            else if(grid[i][j] == "x"){
                countX += 1;
            }
        }
        if(countO >= 4){
            return 1;
        }
        else if(countX >= 4){
            return 2;
        }
    }
    // Check first diagonal
    countO = 0;
    countX = 0;
    for(int i=0;i<4;i++){
        if(grid[i][i] == "o"){
            countO += 1;
        }
        else if(grid[i][i] == "x"){
            countX += 1;
        }
    }
    if(countO >= 4){
        return 1;
    }
    else if(countX >= 4){
        return 2;
    }
    
    // Check second diagonal
    countO = 0;
    countX = 0;
    for(int i=0;i<4;i++){
        if(grid[i][3-i] == "o"){
            countO += 1;
        }
        else if(grid[i][3-i] == "x"){
            countX += 1;
        }
    }
    if(countO >= 4){
        return 1;
    }
    else if(countX >= 4){
        return 2;
    }

    return 0;
}

void Board::printInfo(){
    for(int i=0;i<4;i++){
        cout<<"\n"<<" | ";
        for(int j=0;j<4;j++){
            if(grid[i][j].length() <= 1){
                cout<<grid[i][j]<<" | ";
            }
            else{
                cout<<grid[i][j]<<"| ";
            }
        }
    }
}
