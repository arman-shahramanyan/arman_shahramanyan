#include <iostream>
#include <string>
#include <fstream>
#include <locale>

using namespace std;

void translate1(string str, string s[12]) {
int count = 0;
string word = "";
  for(int i = 0; i < 12; i++) {
     for(int j = 0; s[i][j] != '-'; j++) {
	  word += s[i][j];
     }
     if (word == str) {
       for (int m = word.length() + 2; s[i][m] != '\0'; m ++) {
            cout << s[i][m];
       }
            cout << " ";
	    break;

     }
     
    word = ""; 
  }
}

int main() {
setlocale(LC_ALL,"Armenian");

  cout << "					DICTIONARY \n" << endl;
  cout << "				Select a dictionary mode\n";
  cout << "				hy-en mode(input 1)\n";
  cout << "				en-hy mode(input 2)\n";
  
  int mode;
      cin >> mode;
  string text;
      cout << "Enter a word to translate: "; 
  getline(cin, text);
  getline(cin, text);
  

      cout << endl; 
  string s1[12];
  string s2[12];

  ifstream f1;
  f1.open("hy-en.txt");

  for (int i = 0; i < 12; i++) {
    f1 >> s1[i];
  }
  f1.close();

  ifstream f2;
  f2.open("en-hy.txt");

  for (int i = 0; i < 12; i++) {
    f2 >> s2[i]; 
  }
  f2.close();
  int count = 0;
  for (int i = 0; i <= text.length(); i++) {
     if (text[i] == ' ' || text[i] == '\0') {
	count++;
     }
  }
  string str1;
  if (mode == 1) {
    for (int i = 0; i <= text.length(); i++) {
      if (text[i] == ' ' || text[i] == '\0') {
         translate1(str1, s1);
	 str1 = "";
	 i++;
      }
      if (text[i] != ' ' || text[i] != '\0') {
      	  str1 += text[i];
      }
    }  
  }
  if (mode == 2) {
    for (int i = 0; i <= text.length(); i++) {
       if (text[i] == ' ' || text[i] == '\0') {    
         translate1(str1, s2);
	 str1 = "";
	 i++;
       }
       if (text[i] != ' ' || text[i] != '\0') {
      	  str1 += text[i];
       }    
    }
  }
  cout << endl; 
 return 0;
}
