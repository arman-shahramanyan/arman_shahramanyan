#include <iostream>

using namespace std;

int main()
{ const  int size = 5;
   int arr [size][size];
  for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
          arr [i][j] = rand() % 10;
          cout << arr [i][j] << " ";
      }
     cout << endl;
  }
  int sum [8]={0, 0, 0, 0, 0, 0, 0, 0};
   int x = size - 1;
   int y = 0;
  
   for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            
              if (j > i && j < x && i < size/2 ) {
                  sum [0] += arr [i][j];
              } else 
              if (i > size/2  && j < y && j > x) {
                  sum [1] += arr [i][j];
              } else 
              if (i < size - 1 && j < i && j < x) {
                  sum [2] += arr [i][j];
              } else 
              if (i < size - 1 && j > i && j !=x) {
                  sum [3] += arr [i][j];
              } 
              if (j > i) {
                  sum [4] += arr [i][j];
              }
              if (j < i) {
                  sum [5] += arr [i][j];
              }
              if (j > x) {
                sum [6] += arr [i][j];
              }
              if (j < x) {
                sum [7] += arr [i][j];
              }
           }
        x--;
        y++;
    }
   for (int i = 0; i < 8; i++) {
       cout << sum [i] << " ";
   }
   cout << endl;
    return 0;
}
