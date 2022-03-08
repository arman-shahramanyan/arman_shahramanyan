#include <iostream>
using namespace std;

void vowel (char x); 

void check (char x) {
 while (1)
    {
      if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z' ))
        {
          break;

        }  else
        {

          cout << "Is not letter \n";
          cout << "Try again \n";
          cin >> x;
        }
    }
	vowel(x);
}
void vowel (char x) {
switch (x)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      cout << x << " is a vowel \n";
      break;
    default:
      cout << x << " is a consonant \n";
      break;
    }
}
int
main ()
{
  char a;
  	cout << "Enter any letter from the English alphabet: ";
  	cin >> a;
  check(a);
  return 0;
}
