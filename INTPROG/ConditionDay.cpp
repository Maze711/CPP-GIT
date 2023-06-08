#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "=============================\n";
    cout << "Enter a Number:";
    cin >> x;
    cout << "=============================\n";

    switch (x)
    {
    case 1:
        cout << "=============================\n";
        cout << "Its Monday\n";
        cout << "=============================\n";
        break;
    case 2:
        cout << "=============================\n";
        cout << "Its Tuesday\n";
        cout << "=============================\n";
        break;
    case 3:
        cout << "=============================\n";
        cout << "Its Wednesday\n";
        cout << "=============================\n";
        break;
    case 4:
        cout << "=============================\n";
        cout << "Its Thursday\n";
        cout << "=============================\n";
        break;
    case 5:
        cout << "=============================\n";
        cout << "Its Friday\n";
        cout << "=============================\n";
        break;
    case 6:
        cout << "=============================\n";
        cout << "Its Saturday\n";
        cout << "=============================\n";
        break;
    case 7:
        cout << "=============================\n";
        cout << "Its Sunday\n";
        cout << "=============================\n";
        break;
    default:
        cout << "Unknown Condition\n";
        break;
    }
}