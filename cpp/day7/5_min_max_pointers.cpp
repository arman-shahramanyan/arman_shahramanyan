#include <iostream>
using namespace std;

void max_min(int arr[]) {
	int max = 0;
	int min = *(arr);
	for (int i = 0; i < 6; i++) {
       	     cout << *(arr + i) << " ";
      	     if (max <= *(arr + i)) {
             max = *(arr + i);
      	     }
      	     if (min >= *(arr + i)) {
             min = *(arr + i);
      	     }
	}
	 cout << endl << "max=" << max << endl << "min=" << min << endl;
 }

int main () {
   int array[6] = {18, 51, 86, 44, 17, 29};
   max_min(array);
     return 0;
}
