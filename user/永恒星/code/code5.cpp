#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  float a,b,c,d,e;
  cin >> a >> b;
  c = a / b;
  d = (a + b) / 2;
  e = a - d;
  cout << fixed << setprecision(2) << c <<endl;
  cout << fixed << setprecision(2) << d <<endl;
  cout << fixed << setprecision(2) << e <<endl;
  return 0;
}
