#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    do{
    int x, y, ans, menu;
    cout << "=============================\n";
    cout << "Pick a Mathematics Condition\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulo/Remainder\n";
    cout << "=============================\n";
    cout << "Enter a Number: ";
    cin >> menu;
    switch (menu)
    {
    case 1:
    cout << "=============================\n";
        cout << "You Picked Addition\n\n";
        cout << "Enter First Number: ";
        cin >> x;
        cout << "Enter Second Number: ";
        cin >> y;
        ans = x + y;
        cout << x << " + " << y << " The answer is: " << ans << "\n";
    cout << "=============================\n";
    cout << "Please wait for 3 seconds to use it again";
        Sleep(3000);
        system("cls");
        break;
        case 2:
    cout << "=============================\n";
        cout << "You Picked Subtraction\n\n";
        cout << "Enter First Number: ";
        cin >> x;
        cout << "Enter Second Number: ";
        cin >> y;
        ans = x - y;
        cout << x << " - " << y << " The answer is: " << ans << "\n";
    cout << "=============================\n";
    cout << "Please wait for 3 seconds to use it again";
        Sleep(3000);
        system("cls");
        break;
        case 3:
    cout << "=============================\n";
        cout << "You Picked Multiplication\n\n";
        cout << "Enter First Number: ";
        cin >> x;
        cout << "Enter Second Number: ";
        cin >> y;
        ans = x * y;
        cout << x << " * " << y << " The answer is: " << ans << "\n";
    cout << "=============================\n";
    cout << "Please wait for 3 seconds to use it again";
        Sleep(3000);
        system("cls");
        break;
        case 4:
    cout << "=============================\n";
        cout << "You Picked Division\n\n";
        cout << "Enter First Number: ";
        cin >> x;
        cout << "Enter Second Number: ";
        cin >> y;
        ans = x / y;
        cout << x << " / " << y << " The answer is: " << ans << "\n";
    cout << "=============================\n";
    cout << "Please wait for 3 seconds to use it again";
        Sleep(3000);
        system("cls");
        break;
        case 5:
    cout << "=============================\n";
        cout << "You Picked Modulo\n\n";
        cout << "Enter First Number: ";
        cin >> x;
        cout << "Enter Second Number: ";
        cin >> y;
        ans = x % y;
        cout << x << " % " << y << " The answer is: " << ans << "\n";
    cout << "=============================\n";
    cout << "Please wait for 3 seconds to use it again";
        Sleep(3000);
        system("cls");
        break;

    default:
    cout << "Unknown Condition, Please Try again\n";
    cout << "Wait for 3 seconds to use it again";
        Sleep(3000);
        system("cls");
        break;
    }
    }while(true);
}