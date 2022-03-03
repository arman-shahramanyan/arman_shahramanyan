#include <iostream>
using namespace std;

int main  (){
int num, y, x=1;
	cout << "Please enter number \n";
       	cin >> num;
	y=num;
while( num>1 ){
	
	x=x*num;
	num--;	
 	}	
	cout << "Factorial " << y << "=" << x << endl;

return 0;
}
   
