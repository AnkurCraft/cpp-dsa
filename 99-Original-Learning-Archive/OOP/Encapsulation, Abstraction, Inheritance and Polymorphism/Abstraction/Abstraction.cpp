#include <iostream>
#include <string>
using namespace std;

class AbstractEmployee {
   virtual void AskForPromotion() = 0; //Pure virtual function, we can't create object of this class.
};

class Employee :AbstractEmployee {
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
  void AskForPromotion() {
    if (Age > 30)
      cout << Name << " got promoted!" << endl;
    else
      cout << Name << ", sorry no promotion for you!" << endl;
  }
};
int main() {
  Employee employee1("Ankur", "JISCE", 21);
Employee employee2("Pias", "KUET", 31);

employee1.AskForPromotion(); //AskForPromotion(); this is like the camera button
employee2.AskForPromotion();
}

