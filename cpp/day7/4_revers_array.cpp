#include <iostream>
using namespace std;

int main () {
   int x;
   int arr[6] = {12, 5, 0, 44, 17, 29};
   for (int i = 0; i < 5; i++) {
       cout << *(arr + i) << " ";
   }
    cout << endl;
   for (int i = 0; i < 5 / 2; i++) {
        x = *(arr + 4 - i);
        *(arr + 4 - i) = *(arr + i);
        *(arr + i) = x;
   }
   for (int i = 0; i < 5; i++) {
       cout << *(arr + i) << " ";
   }
    cout << endl;
    return 0;
}
