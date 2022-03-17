#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int income (int arr[3], double p);

int main(int argc, char* argv[]) {
  int arr[3];
  for (int i = 0; i < 3; i++) {
    arr[i] = atoi(argv[i + 1]);
    cout << arr[i] << endl;
  }
  int t = arr[0];
  double perc = (arr[1] / 12.0) / 100;
  int x = income(arr, perc) - t;
  cout << "Profit of all months = " << x << endl;
  return 0;
}
int income(int arr[3], double p) {

   double x;
   time_t now = time(0);
   char* dt =ctime( &now);
       cout << "Date of the deposit  "<< dt << endl;

   int january = 1640980800;
   int n = now;
   int mon = 0;
    while (january <= n) {
       mon++;
       n = n - 2678400;
    }
  for (int i = 0; i < arr[2]; i++) {
     x = arr[0] * p;
     switch (mon) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
          now += 2678400;
          break;
        case 2:
          now += 2419200;
          break;
        case 4:
        case 6:
        case 9:
        case 11:
          now += 2592000;
          break;
        }
     char * t = ctime(&now);
     cout << "Sum of the month = " << arr[0];
     cout << " Income of the month =  " << x  << "  "<< t ;
     mon++;
     if (mon > 12 ){
       mon = 1;
     }
    arr[0] += x;
       cout << endl;
  }
  return arr[0];
}

