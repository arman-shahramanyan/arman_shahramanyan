#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter some text in Latin letters with one or more spaces \n";
    getline (cin, text);
    int x = 0;
    int y = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == 'B' && text[i] != ' ') {
            x++;
        }
        if (text[i] == ' '){
            x = 0;
        }
        if (x == 2 && (text[i + 1] == ' ' || text[i + 1] == '\0')) {
            x = 0;
            y++;
        }
    }
        if (y > 0) {
            cout << y << endl;
        } else {
            cout << "No right word \n";
        }
    return 0;
}
