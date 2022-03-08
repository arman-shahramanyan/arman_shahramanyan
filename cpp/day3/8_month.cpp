#include <iostream>
using namespace std;

void month(int x) {
  switch (x)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      cout << "Total numbers of days = 31 \n";
      break;
    case 2:
      cout << "Total numbers of days = 28 or 29 \n";
      break;
    case 4:
    case 6:
    case 9:
    case 11:
      cout << "Total numbers of days =30 \n";
      break;
    }
}

void check(int x) {
 while (x < 1 || x > 12)
    {
      cout << "There are only 12 month in a year \n";
      cout << "Please enter month number: ";
      cin >> x;
    }
 month(x);
}

int
main ()
{
  int num;
  	cout << "Please enter month number: ";
   	cin >> num;
    	 check(num); 
  return 0;
}
