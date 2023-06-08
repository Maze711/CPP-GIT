#include <iostream>

using namespace std;

void print_array(int array[], int size){

    for(int i = 0; i < size; i++){
        cout << array[i] << "\t";
    }
    cout << endl;
}

int main(){
    const int SIZE = 100;
    int guesses[SIZE];

    int count = 0;

    for (int i = 0; i < SIZE; i++){
        if(cin >> guesses[i])//return cin -> true of input worked
        {
            count++;
            //input worked
        }
        else
        {
            //invalid character
            break;
        }
    }

    print_array(guesses, count);
    cin.clear();
    cin.ignore(10000, '\n');

    string test;
    cin >> test;
    cout << test <<endl;

    return 0;
}