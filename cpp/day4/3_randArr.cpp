#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
int size;
  cout << "Enter array size \n";
  cin >> size; 
  double arr[size];
  double max = arr[0];
  for (int i = 0; i < size; i++) {
      arr[i] = rand() % 100;
      cout << arr[i] << " ";
  }
  for (int i = 1; i <= size; i++) {
      if (arr[i] > max) {
          max = arr[i];
      }
  }
  cout << endl << "max=" << max << endl; 
  return 0;
}
