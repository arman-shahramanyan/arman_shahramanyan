#include <iostream>
using namespace std;

void binary (int x) {
  int arr[32];
  int i;
  for (i = 0; x > 0; i++) {
      arr[i] = x % 2;
      x /= 2;
    }
  for (i= i - 1; i >= 0; i--) {
      cout << arr[i];
    }
  cout << endl;
}

int main () {
  int bin;
 	 cout << "Enter the number \n" << "Decimal:";
 	 cin >> bin;
  if (bin > 0) {
	  cout << "Binary:";
      binary (bin);
    } else 
	    if (bin ==0) {
        cout << 0;
    } else {
      cout << "This code does not accept negative numbers \n";
    }

  return 0;
}
