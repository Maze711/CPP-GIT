#include <iostream>

using namespace std;

void add(int a, int b, int& c){
   c = a + b;
   cout << c;
}

int main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    add(a, b, c);
}