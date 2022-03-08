#include <iostream>
using namespace std;
 int check (int y ) {
	 while (y < 1 || y >9 ){
                cout << "You entered the wrong number \n";
                cin >> y;
        }

	 return 0;
 }

int main (){

int x, n=1;
	cout << "Please enter number from 1 to 9 \n";
	cin >> x;
	while (n<=9 ){
	check (x);
	cout << x << "*" << n << "=" << n*x << endl;
	n++;
	}




return 0;
}
