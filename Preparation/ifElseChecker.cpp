#include <iostream>
#include <string>

using namespace std;

int main(){
    string x;
    cout << "Enter IF: ";
    getline(cin, x);
    if(x.length() > 2 && x.substr(0, 2) == "if"){
        cout << "This is already: " << x;
    }else{
        if(x == "if"){
             cout << x + " else";
        }else{
             cout << "if " + x;
        }
    }
    return 0;
}