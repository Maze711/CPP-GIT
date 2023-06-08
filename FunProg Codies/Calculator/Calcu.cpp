#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void useAgain();
void chooseAgain();
void mainMenu();
void quit();

int main()
{
    mainMenu();
    return 0;
}

void mainMenu()
{
    char x, again;
    int sum, sub, times, remainder, a, b;
    float div;
        cout << "============================================\n";
        cout << "Choose an operator: \n";
        cout << "+ for Addition \n";
        cout << "- for Subtraction \n";
        cout << "* for multiplication \n";
        cout << "/ for division \n";
        cout << "% for remainder \n";
        cin >> x;
        cout << "============================================\n";
        if (x == '+' || x == '-' || x == '*' || x == '/' || x == '%'){

        switch (x)
        {
        case '+':
            cout << "============================================\n";
            cout << x << " You pick addition\n";
            cout << "Input First Number: ";
            while(!(cin >> a)){
                cout << "The input must be a number: ";
                cin.clear();
                cin.ignore(100, '\n');
            }
            cout << "Input Second Number: ";
            while(!(cin >> b)){
                cout << "The input must be a number: ";
                cin.clear();
                cin.ignore(100, '\n');
            }
            sum = a + b;
            cout << "The sum is " << sum << endl;
            cout << "============================================\n";
            useAgain();
            break;

        case '-':
            cout << "============================================\n";
            cout << x << " You pick Subtraction\n";
            cout << "Input First Number: ";
            while(!(cin >> a)){
                cout << "The input must be a number: ";
                cin.clear();
                cin.ignore(100, '\n');
            }
            cout << "Input Second Number: ";
            while(!(cin >> b)){
                cout << "The input must be a number: ";
                cin.clear();
                cin.ignore(100, '\n');
            }
            sub = a - b;
            cout << "The subtraction is " << sub << endl;
            cout << "============================================\n";
            useAgain();
            break;

        case '*':
            cout << "============================================\n";
            cout << x << " You pick Multiplication\n";
            cout << "Input First Number: ";
            while(!(cin >> a)){
                cout << "The input must be a number: ";
                cin.clear();
                cin.ignore(100, '\n');
            }
            cout << "Input Second Number: ";
            while(!(cin >> b)){
                cout << "The input must be a number: ";
                cin.clear();
                cin.ignore(100, '\n');
            }
            times = a * b;
            cout << "The product is " << times << endl;
            cout << "============================================\n";
            useAgain();
            break;

        case '/':
            cout << "============================================\n";
            cout << x << " You pick Division\n";
            cout << "Input First Number: ";
            while(!(cin >> a)){
                cout << "The input must be a number: ";
                cin.clear();
                cin.ignore(100, '\n');
            }
            cout << "Input Second Number: ";
            while(!(cin >> b)){
                cout << "The input must be a number: ";
                cin.clear();
                cin.ignore(100, '\n');
            }
            div = a / b;
            cout << "The quotient is " << div << endl;
            cout << "============================================\n";
            useAgain();
            break;

        case '%':
            cout << "============================================\n";
            cout << x << " You pick Remainder finder\n";
            cout << "Input First Number: ";
            while(!(cin >> a)){
                cout << "The input must be a number: ";
                cin.clear();
                cin.ignore(100, '\n');
            }
            cout << "Input Second Number: ";
            while(!(cin >> b)){
                cout << "The input must be a number: ";
                cin.clear();
                cin.ignore(100, '\n');
            }
            remainder = a % b;
            cout << "The remainder is " << remainder << endl;
            cout << "============================================\n";
            useAgain();
            break;

        default:
            cout << "============================================\n";
            cout << x << " IS NOT OPERATOR\n";
            cout << "============================================\n";
            chooseAgain();
            break;
        }
    }else{
        quit();
    }
}

void chooseAgain(){
    char repeat;
    cout << "============================================\n";
    cout << "Do you want to pick again? y & Y = Yes\n";
    cin >> repeat;
    cout << "============================================\n";

    switch(repeat){
        case 'y':
        mainMenu();
        case 'Y':
        mainMenu();
        default:
        quit();
    }
}

void useAgain() {
    char z;
    cout << "============================================\n";
    cout << "Do you want to continue? Type 'y or Y' if yes" << endl;
    cin >> z;
    cout << "============================================\n";

    switch(z){
        case 'y':
        mainMenu();
        case 'Y':
        mainMenu();
        default:
        quit();
    }
}

void quit() {
    exit(0);
}
