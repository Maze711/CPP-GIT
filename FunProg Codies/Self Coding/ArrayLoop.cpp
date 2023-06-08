#include <iostream>
#include <array>
#include <string>

using namespace std;

int main()
{
    int x, i, j, k;
    cout << "Enter a number: ";
    cin >> x;
    for (i = 0; i <= x; i++)
    {
        for (j = x; j > i; j--)
            cout << " ";
        for (k = 0; k < i; k++)
            cout << "* ";
            cout << "\n"; 
    }
    for (i = 1; i < x; i++)
    {
        for (j = x; j > i; j--)
            cout << " *";
            cout << "\n"; 
        for (k = 0; k < i; k++)
            cout << " ";
    }
}