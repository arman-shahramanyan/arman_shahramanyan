#include  <iostream>
using namespace std;
int game (int x) {
	int num;
do{
                if (x<0 || x>100){
                        cout << "Please enter a number from 1 to 100 \n";
                        cin >> x;
                } else {
                        cout << "Guess the number \n";
                        cin >> num;
                if (num < x){
                        cout << "Our number is higher, try again \n";
                } else
                if (num > x){
                        cout << "Our number is lower, try again \n";
                } else {
                        cout << "Congrats you guessed it \n";
                }

                }
        }
        while (num != x );

return 0;



}
int main (){
int xnum;
	cout << "Enter a secret number from 1 to 100  \n";
	cin >> xnum;
	game (xnum);

return 0;
}
