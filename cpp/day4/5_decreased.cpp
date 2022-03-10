#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int size;
      cout << "Enter array size \n";
      cin >> size; 
  double arr[size];
  double rev[size];
  for (int i = 0; i < size; i++) {
      arr[i] = rand() % 100;
      cout << arr[i] << " ";
  }
  int i = size - 1;
  for (int j = 0; j < size; j++) {
        
            rev[i] = arr[j];
        i--;
  }   
	cout << endl; 
  for (int i = 0; i < size; i++) {
        cout << rev[i] << " ";
  }
  cout << endl;

    return 0;
}
