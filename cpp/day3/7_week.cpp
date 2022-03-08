#include <iostream>

using namespace std;


int weekday (int day) {
 switch (day)
    {
    case 1:
      cout << "Monday \n";
      break;
    case 2:
      cout << "Tuesday \n";
      break;
    case 3:
      cout << "Wednesday \n";
      break;
    case 4:
      cout << "Thursday \n";
      break;
    case 5:
      cout << "Friday \n";
      break;
    case 6:
      cout << "Saturday \n";
      break;
    case 7:
      cout << "Sunday \n";
      break;
    }

return 0;
}
int
main ()
{
  int num;
  cout << "Please enter week day   ";
  cin >> num;
  while (num < 1 || num > 7)
    {
      cout << "There are only 7 days in a week \n";
      cout << "Please enter week day   ";
      cin >> num;
    }
    weekday( num );

  return 0;
}
