using namespace std;

int checkChosen(int num, int array[], int size);

int checkChosen(int num, int array[], int size){
    // return 0 if number is not in array, otherwise 1.
    for(int i=0;i<size;i++){
        if(num==array[i]){
            return 1;
        }
    }
    return 0;
}
