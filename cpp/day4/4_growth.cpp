#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int size;
  cout << "Enter array size \n";
  cin >> size; 
  double arr[size];
  double x;
  for (int i = 0; i < size; i++) {
      arr[i] = rand() % 100;
      cout << arr[i] << " ";
  }
  for (int j = 0; j < size; j++) {
        for (int i = 0; i < size; i++) {
          if (arr[i] > arr[i + 1]) {
              x = arr[i + 1];
              arr[i + 1] = arr[i];
              arr[i] = x;
            }
       
        }
  }   cout << endl; 
  for (int i = 1; i <= size; i++) {
      cout << arr[i] << " ";
  }
  cout << endl;
    return 0;
}
