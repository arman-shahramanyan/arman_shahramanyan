#include <iostream>
using namespace std;

void max_min(int *arr, int size) {
	int max = 0;
	int min = *(arr);
	for (int *ptr = arr; ptr < arr+size; ptr++) {
       	     cout << *ptr << " ";
      	     if (max <= *ptr ) {
             max = *ptr;
      	     }
      	     if (min >= *ptr) {
             min = *ptr;
      	     }
	}
	 cout << endl << "max=" << max << endl << "min=" << min << endl;
 }

int main () {
   int array[] = {18, 51, 86, 44, 29};
   int n = sizeof(array) / 4;
   int *ptr = array;
   max_min(ptr, n);
     return 0;
}
