#include <iostream>
using namespace std;

int main  (){
int a, b;
int per, area;
	cout << "Please enter rectangle parameters \n";
	cin >> a;
	cin >> b;
    per = 2 * (a + b);
    area = a * b;
	cout << "Perimeter=" << per << endl;
	cout << "Area=" << area << endl;


return 0;
} 
