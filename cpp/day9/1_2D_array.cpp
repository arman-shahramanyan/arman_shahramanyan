#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    const int n = 5;
    const int m = 3;
    int **arr = new int *[m];
    
    for (int **ptr1 = arr; ptr1 < arr + m; ptr1++) {
         *ptr1 = new int [n];
        for (int *ptr2 = *ptr1; ptr2 < *ptr1 + n; ptr2++) {
            *ptr2 = rand () % 10;
             cout << *ptr2 << " ";
        }
        cout << endl;
    }
    

    return 0;
}
