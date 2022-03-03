#include <iostream>
using namespace std;

int main (){
int year=2022;
int x=0;
while (1){
      if ( year%4==0 ){
	    cout << year << " is leap year \n";
	    x++;
	}
      year++;
      if ( x==20 )
	break;
	}
return 0;
}
