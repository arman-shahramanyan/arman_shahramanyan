#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const int n = 3;
    int s1[n][n], s2[n][n], sum[n][n];
    for (int i = 0; i < n; i++) {
        cout << endl;
        for (int j = 0; j < n; j++) {
            s1[i][j] = rand() % 10 + 1;
            s2[i][j] = rand() % 10 + 1;
            cout << " " << s1[i][j] ;
            sum[i][j] = s1[i][j] + s2[i][j];
        }
        if (i == n / 2) {
            cout << "  +  ";
        } else {
            cout << "     ";
        }
       for (int j = 0; j < n; j++) {
        cout << " " << s2[i][j] ; 
        }
        if (i == n / 2) {
            cout << "  =  ";
        } else {
            cout << "     ";
        }
        for (int j = 0; j < n; j++) {
        cout << " " << sum[i][j] ;
        }
    }
    cout << endl;
    return 0;
}
