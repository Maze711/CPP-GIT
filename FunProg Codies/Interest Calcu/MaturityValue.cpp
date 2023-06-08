#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    double P, r, t, I, F;
    do
    {
        cout << "You choose to find the Maturity Value\n";
        cout << "Input the value of Interest (I): ";
        cin >> I;
        cout << "Input the value of Rate of interest (r): ";
        cin >> r;
        r = r / 100;
        cout << "Input the value of Time Period or Term of loan (t): ";
        cin >> t;
        F = I * (1 + r * t);
        cout << "The value of Maturity Value (F) is " << (double)F << "\n";
        cout << "Please wait for 10 seconds to use it again";
        Sleep(10000);
        system("cls");
    } while (true);
}