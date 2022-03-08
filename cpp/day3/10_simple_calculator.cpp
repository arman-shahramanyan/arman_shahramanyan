#include <iostream>
using namespace std;

void amount (double x, double y) {
 	cout << x << '+' << y << '=' << x + y << endl;
} 

void difference (double x, double y) {
	cout << x << '-' << y << '=' << x - y << endl;
}

void multiplication (double x, double y) {
	cout << x << '*' << y << '=' << x * y << endl;
}

void division (double x, double y) {
      cout << x << '/' << y << '=' << x / y << endl;
}
void operators (double a, double b, double x) {
 switch (x)
    {
    case '+':
      amount (a, b);
      break;
    case '-':
       difference (a, b);
      break;
    case '*':
      multiplication (a, b);
      break;
    case '/':
      if (b == 0)
        {
          cout << "Can't divide by zero \n";
	  break;
        }
      division (a, b);
      break;
    default:
      cout << "Not correct operator \n";
    }

}
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
 operators (num1, num2, oper);
  return 0;
}
