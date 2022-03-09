#include <iostream>
using namespace std;

void perfect (int n) {
  int i;
  int arr[] = { 6, 28, 496, 8128, 33550336 };
  for (i = 0; i < 7; i++)
    {
      if (n == arr[i])
	{
	  cout << n << "-perfect number\n";
	  break;
	}
    }
  if (n != arr[i])
    {

      cout << n << "-not perfect\n";
    }

}

int main () {
  int num;
  cout << "Enter the number \n";
  cin >> num;
  perfect (num);
  return 0;
}
