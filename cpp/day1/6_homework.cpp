#include <iostream>
using namespace std;

int main  (){
int x, num, fac=1;
	cout << "Please enter number \n";
       	cin >> x;
	num = x;
while( x>1 ){
	
	fac = fac * x;
	x--;	
 	}	
	cout << "Factorial " << num << "=" << fac << endl;

return 0;
}
   
