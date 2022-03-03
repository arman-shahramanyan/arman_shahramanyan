#include <iostream>
using namespace std;

int main (){

int chicken, cow, pig;
int sum;
	cout << "How many chickens do you have? \n";
	cin >> chicken;
	cout << "How many cows do you have? \n";
	cin >> cow;
	cout << "How many pigs do you have? \n";
	cin >> pig;
sum=chicken*2+cow*4+pig*4;
cout << "your farm has " << sum << " feet" << endl;


return 0;
}
