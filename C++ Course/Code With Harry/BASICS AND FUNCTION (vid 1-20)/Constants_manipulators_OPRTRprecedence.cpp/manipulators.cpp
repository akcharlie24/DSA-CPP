#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  //*******Manipulators*********

  int a = 3, b = 78, c = 1233;
  cout << "The value of a without setw is " << a << endl;
  cout << "The value of b without setw is " << b << endl;
  cout << "The value of c without setw is " << c << endl;

  cout << "The value of a is " << setw(4) << a << endl; // setw(4) ne ensure kara ki 4 ki width lega atleast output me
  cout << "The value of b is " << setw(4) << b << endl; // setw is helpful in case of large numbers display becomes more tidy
  cout << "The value of c is " << setw(4) << c << endl;
  return 0;
}