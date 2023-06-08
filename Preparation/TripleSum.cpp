#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num1, num2, ans;
    bool sameNum = false;

    cout << "Enter Your First Number: ";
    cin >> num1;
    cout << "Enter Your Second Number: ";
    cin >> num2;

    if(num1 == num2){
        sameNum = true;
    }else{
        ans = num1 + num2;
        cout << "The Answer is: " << ans;
    }

    if(sameNum){
        ans = num1 + num2;
        ans = ans * 3;
        cout << "The Answer is: " << ans;
    }

}