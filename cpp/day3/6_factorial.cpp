#include <iostream>
using namespace std;

int factorial (int n ) {
    if (n == 1) {
	return 1;
	}
    else {
	return n * factorial(n - 1);
	}

} 



int main  (){
	int x;
	cout << "Enter the number \n";
	cin >> x;
	cout << "Factorial " << x << "=" << factorial(x) << endl;

return 0;
}
   
