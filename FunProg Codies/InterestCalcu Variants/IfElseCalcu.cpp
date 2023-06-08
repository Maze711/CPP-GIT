#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    do
    {
        double P, r, t, I, F;
        char pick;

        system("cls");
        cout << "What do you want to find? \n";
        cout << "------------------------- \n";
        cout << "[P] Principal \n"
             << endl;
        cout << "[F] Maturity Value \n"
             << endl;
        cout << "[I] Interest \n"
             << endl;
        cout << "[r] Rate of Interest \n"
             << endl;
        cout << "[t] Time Period or Term of Loan \n"
             << endl;
        cout << "[0] Exit \n"
             << endl;
        cout << "Type what do you want to find: ";    
        cin >> pick;

        if (pick == 'P' || pick == 'p')
        {
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
        }
        else if (pick == 'F' || pick == 'f')
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
        }
        else if (pick == 'I' || pick == 'i')
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
        }
        else if (pick == 'r' || pick == 'R')
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
        }
        else if (pick == 't' || pick == 'T')
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
        }
        else
        {
            cout << "Please use the symbol in the choices when it big or not, THANK YOU!!\n";
            cout << "Please wait for 5 seconds to use it again";
            Sleep(5000);
            system("cls");
        }
    } while (true);
}