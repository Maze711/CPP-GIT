#include <iostream>

using namespace std;

int main()
{
    int x[4][6] = {{1, 2, 3, 4, 5, 6},
                   {1, 2, 3, 4, 5, 6},
                   {1, 2, 3, 4, 5, 6},
                   {1, 2, 3, 4, 5, 6}};
    
    for(int y = 0; y < 3; y++){
        cout << x[y][5] << " ";
    }
}