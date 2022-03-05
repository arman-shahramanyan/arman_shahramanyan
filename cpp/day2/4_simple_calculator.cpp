#include <iostream>
using namespace std;

int
main ()
{
  double num1, num2;
  char oper;
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter operator (+,-,*,/): ";
  cin >> oper;
  cout << "Enter second number: ";
  cin >> num2;
  switch (oper)
    {
    case '+':
      cout << num1 << '+' << num2 << '=' << num1 + num2 << endl;
      break;
    case '-':
      cout << num1 << '-' << num2 << '=' << num1 - num2 << endl;
      break;
    case '*':
      cout << num1 << '*' << num2 << '=' << num1 * num2 << endl;
      break;
    case '/':
      if (num1 == 0)
	{
	  cout << "Can't divide by zero \n";
	  break;
	}
      cout << num1 << '/' << num2 << '=' << num1 / num2 << endl;
      break;
    default:
      cout << "Not correct operator \n";
    }


  return 0;
}
