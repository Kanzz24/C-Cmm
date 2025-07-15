#include <iostream>

int main() {
  int age = 0;
  std::cout << "มึงอายุเท่าไหร่ : \n " << std::endl;
  std::cin >> age;
  std::cout << "กุอายุ : " << age << " ปี ถามโง่ๆ " << std::endl;

  return 0;
}


///////////////////////////////////////////////


#include <iostream>
using namespace std;

int main() {

  int temperature;
  cout << "Enter the temperature: ";
  cin >> temperature;

  if (temperature < 30) {
    cout << "หนาวโว้ยยยยย \n";
  } else if (temperature >= 30) {
    cout << "ร้อนชิบหาย \n";
  }
  else {
    cout << "อืม ปกติ \n";
  }
  return 0;
}


//////////////////////////////////////////////////////


#include <iostream>
using namespace std;

int main() {

  int x = 3000;
  int y = 1000;
  

  if (x < y) {
    cout << "y is stanger than x\n" << endl;
  }
  else

  if (x > y) {
    cout << "x is stanger than y\n" << endl;
  }
  else
    
  return 0;
}


/////////////////////////////////////////////
* Grade Project *
/////////////////////////////////////////////
#include <iostream>
using namespace std;

int main() {

    int grade;
    cout << "Enter your grade : ";
    cin >> grade;
    if (grade >= 80)
        cout << "มึงได้ A" << endl;
    else
    if (grade >= 70)
        cout << "มึงได้ B" << endl;
    else
    if (grade >= 60)
        cout << "มึงได้ C" << endl;
    else 
    if (grade >= 50)
        cout << "มึงได้ D" << endl;
    else
    if (grade >= 0)
        cout << "มึงได้ F" << endl;
    else
    if (grade < 0)
        cout << "มึงกลับไปเรียนใหม่" << endl;
    else
  
  return 0;
}



