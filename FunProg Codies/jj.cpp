#include <iostream>

using namespace std;

int main(){

    int alpha;

    cin >> alpha;

    switch (alpha % 6){
        case 0:
        alpha --;
        cout << alpha;
        break;
        case 1: case 2:
        alpha = alpha * 2;
        cout << alpha;
        break;
        case 3:
        break;
        case 4: 
        alpha = alpha - 5;
        cout << alpha;
        case 5:
        alpha++;
        cout << alpha;
        break;
        default:
        alpha = alpha / 3;
        cout << alpha;
    }
}