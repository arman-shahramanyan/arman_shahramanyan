#include <iostream>

using namespace std;

int main()
{
   int arr [5][5];
  for (int i = 0; i < 5; i++) {
      for (int j = 0; j < 5; j++) {
          arr [i][j] = rand() % 10;
          cout << arr [i][j] << " ";
      }
     cout << endl;
  }
  int sum [8]={0, 0, 0, 0, 0, 0, 0, 0};
   int x = 4;
   int y = 0;
  
   for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            
              if (j > i && j < x && i < 2 ) {
                  sum [0] += arr [i][j];
              } else 
              if (i > 2  && j < y && j > x) {
                  sum [1] += arr [i][j];
              } else 
              if (i < 4 && j < i && j < x) {
                  sum [2] += arr [i][j];
              } else 
              if (i < 4 && j > i && j !=x) {
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
