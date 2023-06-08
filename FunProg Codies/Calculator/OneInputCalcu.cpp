#include <iostream>

using namespace std;

int main()
{

    int count = 0;
    int fNum, sNum, x;

    while (count < 2)
    {
        cout << "Put number: ";
        cin >> x;
        if (count == 1)
        {
            count++;
            continue;
        }
        fNum = x;
        count++;
    }
    if (count == 2)
    {
        sNum = x;

        int ans = fNum + sNum;
        cout << "Answer is " << ans;
    }
}