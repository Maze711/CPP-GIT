#include <iostream>
using namespace std;

int main(){
    int a[3];
    int b[3];
    int add[3], sub[3], mul[3];

    cout << "Enter 3 Integers for Array A: \n";
    for(int i = 0; i < 3; i++){
        cin >> a[i];
    }
    cout << "Enter 3 Integers for Array B: \n";
    for(int i = 0; i < 3; i++){
        cin >> b[i];
    }
    cout << "Addition of A an B is: \n";
    for(int i = 0; i < 3; i++){
       add[i]=a[i]+b[i];
       cout << add[i] << " ";
    }
}