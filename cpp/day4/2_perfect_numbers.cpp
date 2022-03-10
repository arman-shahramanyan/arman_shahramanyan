#include <iostream>
using namespace std;

int perfect (int n) {
   int arr[n];
   int x = n;
   int sum = 0;
  for (int i = 0; i < n; i++) {
   if (n % x == 0 && x > 0 && x < n) {
   arr[i] = x;
   sum += arr[i];
   }
	x--;
  }
   return sum;
}

int main () {
  int num;
 	 cout << "Enter the number \n";
 	 cin >> num;
  if (perfect(num) == num ) {
  	 cout << num << " is perfect number\n";
  } else {
 	 cout << num << " is not perfect number\n";
  }
  return 0;
}
