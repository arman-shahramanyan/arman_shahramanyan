#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
  int size;
  cout << "input array size \n";
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++) {
      arr[i] = rand () % 100;
      cout << arr[i] << " ";
    }
  int x;
  for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
          if (arr[j] > arr[j + 1]) {
              x = arr[j + 1];
              arr[j + 1] = arr[j];
              arr[j] = x;

            }
        }
    }
  cout << endl;
  for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
