#include <iostream>
using namespace std;

void revers (int *array, int size) {
 int x;
 for (int *ptr = array + size; ptr >= array; ptr--) {
       cout << *ptr << " ";
 }
}

int main () {
   int arr[] = {12, 5, 44, 17, 29, 20};
   int *ptr;
   int n = sizeof(arr) / 4;
   for (ptr = arr; ptr < arr + n; ptr++) {
       cout << *ptr << " ";
   }
    cout << endl;
    revers(arr, n - 1);
    cout << endl;
    return 0;
}
