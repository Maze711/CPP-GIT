#include <iostream>

using namespace std;

int main()
{
    int x[6];
    bool rand = false;
    for (int i = 0; i <= 5; i++)
    {
        cout << "Enter a Number: ";
        cin >> x[i];
    }
    for (int i = 1; i < 6; i++)
    {
        if (x[i] < x[i - 1])
        {
            rand = true;
            break;
        }
    }
    // If the elements in an array are arranged in a way that does not follow a specific order or pattern, 
    // we might consider it random. However, in the case of the sequence 6 5 4 3 2 1, 
    // it is deterministic and follows a specific descending pattern, which is the reverse of the natural numbers sequence.
    if (rand)
    {
        cout << "Input is random. Organizing the numbers..." << endl;
        for (int i = 0; i < 6 - 1; i++)
        {
            for (int j = 0; j < 6 - i - 1; j++)
            {
                if (x[j] > x[j + 1])
                {
                    int temp = x[j];
                    x[j] = x[j + 1];
                    x[j + 1] = temp;
                }
            }
        }
        for (int y = 5; y >= 0; y--)
        {
            cout << x[y] << " ";
        }
        cout << endl;
    }
    else
    {
        for (int y = 5; y >= 0; y--)
        {
            cout << x[y] << " ";
        }
        cout << "Input is already in ascending order. No need to organize." << endl;
    }

    // for(int i = 5; i >= 0; i--){
    //     cout << x[i] << " ";
    // }
}