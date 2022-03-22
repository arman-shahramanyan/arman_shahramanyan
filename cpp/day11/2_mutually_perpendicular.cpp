#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    int c[4][2];
  	cout << "Enter coordinates \n";
    for (int i = 0; i < 4; i++) {
        cout << "x" << i + 1 << "="; 
        cin >> c[i][0];
        cout << "y" << i + 1 << "=";
        cin >> c[i][1];
    }
    double x , y;
    if ((c[0][0] == c[1][0] && c[2][1] == c[3][1]) || (c[0][1] == c[1][1] && c[2][0] == c[3][0])) {
        cout << "Lines are perpendicular \n";
    } else {
        x = (c[0][0] * pow((c[1][1] - c[0][1]), 2) + c[2][0] * pow((c[1][0] - c[0][0]), 2) + (c[1][0] - c[0][0]) * (c[1][1] - c[0][1]) * (c[2][1] - c[0][1])) / (pow((c[1][1] - c[0][1]), 2) + pow((c[1][0] - c[0][0]), 2));
        y = ((c[1][0] - c[0][0]) * (c[2][0] - x)) / ((c[1][1] - c[0][1])) + c[2][1];
        if (c[3][0] == x && c[3][1] == y) {
            cout << "Lines are perpendicular \n";
        } else {
            cout << "Lines are not perpendicular \n";
        }
    }  
    return 0;
}

