#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

void player(char pend);

void comp(char cend);

int x = 0;


int main() {
cout << "			_______________CITY GAME_______________ \n" << endl;
cout << "				Select who start game \n";
cout << "				Start player(input 1)\n";
cout << "				Start computer(input 2)\n";
int select;
char p;
cin >> select;
string city[22] = {"Erevan", "Moscow", "Sochi", "Stepanakert", "Paris", "Berlin", "Rim", "Madrid", "Kiev", "Tumen", "Gyumri", "Washington", "Novosibirsk", "Sankt-Peterburg", "Hadrut", "Hamburg", "London", "Oslo", "Tokyo", "Pekin", "Amsterdam", "Noterdam"};
int r = rand() % 22;
while(1) {
  if (select == 1) {
     player(p);
     break;
  } else 
  if (select == 2) {
     cout << "Computer move:\n	City name: " << city[r] << endl;
     x += 1;
     int  i = 0;
     while (city[r][i] != '\0') {
            i++;
     }
     int a = 'a' - 'A';
     city[r][i - 1] -= a;
     p = city[r][i - 1];	 
     player(p);
     break;
  } else {
     cout << "	Wrong select try again \n";
     cin >> select;
  }
}
return 0;
}


void  player(char pend) {
  string pname;
 	cout << "Your move:\n	Enter city name: ";
	cin >> pname;
  char firstletter = pname[0];
  if (firstletter != pend && x > 0) {
  	cout << "			You Lose! \n"; 
  } else {
  char endletter;
  int i = 0; 
  while (pname[i] != '\0') {
	i++;
  }
  endletter = pname[i - 1];
  int a = 'a' - 'A';
  endletter -= a;
  x += 1;
  comp(endletter);
  }
}


void comp(char cend) {
  string cname = "null";
	cout << "Computer move:\n	City name: ";
  string city[22] = {"Erevan", "Moscow", "Sochi", "Stepanakert", "Paris", "Berlin", "Rim", "Madrid", "Kiev", "Tumen", "Gyumri", "Washington", "Novosibirsk", "Sankt-Peterburg", "Hadrut", "Hamburg", "London", "Oslo", "Tokyo", "Pekin", "Amsterdam", "Noterdam"};
  char firstletter;
  char endletter;
  int b = 0;
  for (int i = 0; i <= 22; i++) {
      if (city[i][0] == cend ) {
      cname = city[i];
   	cout << "  " << cname << endl;
      break;
      }
  } 
  if ( cname == "null") {
  	cout << "			You Win!!! \n";
	b = 1;
  }
  if (b == 0) {
  int i = 0; 
  while (cname[i] != '\0') {
  	i++;
  }
  endletter = cname[i - 1];
  int a = 'a' - 'A';
  endletter -= a;
  player(endletter);
  }
}
