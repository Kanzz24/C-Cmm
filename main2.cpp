#include <iostream>
using namespace std;

int main() {
  int numbers[5];

  numbers[0] = 10;
  numbers[1] = 20;
  numbers[2] = 30;
  numbers[3] = 40;
  numbers[4] = 50;

  cout << "ตำแหน่ง ที่ 1 มีค่าเท่ากับ " << numbers[0] << endl;
  cout << "ตำแหน่ง ที่ 2 มีค่าเท่ากับ " << numbers[1] << endl;
  cout << "ตำแหน่ง ที่ 3 มีค่าเท่ากับ " << numbers[2] << endl;
  cout << "ตำแหน่ง ที่ 4 มีค่าเท่ากับ " << numbers[3] << endl;
  cout << "ตำแหน่ง ที่ 5 มีค่าเท่ากับ " << numbers[4] << endl;

  return 0;
}

///////////////////////////////////////

*Project หาพื้นที่วงกลม* 

//////////////////////////////////////


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double areaofcircle(double radius) {
  return 3.14159 * radius * radius;
}

int main() {
  double radius;
  cout << "Enter the radius of the circle: ";
  cin >> radius;

  double area = areaofcircle(radius);
  cout << "The area of the circle is: " << area << endl;
  return 0;
}
