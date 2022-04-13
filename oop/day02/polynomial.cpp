#include <iostream>
#include <string>
#include <math.h>
#include "polynomial.h"

using namespace std;

Polynomial::Polynomial(int member_count, int number)
{
	_member_count = member_count;
	_number = number;
}
void Polynomial::Add()
{
	string exp;
	int member = _member_count;
	int answer = 0;
	while(member > 0)
	{
		int coeff;
		cout << "Enter coefficent > " ;
		cin >> coeff;
		answer += coeff*pow(_number, member);
		exp += ( to_string(coeff) + "x^" + to_string(member) + "+");
		member--;
	}
	cout << exp + "=" + to_string(answer) << endl;
}
void Polynomial::Substract()
{
 	 string exp;
	 int member = _member_count;
	 int answer = 0;
	 while(member > 0)
	 {
		 int coeff;
		 cout << "Enter coefficent > " ;
		 cin >> coeff;
		 answer -= coeff*pow(_number, member);
		 exp += (to_string(coeff) + "x^" + to_string(member) +  "-");
		 member--;
	 }			
	 cout << exp + "=" + to_string(answer) << endl;
}
void Polynomial::Multiply()
{
	string exp;
	int member = _member_count;
	int answer = 0;
	while(member > 0)
	{
		int coeff;
		cout << "Enter coefficent > " ;
		cin >> coeff;
		answer *= coeff*pow(_number, member);
		exp += (to_string(coeff) + "x^" + to_string(member) +  "*");
		member--;
	}
	cout << exp + "=" + to_string(answer) << endl;
}
int main()
{
	int member_count;
	int variable;
	char operat;
	cout << "Enter polynomial members count > ";
	cin >> member_count;
        cout << "Enter variable >";
	cin >> variable;
	Polynomial p (member_count, variable);		     
	cout << "Enter operator (*/+/-) > ";
	cin >> operat;
	switch (operat) {
	   case '+':
		p.Add();
		break;
	   case '-':
		p.Substract();
		break;
	   case '*':
		p.Multiply();
		break;
	   default:
		cout << "not correct operator";
	}

	return 0;
}
