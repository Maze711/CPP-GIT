#include <iostream>
#include <climits>
using namespace std;

int main()
{
    short a;
    int b; // is 16 usually 32bits
    long c; //at least 32 bits
    long long d; // at least 64bits

    // short <= int <= long <= long long

    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    cout << SHRT_MIN << endl;
}