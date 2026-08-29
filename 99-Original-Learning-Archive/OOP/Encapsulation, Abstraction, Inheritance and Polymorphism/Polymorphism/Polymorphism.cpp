#include <iostream>
#include <string>
using namespace std;

class AbstractEmployee {
public:
    virtual void AskForPromotion() = 0; // Pure virtual function
};

class Employee : public AbstractEmployee {
private:
    string Company;
    int Age;

protected:
    string Name;

public:
    // Setter
    void setName(string name) {
        Name = name;
    }

    // Getter
    string getName() {
        return Name;
    }

    void setCompany(string company) {
        Company = company;
    }

    string getCompany() {
        return Company;
    }

    void setAge(int age) {
        if (age >= 18)
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

    // Constructor
    Employee(string name, string company, int age)
        : Name(name), Company(company), Age(age) {}

    // Implementation of pure virtual function
    void AskForPromotion() override {
        if (Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << ", sorry no promotion for you!" << endl;
    }

    virtual void Work() {
        cout << Name
             << " is checking email, task backlog, performing tasks"
             << endl;
    }
};

class Developer : public Employee {
public:
    string FavProgrammingLanguage;

    Developer(string name, string company, int age,
              string favProgrammingLanguage)
        : Employee(name, company, age) {
        FavProgrammingLanguage = favProgrammingLanguage;
    }

    void FixBug() {
        cout << Name << " fixed bug using "
             << FavProgrammingLanguage << endl;
    }
};

class Teacher : public Employee {
public:
    string Subject;

    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age) {
        Subject = subject;
    }

    void PrepareLesson() {
        cout << Name << " is preparing "
             << Subject << " lesson" << endl;
    }
};

int main() {

    Developer d("Ankur", "JISCE", 25, "C++");
    Teacher t("Pias", "KUET", 35, "Math");

    
  Employee* e1 = &d; // Upcasting
    Employee* e2 = &t; // Upcasting

    e1->Work(); // Calls Developer's Work method
    e2->Work(); // Calls Teacher's Work method

    
    return 0;
}