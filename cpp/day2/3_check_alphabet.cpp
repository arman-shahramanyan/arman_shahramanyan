#include <iostream>
using namespace std;

int
main ()
{
  char ch;
  cout << "Enter any letter from the English alphabet: ";
  cin >> ch;
  while (1)
    {
      if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z' ))
	{
	  break;

	}  else
	{

	  cout << "Is not letter \n";
	  cout << "Try again \n";
	  cin >> ch;
	}
    }
  switch (ch)
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
      cout << ch << " is a vowel \n";
      break;
    default:
      cout << ch << " is a consonant \n";
      break;
    }

  return 0;
}
