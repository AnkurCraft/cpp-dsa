#include <iostream>
#include <string>
using namespace std;

class Employee {
  public:
  string Name;
  string Company;
  int Age;
  void IntroduceYourself() {
    cout << "Name - " << Name << endl;
    cout << "Company - " << Company << endl;
    cout << "Age - " << Age << endl;
  }
  Employee(string name, string company, int age)
  : Name(name), Company(company), Age(age) {}
};
int main() {
  Employee employee1("Ankur", "JISCE", 21);
employee1.IntroduceYourself();
Employee employee2("Pias", "KUET", 21);
employee2.IntroduceYourself();
}

// string	"Ankur"	
//int	21
//float	3.14
//char	'A'