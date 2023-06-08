#include <iostream>
#include <windows.h>
#include <cmath>
#include <time.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdio>

using namespace std;

int j;
int score(0);
string FF;

int main()
{

    cout << endl;
    while (true)
    {
        j = 0;
        score = 0;

        for (int i = 1; i <= 5; i++)
        {
            cout << "\t\tMultiplication Quiz\n-----------------------------------------------------\n\n";
            for (int i = 1; i <= 20; i++)
            {
                srand(time(0));
                int A = rand() % (5 * i) + 1;
                int B = rand() % (5 * i) + 1;
                cout << "Question" << i << " ::  " << A << " x " << B << " = ";
                int numInput;
                cin >> numInput;
                if (numInput == A * B)
                    cout << "GOOOOD!!!!\n\n";
                    
                else
                {
                    cout << "Wrong Answer!!\n\n";
                    j = 2;
                    Beep(500,500);
                }
            }
        }
    }
}