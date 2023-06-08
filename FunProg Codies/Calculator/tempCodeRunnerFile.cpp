#include <iostream>

using namespace std;

int main()
{

    char x;
    int count = 0;
    int fNum, sNum;

    while (count < 2)
    {
        cout << "Put number: ";
        cin >> x;
        switch (x)
        {
        case '1':
            cout << "1" << endl;
            break;
        case '2':
            cout << "2" << endl;
            break;
        case '3':
            cout << "3" << endl;
            break;
        case '4':
            cout << "4" << endl;
            break;
        case '5':
            cout << "5" << endl;
            break;
        }
        count++;
        continue;
        if (count == 1)
        {
            fNum = x;
        }
    }
    if (count == 2)
    {
        sNum = x;

        int ans = fNum + sNum;

        cout << ans;
    }
}