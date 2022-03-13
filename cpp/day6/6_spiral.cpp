#include <iostream>

using namespace std;

int
main () {
  const int size = 5;
  int arr[size][size];
  int a = 1;
  int i, j;
  int x = 0;
  int y = size;

  for (j = x; j < y; j++) {	
      i = x;
      arr[i][j] = a;
      a++;
    }
  for (int z = 0; z < size / 2; z++) {
    for (i = x + 1; i < y; i++) {
	  int j = y - 1;
	  arr[i][j] = a;
	  a++;
	}
    for (j = y - 2; j >= x; j--) {
	  i = y - 1;
	  arr[i][j] = a;
	  a++;
	}
    for (i = y - 2; i >= x + 1; i--) {
	  j = x;
	  arr[i][j] = a;
	  a++;
	}
    for (j = x + 1; j < y - 1; j++) { 
	  i = x + 1;
	  arr[i][j] = a;
	  a++;
	}

    if (a == size * size) {
	  break;
	}
      x++;
      y--;
    }
  for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
	    cout << arr[i][j] << " ";
	  }
        cout << endl;
    }
  cout << endl;
  return 0;
}
