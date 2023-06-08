#include <iostream>
using namespace std;

int main()
{
    string fName;
    int Age, Month, Year;

    cout << "Enter Your Name:  ";
    cin >> fName;
    cout << "Enter Your Age: ";
    cin >> Age;
    do
    {
        cout << "Enter Numeric Month ( 1 - 12 ): ";
        cin >> Month;
        Year = 2022 - Age;

        if (Month == 1)
        {
            cout << "Good Day " + fName + " You were born last January " << Year;
        }
        else if (Month == 2)
        {
            cout << "Good Day " + fName + " You were born last February " << Year;
        }
        else if (Month == 3)
        {
            cout << "Good Day " + fName + " You were born last March " << Year;
        }
        else if (Month == 4)
        {
            cout << "Good Day " + fName + " You were born last April " << Year;
        }
        else if (Month == 5)
        {
            cout << "Good Day " + fName + " You were born last May " << Year;
        }
        else if (Month == 6)
        {
            cout << "Good Day " + fName + " You were born last June " << Year;
        }
        else if (Month == 7)
        {
            cout << "Good Day " + fName + " You were born last July " << Year;
        }
        else if (Month == 8)
        {
            cout << "Good Day " + fName + " You were born last August " << Year;
        }
        else if (Month == 9)
        {
            cout << "Good Day " + fName + " You were born last September " << Year;
        }
        else if (Month == 10)
        {
            cout << "Good Day " + fName + " You were born last October " << Year;
        }
        else if (Month == 11)
        {
            cout << "Good Day " + fName + " You were born last November " << Year;
        }
        else if (Month == 12)
        {
            cout << "Good Day " + fName + " You were born last De " << Year;
        }
        else
        {
            cout << "Incorrect Numeric Month, try again " << endl;
        }
    } while (Month > 12);
    return 0;
}