#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
int x = 5;
int arr[10];
int a = 0;
while (1) {
    double n = 0.1;
    if (x % 5 == 0) {
        for (int j = 1; j < x; j++){
            n = sqrt(j);
            if (abs(n - int(n)) == 0) {
            n = x - j;
                 n = sqrt(n);
                if (abs(n - int (n)) == 0) {
                    arr[a] = x;
                    cout << j << " + " << pow(n, 2) <<" = "<< arr[a] << endl;
                    a++;
                    break;
                } 
            }
        }     
    } 
    x++;
    if (a == 10) {
        break;
    }
}
return 0;
}

