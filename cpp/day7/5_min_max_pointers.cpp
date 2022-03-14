#include <iostream>
using namespace std;

int main () {
   int arr[6] = {18, 51, 86, 44, 17, 29};
   int max = 0;
   int min = *(arr + 5);
   for (int i = 0; i < 5; i++) {
       cout << *(arr + i) << " ";
       if (max <= *(arr + i)) {
           max = *(arr + i);
       }
       if (min >= *(arr + i)) {
           min = *(arr + i);
       }
   }
   cout << endl << "max=" << max << endl << "min=" << min << endl;
     return 0;
}
