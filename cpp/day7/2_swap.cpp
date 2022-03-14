#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int s;
    s = *a;
    *a = *b;
    *b = s;
    cout << *a << " " << *b;
}

int main () {
int a;
int b;
cout << "Enter two number for swap function \n";
cin >> a;
cin >> b;
swap(&a, &b);
cout << endl;

    return 0;
}

