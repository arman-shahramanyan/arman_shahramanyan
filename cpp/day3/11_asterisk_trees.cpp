#include <iostream>
using namespace std;

void one (int h) {
 for (int i = 1; i <= h; i++) {
	for (int j = 1; j <= h ; j++) {
		if (j <= h - i ) {
		cout << " ";
		} else {
		cout << "*";
		}
	
	}
	cout << endl; 
 }	
}

void two (int h) {
 for (int i = 0; i < h; i++) {
 	for (int j = 1; j <= h; j++) {
		if (j <= h - i) {
		cout << "*";
		} else {
		cout << " ";
		}
	}
	cout << endl; 
 }
}

void three (int h) {
 for (int i = 1; i <= h; i++) {
 	for (int j = 1; j <= i; j++) {
		cout << "*";
	}
	cout << endl;
 }
}

void four (int h) {
 for (int i = 0; i < h; i++) {
 	for (int j = 1; j <= 2 * h - 1; j++) {
		if (j < h - i) {
		cout << " ";
		} else 
	        if (j <= h + i ) {
			cout << "*";
		}	
	}
	cout << endl;
 }
}

void five (int h) {
 for (int i = 1;i <= h; i++ ) {
 	for (int j = 1; j <= h; j++) {
		if ( j == i || i == 1 || j == h) {
			cout << "*";
		} else {
			cout << " ";
		}
	}
	cout << endl;
 }


}

int
main ()
{
  int size;
  cout << "Enter the height to tree:";
  cin >> size;
  while (size <= 0)
  {
	  cout << "Bad number to enter,try again \n";
	  cin >> size;
  }
  const int h = size;
  one (h);
	cout << endl;
  two (h);
  	cout << endl;
  three (h);
  	cout << endl;
  four (h);
  	cout << endl;
  five (h);


  return 0;
}
