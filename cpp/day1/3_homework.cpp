#include <iostream>
using namespace std;

int main (){
int year=2022;
int count=0;
while (1){
      if ( year % 4 == 0 && year % 100 != 0){
	    cout << year << " is leap year \n";
	    count++;
	}
      year++;
      if ( count==20 )
	break;
	}
return 0;
}
