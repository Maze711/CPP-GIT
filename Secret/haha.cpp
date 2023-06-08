#include <iostream>
#include <array>
using namespace std;

int main(){
    int arr[6][6] = {
    {1, 2, 3, 4, 5, 6},
    {2, 4, 6, 8, 10, 12},
    {1, 3, 5, 7, 9, 11},
    {6, 7, 8, 9, 10, 11},
    {1, 2, 3, 9, 10, 7},
    {4, 5, 6, 7, 8, 1}
};

   for(int i = 5; i > 0; i-=3)
   for(int x = 1; x < 5; x++)
    cout << arr[i][x] << " ";
}

/*
1. C   16.D   31.A   46.B
2. D   17.C   32.B   47.C
3. C   18.B   33.C   48.C
4. D   19.D   34.D   49.C
5. C   20.B   35.E   50.C
6. A   21.D   36.E
7. A   22.C   37.D
8. B   23.B   38.C
9. B   24.C   39.B
10.C   25.D   40.A
11.C   26.C   41.C
12.D   27.D   42.C
13.D   28.C   43.A
14.D   29.D   44.C
15.C   30.C   45.C
*/
