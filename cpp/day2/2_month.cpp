#include <iostream>
using namespace std;

int
main ()
{
  int num;
  cout << "Please enter month number: ";
  cin >> num;
  while (num < 1 || num > 12)
    {
      cout << "There are only 12 month in a year \n";
      cout << "Please enter month number: ";
      cin >> num;
    }
  switch (num)
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

  return 0;
}
