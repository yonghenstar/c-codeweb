#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
  float a,b,c;
  cout << "输入3科成绩:";
  cin >> a >> b >> c;
  cout << fixed << setprecision(2) << ((a+b+c)/3) <<endl;
  return 0;
}
