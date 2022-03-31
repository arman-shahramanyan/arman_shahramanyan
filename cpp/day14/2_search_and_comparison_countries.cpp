#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct countries {
     string country;
     string capital;
     string domain;
     string population;
     string area;
     string GDP;
 };

enum phone_code{
  Armenia = 374,
  Georgia = 995,
  Russia = 7,
  USA = 1,
  Germany = 49,
  France = 33,
  Japan = 81,
  Australia = 61,
};

phone_code x (string name) {
	if (name == "Armenia") 
	    return phone_code :: Armenia;
	else if(name == "Georgia")
            return phone_code::Georgia;
        else if(name == "Russia")
            return phone_code::Russia;
        else if(name == "USA")
            return phone_code::USA;
        else if(name == "Germany")
            return phone_code::Germany;
        else if(name == "France")
            return phone_code::France;
        else if(name == "Japan")
            return phone_code::Japan;
        else 
            return phone_code::Australia;
}


int main(int argc, char* argv[]) {
   	
  countries c[6];
  string search;
  string arg = argv[1];

    string all[6][8];
    ifstream f;
    f.open("countries.txt");
    for (int i = 0; i < 8; i++) {
	 f >> c[i].country >> c[i].capital >> c[i].domain >> c[i].population >> c[i].area >> c[i].GDP;
    }
  if (arg == "search") {
      cout << "Search mode(Country/Capital/Domain): ";
      getline(cin, search);
      cout << endl;
      string r;
      if (search == "Country") {
	  cout << "Enter the country name : ";
	  getline(cin, r);
	  cout << endl;
	for (int i = 0; i < 8; i++) {
	     if (c[i].country == r) {
		 string code = c[i].country;
         	 cout << "Country    --> " << c[i].country << endl;
		 cout << "Capital    --> " << c[i].capital << endl;
		 cout << "Domain     --> " << c[i].domain << endl;
		 cout << "Population --> " << c[i].population << endl;
		 cout << "Area	   --> " << c[i].area << " km^2" << endl;
		 cout << "GDP	   --> " << c[i].GDP << " $"<< endl;
		 cout << "Phone Code --> +" << x(code) << endl;
	     }
	}
    	
    }

      if (search == "Capital") {
	  cout << "Enter the capital name : ";
	  getline(cin, r);
	  cout << endl;
	for (int i = 0; i < 8; i++) {
	     if (c[i].capital == r) {
		 string code = c[i].country;
         	 cout << "Country    --> " << c[i].country << endl;
		 cout << "Capital    --> " << c[i].capital << endl;
		 cout << "Domain     --> " << c[i].domain << endl;
		 cout << "Population --> " << c[i].population << endl;
		 cout << "Area	   --> " << c[i].area << " km^2" << endl;
		 cout << "GDP	   --> " << c[i].GDP << " $" << endl;
		 cout << "Phone Code --> +" << x(code) << endl;
	     }
	}
    	
    }

     if (search == "Domain") {
	cout << "Enter the domain : ";
	getline(cin, r);
	cout << endl;
	for (int i = 0; i < 8; i++) {
	     if (c[i].domain == r) {
		 string code = c[i].country;
         	 cout << "Country    --> " << c[i].country << endl;
		 cout << "Capital    --> " << c[i].capital << endl;
		 cout << "Domain     --> " << c[i].domain << endl;
		 cout << "Population --> " << c[i].population << endl;
		 cout << "Area	   --> " << c[i].area << " km^2" << endl;
		 cout << "GDP	   --> " << c[i].GDP << " $" << endl;
		 cout << "Phone Code --> +" << x(code) << endl;
	     }
	}
    	
    }
  } 

  if (arg == "comparison") {
      string first, second;
      cout << "Enter the first country : ";
      getline(cin, first);
      cout << "Enter the second country : ";
      getline(cin, second);
      cout << endl;
      int j = 0;
      while (j < 8) {
             if (c[j].country == second) {
		     break;
	     }
	     j++;
      }

      for (int i = 0; i < 8; i++) {
           if (c[i].country == first) {
                string code1 = c[i].country;
	        string code2 = c[j].country;
		long int a1 = stol(c[i].population);
		long int a2 = stol(c[i].area);
		long int a3 = stol(c[i].GDP);
		long int b1 = stol(c[j].population);
		long int b2 = stol(c[j].area);
		long int b3 = stol(c[j].GDP);
		char z1, z2, z3;
		if (a1 < b1) {
		     z1 = '<';
		} else {
		     z1 = '>';
		}
		if (a2 < b2) {
		     z2 = '<';
		} else {
		     z2 = '>';
		}
   	        if (a3 < b3) {
		     z3 = '<';
		} else {
		     z3 = '>';
		}

                cout << "Country    --> " << c[i].country << "          |  " << c[j].country << endl;
                cout << "Capital    --> " << c[i].capital << "          |  " << c[j].capital << endl;
                cout << "Domain     --> " << c[i].domain << "  	        |  " << c[j].domain << endl;
                cout << "Population --> " << c[i].population << "       " << z1 << "  " << c[j].population << endl;
                cout << "Area       --> " << c[i].area << " km^2 "<< "  " << z2 << "  " << c[j].area << " km^2" << endl;
                cout << "GDP        --> " << c[i].GDP << " $ " << "     " << z3 << "  " << c[j].GDP << " $" << endl;
                cout << "Phone Code --> +" << x(code1) << "             |   +" << x(code2) << endl;

             }
        }
  }

return 0;
}
