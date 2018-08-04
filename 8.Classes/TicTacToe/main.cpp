// 4x4 board game

#include "mainClasses.cpp"
#include "mainFunctions.cpp"

int main()
{
    Board board1;
    string name1;
    string name2;
    string input;
    int result = 0;
    int gridNumber;
    int loopFlag=1;
    int size = 0;
    int chosenArray[16];
    
    // Set player's name
    cout<<"\nEnter your name, Player 1: ";
    cin>>name1;
    board1.setName(1,name1);
    cout<<"\nEnter your name, Player 2: ";
    cin>>name2;
    board1.setName(2,name2);
    
    cout<<"\n"<<name1<<" and "<<name2<<", game start!";
    while(loopFlag){
        for(int i=1;i<=2;i++){
            board1.printInfo();
            
            do{
                if(i==1){ // Player 1
                    cout<<"\n"<<name1<<", Choose a grid number to put 'o': ";
                    input = "o";
                }
                else{ // Player 2
                    cout<<"\n"<<name2<<", Choose a grid number to put 'x': ";
                    input = "x";
                }
                cin>>gridNumber;
            }while(checkChosen(gridNumber, chosenArray, size) == 1 || gridNumber >15 || gridNumber < 0);
            chosenArray[size] = gridNumber;
            size += 1;
            board1.setGrid(input,gridNumber);
            result = board1.fourInRow(); // Check if anyone win the game
            if(result == 1 || result == 2){
                loopFlag = 0;
                break;
            }
        }
    }
    if(result == 0){
        board1.printInfo();
        cout<<"\n\nTie game!";
    }
    else{
        board1.printInfo();
        cout<<"\n\nCongratz! "<<board1.getName(result)<<" have won the game!\n";
    }
    
    return 0;
}
