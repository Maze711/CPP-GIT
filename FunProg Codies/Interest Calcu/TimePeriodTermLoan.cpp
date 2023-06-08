#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    double P, r, t, I, F;
    do
    {
        cout << "You choose to find the Time Period or Term of loan \n";
        cout << "Input the value of Maturity Value (F): ";
        cin >> F;
        cout << "Input the value of Principal (P): ";
        cin >> P;
        cout << "Input the value of Rate of Interest (r): ";
        cin >> P;
        t = (F - P) / (P * r);
        cout << "The value of Time Period or Term of loan (t) is " << (double)t << "\n";
        cout << "Please wait for 10 seconds to use it again";
        Sleep(10000);
        system("cls");
    } while (true);
}