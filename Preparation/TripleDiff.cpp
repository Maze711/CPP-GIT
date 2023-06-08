#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num1, ans;
    bool isHigher = false;

    cout << "Enter A Number: ";
    cin >> num1;

    if(num1 > 51){
        isHigher = true;
    }else{
        ans = 51 - num1;
        cout << "Answer is: " << ans;
    }
    if(isHigher){
        ans = num1 - 51;
        ans = ans * 3;
        cout << "The Answer with tripled of the difference is: " << ans;
    }

}