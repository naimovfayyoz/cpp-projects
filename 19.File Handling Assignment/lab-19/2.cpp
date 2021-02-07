#include<fstream>
#include<iostream>
#include<string>


using namespace std;
class Student {
public:
    void setStudentNumber(string Number) {
        this->Number = Number;
        fstream fID("phone.txt", ios::app);
        fID << Number << endl;
        fID.close();

    }
    void getStudentNumber() {
        string numbers[10];

        fstream myNumber("phone.txt", ios::in);
        while (!myNumber.eof())
        {
            int i = 0;
            myNumber >> numbers[i];
            cout << numbers[i] << endl;
            ++i;
        }
        myNumber.close();
    }
    void setStudentName(string name) {
        this->name = name;
        fstream fName("Name.txt", ios::app);
        fName << name << endl;
        fName.close();
    }
    void getStudentName() {
        string names[10];

        fstream myNames("Name.txt", ios::in);
        while (!myNames.eof())
        {
            int i = 0;
            myNames >> names[i];
            cout << names[i] << endl;
            ++i;
        }myNames.close();
    }




    string searchStudent(string searching) {
        string data, target;
        fstream myNames("StudentNames.txt", ios::in);
        while (!myNames.eof()) {
            myNames >> data;
            if (data == searching) {
                target = data;
            }
        }
        fstream myID("StudentIDs.txt", ios::in);
        while (!myID.eof()) {
            myID >> data;
            if (data == searching)
            {
                target = data;
            }
        }
        if (target.empty()) {
            target = "There is no such user";
        }

        return target;
    }

private:
    string Number;
    string name;
};







int main() {
    string choose;
    string studentNumber, studentName, studentToSearch;
    Student student;
    int countlist = 0;
    int i = 0;
    while (i != 1)
    {
        cout << "Enter 1 to add new Student \n"
            << "Enter 2 to list all Student \n"
            << "Enter 3 to search for Student \n"
            << "Enter 4 to Clear all Students \n"
            << "Enter 5 to quit \n";
        cin >> choose;
        if (choose == "1")
        {
            if (countlist != 0) {

                cout << "Enter Student Number:";
                cin >> studentNumber;
                cout << "Enter Student Name:";
                cin >> studentName;
                student.setStudentNumber(studentNumber);
                student.setStudentName(studentName);
                cout << endl;
                ++countlist;
            }
            else {
                cout << "Limit is 5\n";
            }

        }
        else if (choose == "2")
        {
            if (countlist != 0) {
                student.getStudentNumber();
                student.getStudentName();
            }
            else {
                cout << "No data!" << endl;
            }


        }
        else if (choose == "3")
        {
            cout << "Search:";
            cin >> studentToSearch;
            cout << student.searchStudent(studentToSearch) << endl;

        }
        else if (choose == "4") {
            ofstream ofNumber;
            ofNumber.open("phone.txt");
            ofNumber.close();
            ofstream ofStudent;
            ofStudent.open("Name.txt");
            ofStudent.close();
            cout << "Everything is deleted!" << endl;
            countlist = 0;
        }
        else if (choose == "5")
        {
            ofstream fout;
            fout.open("Info.txt", ofstream::app);
            if (!fout.is_open())
            {
                cout << "Error in storing DATA to student.txt\n";
            }
            else
            {
                fout.write((char*)&student, sizeof(Student));
            }
            fout.close();
            cout << "Good BYE\n";
            return 0;
        }
        else {
            cout << "Please give a  correct character\n";

        }
    }


}
/*
FAYYOZ NAIMOV
ID:U1910071*/