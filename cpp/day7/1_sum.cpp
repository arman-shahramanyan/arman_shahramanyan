#include <iostream>

using namespace std;
void sum1(int *a, int *b, int *sum) {
    
    *sum = *a + *b;
    cout << *sum << endl;
}
void sum2(int &a, int &b, int &sum) {
    
    sum = a + b;
    cout << sum << endl;
}
void sum3(int a, int b, int &sum) {
    
    sum = a + b;
    cout << sum << endl;
}
void sum4(int a, int *b, int &sum) {
    
    sum = a + *b;
    cout << sum << endl;
}
void sum5(int *a, int *b, int &sum) {
 
    sum = *a + *b;
    cout << sum << endl;
}
int main() { 
   int a = 10;
   int b = 15;
   int sum = 0;
   sum1(&a, &b, &sum);
   
   sum2(a, b, sum);
   
   sum3(a, b, sum);
   
   sum4(a, &b, sum);
   
   sum5(&a, &b, sum);
    return 0;
}
