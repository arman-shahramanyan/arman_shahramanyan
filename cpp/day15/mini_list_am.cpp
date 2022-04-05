#include <iostream>
#include <string>
#include <fstream>

using namespace std;

char lower(char letter) {
    if (letter >= 'A' && letter <= 'Z') {
        return letter + ('a' - 'A');
    }
    return letter;
}
string to_lower(string word) {
    string result = "";
    for (int i = 0; word[i] != '\0'; i++) {
        result += lower(word[i]);
    }
    return result;
}

string higher (string word) {
    for (int i = 0; i < word.length(); i++) {
         word[i] -= ('a' - 'A');
    }
    return word;
}

struct car {
  string brand;
  string model;
  double min_price;
  double max_price;
  double min_mileage;
  double max_mileage;
  double capacity;
  string transmission;
  string drive;
  string color;
};

int main() {
    car c;
    const int size = 10;
    ifstream car;
    car.open("car.txt");
    string s[size][8];

    for (int i = 0; i < size; i++) {
	for (int j = 0; j < 8; j++) {
    	     car >> s[i][j];
	}
    }
    car.close();
    string car_brand[size];
    cout << "\t\t>>Car list<<\n";
    for (int i = 0; i < size; i++) {
	 cout << "\t"<< i + 1 << ". " << s[i][0] << " " << s[i][1] << endl;
    }
    string filters;
    cout << "\n\tBy what parameters do you want to search for a car?\n\t(brand, price, mileage, capacity, transmission, drive, color)\n > "; getline(cin, filters);
    string fil[7], f = "";
    int j = 0;
    for (int i = 0; i <= filters.length(); i++) {
         if (filters[i] != ' ') {
	     f += filters[i];
	 }
	 if (filters[i] == ' ' || filters[i] == '\0') {
	     fil[j] = to_lower(f);
	     f = "";
	     j++;
	 }
    }
int index[7][size];
bool p[] = {false, false, false, false, false, false, false};
int count = 0;
for (int i = 0; i < j; i++) {
   for (int m = 0; m < 7; m++) {
        if (fil[i] == "brand") {
	    p[0] = true;
            cout << "\n\t Enter car brand > "; getline(cin, c.brand);
	    break;
        } else
        if (fil[i] == "price") {
	    p[1] = true;
            cout << "\n\t Enter min price > ";
	    cin >> c.min_price;
            cout << "\n\t Enter max price > ";
	    cin >> c.max_price;
	    cin.ignore();
            break;
        } else
        if (fil[i] == "mileage") {
	   p[2] = true;
           cout << "\n\t Enter min mileage > ";
	   cin >> c.min_mileage;
	   cout << "\n\t Enter max mileage > ";
	   cin >> c.max_mileage;
	   cin.ignore();
           break;
        } else
        if (fil[i] == "capacity") {
	    p[3] = true;
            cout << "\n\t Enter engine size > ";
	    cin >> c.capacity;
	    cin.ignore();
            break;
        } else
        if (fil[i] == "transmission") {
	    p[4] = true;
            cout << "\n\t Enter transmission type > "; getline(cin, c.transmission);
	    break;
        } else
        if (fil[i] == "drive") {
	    p[5] = true;
            cout << "\n\t Enter wheel drive type(RWD, FWD, AWD) > "; getline(cin, c.drive);
	    break;
        } else
        if (fil[i] == "color") {
	    p[6] = true;
	    cout << "\n\t Enter car color > "; getline(cin, c.color);       
	    break;
        } else {
            cout << "\n\t" << fil[i] << " not correct filter.\n";
            break;
        }
   }
}

for (int i = 0; i < size; i++) {
     if ((s[i][0] != c.brand) && p[0]) {
         continue;
     }
     if ((c.min_price > stod(s[i][2]) || stod(s[i][2]) > c.max_price) && p[1]) {
         continue;
     }
     if ((c.min_mileage > stod(s[i][3]) || stod(s[i][3]) > c.max_mileage) && p[2]) {
         continue;
     }
     if ((c.capacity != stod(s[i][4])) && p[3]) {
         continue;
     }
     if ((to_lower(c.transmission) != s[i][5]) && p[4]) {
         continue;
     }
     if ((higher(c.drive) != s[i][6]) && p[5]) {
         continue;
     }
     if ((to_lower(c.color) != s[i][7]) && p[6]) {
         continue;
     }
     for (int j = 0; j < 8; j++) {
     	  cout << s[i][j] << " ";
     }
     cout << endl;






}




return 0;
}
