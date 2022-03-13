#include <iostream>

using namespace std;

int main() {
const int m = 4;
const int n = 3;
int arr[m][n] = {{2, 3, 5}, {18, 54, 50}, {14, 23, 24}, {46, 8, 14}};
for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
        cout << arr [i][j] << " ";
        }
        cout << endl;
    }

for (int i = 0; i < m; i++) {
    int x = 0;
    for (int j = 0; j < n; j++) {
        if (arr[i][j] % 2 == 0) {
            x++;
        }
    }
    if (x == n) {
        cout  << "In line " << (i + 1) << " all numbers are even"<< endl;
        break;
    }
    if (i == m - 1 && x != 3) {
        cout << "There are none \n";
    }
}
return 0;
}
