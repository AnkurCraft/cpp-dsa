#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
    string Name;
  string Company;
  int Age;
  public:
  void setName(string name) { //Setter
    Name = name;
  }
  string getname() { //Getter
    return Name;
  }
  void setCompany(string company) {
    Company = company;
  }
    string getCompany() {
        return Company;
    }
  void setAge(int age) {
    if(age>=18) //If we don't write this line, then we can set age to any value.
    Age = age;
  }
    int getAge() {
        return Age;
    }
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
employee1.setAge(15);
std::cout<<employee1.getname()<<" is "<<employee1.getAge()<<" years old."<<std::endl;
}

