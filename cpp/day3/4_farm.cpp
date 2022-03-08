#include <iostream>
using namespace std;

int summa(int a, int b, int c) {


return a * 2 + b * 4 + c * 4;

}

int main (){

int chicken, cow, pig;
int sum;
	cout << "How many chickens do you have? \n";
	cin >> chicken;
	cout << "How many cows do you have? \n";
	cin >> cow;
	cout << "How many pigs do you have? \n";
	cin >> pig;
sum = summa (chicken, cow, pig);
cout << "your farm has " << sum << " feet" << endl;


return 0;
}
