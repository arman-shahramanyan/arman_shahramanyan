#include <iostream>
using namespace std;
int perimetr (int x, int y) {
    return 2 * (x + y);
}
int area (int x, int y) {
	return x * y;


}

int main  (){
int p, s;
int a, b;
	cout << "Please enter rectangle parameters \n";
        cin >> a;
        cin >> b;
    p=perimetr(a, b);
    s=area(a, b);
	cout << "Perimeter=" << p << endl;
	cout << "Area=" << s << endl;


return 0;
} 
