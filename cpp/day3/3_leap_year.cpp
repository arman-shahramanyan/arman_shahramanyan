#include <iostream>
using namespace std;
int year;
int x = 0;
int leapcheck () {
	if (x == 20) {
        	return 0;
        } else
	if ( year % 4 == 0 && year % 100 != 0) {
            cout << year << " is leap year \n";
            x++;  
        }
	    year++;
	return leapcheck();
}
int main () {
	year=2022;
    leapcheck ();
    return 0;
}
