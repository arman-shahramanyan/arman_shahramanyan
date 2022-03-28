#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string right(string word); 

int main() {
  string text;
  cout << "Enter some words from the file \n";
  getline(cin, text);
  text += " ";
  ofstream cor;
  cor.open("correct.txt");

  string word;
  int j = 0;
  int c = 0;
  for (int x = 0; x < text.length(); x++) {
  	if (text[x] == ' ') {
	    c++;
	}
  }
 
  for(int i = 0; i < c; i++ ) {
    word = "";
    for(;text[j] != ' '; j++){
      word += text[j];
    }
    j++;
    cor << right(word) << ' ';
	
  }
  cor.close();
  return 0;
}
string right(string word) {
  ifstream dic;
  dic.open("dictionary.txt");
  string s;
  int count = 0;
  while(!dic.eof()) {
    count = 0;
    getline(dic, s);

    if(s.size() != word.size()){
      continue;
    }
    for(int i = 0; word[i] != '\0'; i++) {
      if(word[i] != s[i]){
        count ++;
      }
    }
    if(count == 1) {
      break;
    }
  }
  dic.close();
  if(count != 1) {
    return word;
  }
  return s;
}


