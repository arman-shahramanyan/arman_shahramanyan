#include <iostream>
using namespace std;

int
main ()
{
  int size;
  cout << "Enter the height to tree:";
  cin >> size;
  while (size <= 0)
  {
	  cout << "Bad number to enter,try again \n";
	  cin >> size;
  }
  const int h = size;
  int i = 1;
  while (i <= h)
    {
      int j = 1;
      while (j <= h - i)
	{
	  cout << " ";
	  j++;
	}
      j = 1;
      while (j <= i)
	{
	  cout << "*";
	  j++;
	}
      i++;
      cout << endl;
    }
  cout << endl;
  i = 1;
  while (i <= h)
    {
      int j = h;
      while (j >= i)
	{
	  cout << "*";
	  j--;
	}
      i++;
      cout << endl;
    }
  cout << endl;
  i = 1;
  while (i <= h)
    {
      int j = 1;
      while (j <= i)
	{
	  cout << "*";
	  j++;
	}
      i++;
      cout << endl;
    }
  i = 1;
  cout << endl;
  while (i <= h)
    {
      int j = 1;
      while (j <= h - i)
	{
	  cout << " ";
	  j++;
	}
      j = 1;
      while (j <= 2 * i - 1)
	{
	  cout << "*";
	  j++;
	}
      i++;
      cout << endl;
    }
  cout << endl;


  return 0;
}
