#include <iostream>
using namespace std;

void revers (int array[]) {
	int x;
 for (int i = 0; i < 5 / 2; i++) {
        x = *(array + 4 - i);
        *(array + 4 - i) = *(array + i);
        *(array + i) = x;
 }
 for (int i = 0; i < 5; i++) {
       cout << *(array + i) << " ";
 }
}

int main () {
   int arr[6] = {12, 5, 0, 44, 17, 29};
   for (int i = 0; i < 5; i++) {
       cout << *(arr + i) << " ";
   }
    cout << endl;
    revers(arr);
   for (int i = 0; i < 5; i++) {
       cout << *(arr + i) << " ";
   }
    cout << endl;
    return 0;
}
