#include <iostream>
#include <string>

using namespace std;

void swap (char *x, char *y) {
    char t;
    t = *x;
    *x = *y;
    *y = t;
}

void permute(string a, int m, int n ) { 
    if (m == n) { 
        cout << a << endl;
    } else { 
        for (int i = m; i <= n; i++) { 
            swap(a[m], a[i]); 
            permute(a, m + 1, n); 
        } 
    } 
} 
  
int main() {
    
string word;
  cout << "Enter some word: ";
  cin >> word;
  cout << endl;
int size = word.length();
permute(word, 0 , size - 1);
  cout << endl;
  
    return 0;
}
