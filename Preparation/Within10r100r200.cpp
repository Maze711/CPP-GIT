#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int num1;

    cout << "Enter A Number: ";
    cin >> num1;

    if(abs(num1 - 100) <= 10 || abs(num1 - 200) <= 10 ){
        cout << 1;
    }else{
        cout << 0;
    }

}