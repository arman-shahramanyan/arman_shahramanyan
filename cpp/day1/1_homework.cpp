#include  <iostream>
using namespace std;

int main (){
int xnum, num;
	cout << "Enter a secret number from 1 to 100  \n";
	cin >> xnum;

	do{
		if (xnum<0 || xnum>100){
			cout << "Please enter a number from 1 to 100 \n";
			cin >> xnum;
		} else {
			cout << "Guess the number \n";
			cin >> num;
		if (num < xnum){
			cout << "Our number is higher, try again \n";
		} else
		if (num > xnum){
			cout << "Our number is lower, try again \n";
		} else {
			cout << "Congrats you guessed it \n";
		}
		
		}
	}
 	while (num != xnum );

return 0;
}
