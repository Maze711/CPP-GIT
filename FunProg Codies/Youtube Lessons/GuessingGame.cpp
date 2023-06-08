#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void print_array(int array[], int count){

    for (int i = 0; i < count; i++){
        cout << array[i] << "\t";
    }
    cout << "\n\n";
}

void play_game()
{

    int guesses[251];
    int guess_count = 0;

    int random = rand() % 251;
    cout << "Game is being started\n";
    cout << random <<endl;
    cout << "Guess a number: ";

    while(true){
        int guess;
        cin >> guess;
        guesses[guess_count++] = guess;
        if(guess == random){
            cout << "You Win!\n\n";
            break;
        }else if (guess < random){
            cout << guess << " Is Too Low \n\n" << "Enter Again: ";
        }
        else{
            cout << guess << " Is Too High! \n\n" << "Enter Again: ";
        }
    }
    print_array(guesses, guess_count);
}

int main()
{
    srand(time(NULL));
    int choice;
    do{
        cout << "0. Quit Game" << endl << "1. Play\n";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Thanks for trying the Program\n";
            return 0;
        
        case 1:
            play_game();
            break;
        }
    }while(choice != 0);
}