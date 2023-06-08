#include<bits/stdc++.h>
using namespace std;
 
float sumOfGP(float a, float r, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a;
        a = a * r;
    }
    return sum;
}
int main()
{
    int a = 6; // first term
    float r = 0.3333333333333; // common ratio
    int n = 5; // number of terms
    n = n -1;
    cout << sumOfGP(a, r, n) << endl;
    return 0;
}