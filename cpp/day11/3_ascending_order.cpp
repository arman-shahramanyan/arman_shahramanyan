#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{   const int size = 40;
    int arr[size], index;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100 - 50 ;
        cout << arr[i] << ", ";
    }
    int x = 0, y = 0;
    for (int j = 0; j < 50; j++) {
        if (arr[j] < arr[j + 1]) {
            x++;
        }
        if (arr[j] > arr[j + 1] && arr[j] > arr[j - 1]) {
            x++;
        }
        if (arr[j] > arr[j + 1]) {
            if (x > y) {
                y = x;
                x = 0;
                index = j; 
            } else {
                x = 0;
            }
        }
    }
    cout << endl;
    for (int i = y - 1; i >= 0; i--) {
        cout << arr[index - i] << ", ";    
    }
    cout << endl;
    return 0;
}
