#include <iostream>
using namespace std;

int main () {
   int sum = 0;
   int arr[5] = {6, 15, 82, 64, 33};
   for (int i = 0; i < 5; i++) {
       cout << *(arr + i) << " ";
       sum += *(arr + i); 
   }
    cout << endl << sum << endl;
    return 0;
}
