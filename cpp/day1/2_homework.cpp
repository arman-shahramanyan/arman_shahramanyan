#include <iostream>
using namespace std;

int main (){

int x, n=1;
	cout << "Please enter number from 1 to 9 \n";
	cin >> x;
	while (n<=9 ){
	if (x < 1 || x >9 ){
		cout << "You entered the wrong number \n";
		cin >> x;
	}
	cout << x << "*" << n << "=" << n*x << endl;
	n++;
	}




return 0;
}
