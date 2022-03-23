#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
string text;
getline(cin, text);
//cout << text << endl;
int s = 0;
int count = 0;
int *arr;
for (int i = 0; i <= text.length(); i++) {
     if (text[i] == ' ' || text[i] == '\0') {
	*(arr + s) = count;
	 s++;
	 count = 0;
     } 
    if (text[i] != ' ') {
    	count++;
    }
     
    
}
/*for (int i = 0; i < s; i++) {
cout << *(arr + i) << " ";
}*/

ifstream word;
word.open("dictionary.txt");
ofstream t;
t.open("correct.txt");
string str;
int i = 0;
for (int a = 0; a < 68; a++) {
	word >> str;
	int j = 0;
   while (i < s) {
	   int x = 0;
	   int y = 0;
	while ( j < *(arr + i)) {
	     if (text[j] == str[y]) {
	        x++;
	     }
	     if (x == (*(arr + i) - 1)) {
	     	t << str;
	     }
	     j++;
	     y++;
	}
	j += (*(arr + i) + 1);
	i++;
   }


}
t.close();
word.close();

return 0;
}
