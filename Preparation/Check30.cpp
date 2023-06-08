#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int num1, num2, ans;
    bool isThirty = false;

    cout << "Enter A First Number: ";
    cin >> num1;
    cout << "Enter A Second Number: ";
    cin >> num2;

    ans = num1 + num2;

    if(num1 == 30){
        isThirty = true;
    }
    else if(num2 == 30){
        isThirty = true;
    }
    else if(ans == 30){
        isThirty = true;
    }
    else{
        cout << 0;
    }

    if(isThirty){
        cout << 1;
    }
}