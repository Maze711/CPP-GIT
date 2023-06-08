#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    double P, r, t, I, F;
    do{
    cout << "You choose to find the Principal\n";
    cout << "Input the value of Interest (I): ";
    cin >> I;
    cout << "Input the value of Rate of interest (r): ";
    cin >> r;
    cout << "Input the value of Time Period or Term of loan (t): ";
    cin >> t;
    P = I / (r * t);
    cout << "The value of Principal (P) is " << (double)P << "\n";
    cout << "Please wait for 10 seconds to use it again";
    Sleep(10000);
    system("cls");
    }while(true);
}