#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    double fib= 1/2.236*(pow(1.618, n)-pow(0.618, n));
    cout << fib;
}