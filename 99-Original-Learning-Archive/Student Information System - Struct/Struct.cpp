#include <iostream>
using namespace std;
struct student 
{
    int roll;
    string name;
    float marks;
};
int main()
{
    student s1;
    
    s1.roll = 101;
    s1.name = "Ankur";
    s1.marks = 89.5;

    cout << "Student Details:";
    cout << "Roll: " << s1.roll << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.marks << endl;
    return 0;
}