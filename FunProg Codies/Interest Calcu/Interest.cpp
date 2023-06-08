#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    double P, r, t, I, F;
    do
    {
        cout << "You choose to find the Interest\n";
        cout << "Input the value of Maturity Value (F): ";
        cin >> F;
        cout << "Input the value of Principal (P): ";
        cin >> P;
        I = F - P;
        cout << "The value of Interest (I) is " << (double)I << "\n";
        cout << "Please wait for 10 seconds to use it again";
        Sleep(10000);
        system("cls");
    } while (true);
}