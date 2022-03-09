#include <iostream>
#include <cstring>

using namespace std;

int
main ()
{
  string word;
  cout << "Enter the word: ";
  cin >> word;
  int i;
  int x = word.length ();
  for (i = 0; i <= x; i++) {
  if (word[i] >= 'A' && word[i] <= 'Z') {
      int a;
      a = 'a' - 'A';
      word[i] += a;
    }
  }
  for (i = 0; i < x / 2; ++i) {

      if (word[i] != word[x - i - 1]) {
	  cout << "false\n";
	  break;
	}
    }
  if (word[i] == word[x - i - 1]) {
      cout << "true\n";
    }

  return 0;
}
