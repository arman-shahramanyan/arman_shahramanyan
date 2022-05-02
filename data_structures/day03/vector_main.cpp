#include "vector.h"

int main()
{
  Vector<int> v;
  v.AddAt(5, 0);
  v.AddBack(44);
  v.AddBack(3);
  v.AddAt(15, 1);
  v.AddAt(71, 3);
  v.Print();
  cout << "------\n";
  v.RemoveAt(2);
  v.Print();
  cout << "------\n";
  cout << v[0] << endl;

  return 0;
}