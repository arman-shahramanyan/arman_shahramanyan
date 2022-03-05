#include <iostream>
using namespace std;

int
main ()
{
  char x;
  cout << "Enter any letter from the English alphabet: ";
  cin >> x;
  while (1)
    {
      if (x >= 'a' && x <= 'z')
	{
	  break;

	}
      else if (x >= 'A' && x <= 'Z')
	{

	  break;
	}
      else
	{

	  cout << "is not letter \n";
	  cin >> x;
	}
    }
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

  return 0;
}
