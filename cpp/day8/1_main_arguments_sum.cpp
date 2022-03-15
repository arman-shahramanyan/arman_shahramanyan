#include <iostream>
#include "my_atoi.h"
using namespace std;

int main (int argc, char *argv[]) {
int sum1 = 0;
int sum2 = 0;
 for (int i = 1; i < argc; i++ ) {
	sum1 += my_atoi(argv[i]); 
 }
 for (int i = 1; i < argc; i++) {
 	sum2 += atoi(argv[i]);
 }
cout << "my_atoi  "<< sum1 << endl;
cout << "atoi  " << sum2;
cout << endl;
return 0;
}
