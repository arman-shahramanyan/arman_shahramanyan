#include <iostream>
#include <string>

using namespace std;

int main() {
int num;
cout << "Enter the number \n";
cin >> num; 
int i1, i2;
cout << "Enter the index you want to change \n";
cin >> i1 >> i2;
string n = to_string(num);
while(1) {
  if (i1 <= 0 || i1 > n.length()) {
  	cout << "First index not correct, fix it \n";
	cin >> i1;
  }else 
  if (i2 <= 0 || i2 > n.length()) {
  	cout << "Second index not correct, fix it \n";
  	cin >> i2;
  } else {
  	break;
  }	  
}
int temp;
temp = n[i2 - 1];
n[i2 - 1] = n[i1 - 1];
n[i1 - 1] = temp;
cout << n <<endl;
return 0;
}
