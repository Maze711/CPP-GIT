#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    double P, r, t, I, F;
    do
    {
        cout << "You choose to find the Rate of Interest\n";
        cout << "Input the value of Interest (I): ";
        cin >> I;
        cout << "Input the value of Principal (P): ";
        cin >> P;
        cout << "Input the value of Time Period or Term of loan (t): ";
        cin >> t;
        r = I / (P * t);
        cout << "The value of Rate of Interest (r) is " << (double)r << "\n";
        cout << "Please wait for 10 seconds to use it again";
        Sleep(10000);
        system("cls");
    } while (true);
}