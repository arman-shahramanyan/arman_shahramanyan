#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};

int week_day(Date z)
{
    int a;
    int y;
    int m;
    int R;
    a = (14 - z.month) / 12;
    y = z.year - a;
    m = z.month + 12 * a - 2;
    R = 7000 + (z.day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12);
    return R % 7;
} 
struct diary {
  string date;
  string note;
  string command;
  string stop;
}d;


enum DAY {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
 
int main() {
 string str[3];
 string s1;
 int num = 0;
 Date z;
  do {
    cout << "Please enter date" << endl;
    getline(cin, d.date);
    
    ofstream file_date;
    string s = "./note/" + d.date + ".txt";
    file_date.open(s.c_str(), ios::app);

    int j = 0;
    for (int i = 0; i <= d.date.length(); i++) {
    	if (d.date[i] != '_') { 
	    s1 += d.date[i];
        }
  	if (d.date[i] == '_' || d.date[i] == '\0') {
	    str[j] = s1;
	    s1 = "";
	    j++;
	}
    }
  
    z.day = stoi(str[0]);
    z.month = stoi(str[1]);
    z.year = stoi(str[2]);
    int w = week_day(z);
    string x;
    if(w == 1)
       x = "Monday";    
    else if(w == 2)
       x = "Tuesday"; 
    else if(w == 3)
       x = "Wednesday";
    else if(w == 4)
       x = "Thursday";
    else if(w == 5)
       x = "Friday";
    else if(w == 6)
       x = "Saturday";
    else if(w == 7)
       x = "Sunday";

    file_date << d.date << " " << x << endl;
 do {  
    cout << "Enter your notes for that day" << endl;
    getline(cin, d.note);
    file_date << d.note << endl;

    cout << "Тhat you want to continue filling out the diary or stop (input <continue> or <stop> )" << endl;
    getline(cin, d.stop);
    if (d.stop == "stop") { 
    	break;
    }
 }
 while (1); 
    cout << "Select command: add / exit" << endl;
    getline(cin, d.command);
  }
  while (d.command == "add");
  cout << endl;
  return 0;
}
