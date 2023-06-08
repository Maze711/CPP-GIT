#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <windows.h>

using namespace std;

void addExpense(){
    int x;
    string y, z;
    ofstream Expense("Expense.txt", ios::app);

    vector<int>amount;
    cout << "Enter amount: ";
    cin >> x;
    cin.ignore();
    amount.push_back(x);
    // cout << amount[0] <<"\n";

    vector<string>description;
    cout << "Enter Description: ";
    getline(cin, y);
    description.push_back(y);
    // cout << description[0];

    vector<string>category;
    cout << "Enter Category: ";
    getline(cin, z);
    category.push_back(z);
    Expense << "The Amount you input: " << amount[0] << "\nDescription: " << description[0] << "\nCategory: " << category[0] << "\n\n";
    Expense.close();
};

void viewExpense(){};

void totalExpense(){};

int main()
{
    int selectMenu;
    cout << "====================\n";
    cout << "1. Add Expenses\n";
    cout << "2. View Expenses\n";
    cout << "3. Total Expenses\n";
    cout << "4. Exit\n";
    cout << "====================\n";
    cin >> selectMenu;
    switch (selectMenu)
    {
    case 1:
        addExpense();
        break;
    case 2:
        viewExpense();
        break;
    case 3:
        totalExpense();
        break;
    case 4:
        cout << "Thanks for using P.E (Personal Expenses) Tracker";
        Sleep(5000);
        system("cls");
        break;
    default:
        cout << "Unknown Menu from the Selection";
        break;
    }
}