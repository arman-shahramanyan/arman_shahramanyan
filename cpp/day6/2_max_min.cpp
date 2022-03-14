#include <iostream>

using namespace std;

int main() {
    const int size1 = 3;
    const int size2 = 5;
    int arr[size1][size2];
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            arr[i][j] = rand () % 100;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    int max, min;
    for (int i = 0; i < size1; i++) {
        max = 0;
        min = arr[i][size2 - 1];
        int x = 0;
        int y = 0;
        for (int j = 0; j < size2; j++) {
          if (max <= arr[i][j]) {
              max = arr[i][j];
              x = j;
          }
          if (min >= arr[i][j]) {
              min = arr[i][j];
              y = j;
          }
        }
        arr[i][x] = min;
        arr[i][y] = max;
        cout << endl;
        for (int j = 0; j < size2; j++) {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;
    return 0;
}

