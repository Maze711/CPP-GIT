#include<bits/stdc++.h>
using namespace std;
// Function to find sum of series.
float sum(float a, float d, int n) {
   float sum = 0;
   for (int i=0;i<n;i++) {
      sum = sum + a;
      a = a + d;
   }
   return sum;
}
int main() {
   int n = 125;
   float a = 175, d = 0.5;
   cout<<"sum of series A.P is : "<<sum(a, d, n);
   return 0;
}