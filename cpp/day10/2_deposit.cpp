#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int income(int arr[3], double p);

int main(int argc, char* argv[]) {

  int arr[3];
  for (int i = 0; i < 3; i++) {
    arr[i] = atoi(argv[i + 1]);
  }
  int t = arr[0];
  double perc = (arr[1] / 12.0) / 100;
  int x = income(arr, perc) - t;
  cout << "Profit of " << arr[2] << " months = " << x << endl;
  return 0;
}

int income(int arr[3], double p) {
  double x;
  time_t now = time(0);
  char *dt = ctime(&now);
  string date[5];
  int e = 0;
  for (int i = 0; dt[i] != '\0'; i++) {
      if (dt[i] == ' ') {
         e++;
	 continue;
      }
      date[e] += dt[i];
  }
  string month[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
  int m , y = 0;
  y = stoi(date[4]);
  for (int i = 0; i < 12; i++) {
      if (month[i] == date[1]) {
         m = i; 
      }
  }
  cout << "Start deposit  " << "==>" << month[m] << " " << date[2] << " " << date[4] << endl;
  for (int i = 0; i < arr[2]; i++) {
    m++;
    if (m == 12) {
       y++;
       m = 0;
    }
    x = arr[0] * p;
    	cout << "Sum of the " << month[m] << " ==> " << arr[0] << " Income of the " << month[m] << " ==> " << x;
    	cout << "    " << month[m] << " " << date[2] << " " << y << endl;
    arr[0] += x;
    	cout << endl;
  }
  return arr[0];
}
