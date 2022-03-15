#include <iostream>
#include "my_atoi.h"
using namespace std;

int main (int argc, char *argv[]) {
int sum = 0;
 for (int i = 1; i < argc; i++ ) {
	sum += my_atoi(argv[i]); 
 }
cout << sum;
cout << endl;
return 0;
}
