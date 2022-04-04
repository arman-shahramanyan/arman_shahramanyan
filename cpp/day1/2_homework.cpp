#include <iostream>
using namespace std;

int main (){

int num1, num2=1;
	cout << "Please enter number from 1 to 9 \n";
	cin >> num1;
	while (num2<=9 ){
	while (num1 < 1 || num1 >9 ){
		cout << "You entered the wrong number \n";
		cin >> num1;
	}
	cout << num1 << "*" << num2 << "=" << num2*num1 << endl;
	num2++;
	}




return 0;
}
