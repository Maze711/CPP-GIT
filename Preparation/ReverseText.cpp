#include <iostream>
#include<string>
using namespace std;

int main(){
    string name, str;
    cout << "Enter your Name: ";
    getline(cin, name);
    cout << "Reversed Text: ";
    for(int i = name.length() - 1; i >= 0; i--){
        cout << name[i];
    }
}