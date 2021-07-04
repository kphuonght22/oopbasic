#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Student
{
private:
    string ID, FirstName, LastName, Gender;
    double Mark;

public:
    void displayInfo()
    {
        fstream File;
        File.open("data.txt"); // open file data
        getline(File, ID);
        getline(File, LastName);
        getline(File, FirstName);
        File >> Mark;
        File >> Gender;

        cout << "ID: " << ID << endl;
        cout << "LastName: " << LastName << endl;
        cout << "FirstName: " << FirstName << endl;
        cout << "Mark: " << Mark << endl;
        cout << "Gender: " << Gender << endl;

        File.close();
    }
    void saveInfo()
    {
        cout << "ID: ";
        getline(cin, ID);
        cout << endl
             << "LastName: ";
        getline(cin, LastName);
        cout << endl
             << "FirstName: ";
        getline(cin, FirstName);
        cout << endl
             << "Mark: ";
        cin >> Mark;
        cout << endl
             << "Gender: ";
        cin >> Gender;

        fstream File;
        File.open("data.txt", ios::out);
        File << ID << endl;
        File << LastName << endl;
        File << FirstName << endl;
        File << Mark << endl;
        File << Gender;

        File.close();
    }
};

int main()
{
    Student student;
    student.displayInfo();
    student.saveInfo();
    return 0;
}
