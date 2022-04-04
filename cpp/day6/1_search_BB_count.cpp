#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter some text in Latin letters with one or more spaces \n";
    getline (cin, text);
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == 'B' && text[i] != ' ') {
            count1++;
        }
        if (text[i] == ' '){
            count1 = 0;
        }
        if (count1 == 2 && (text[i + 1] == ' ' || text[i + 1] == '\0')) {
            count1 = 0;
            count2++;
        }
    }
        if (count2 > 0) {
            cout << count2 << endl;
        } else {
            cout << "No right word \n";
        }
    return 0;
}
