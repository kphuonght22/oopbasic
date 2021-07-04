#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string FirstName, LastName, Gender;
    double Mark;

public:
    void getData()
    {
        getline(cin, LastName);
        getline(cin, FirstName);
        cin >> Mark;
        cin >> Gender;
    }
    void display()
    {
        cout << "LastName: " << LastName << endl;
        cout << "FirstName: " << FirstName << endl;
        cout << "Mark: " << Mark << endl;
        cout << "Gender: " << Gender;
    }
};

int main()
{
    Student student;
    student.getData();
    student.display();
    return 0;
}