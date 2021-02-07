#include<fstream>
#include<iostream>
#include<string>


using namespace std;
class Student {
public:
    void setStudentID(string ID) {
        this->ID = ID;
        fstream fID("StudentIDs.txt", ios::app);
        fID << ID << endl;
        fID.close();

    }
    void getStudentID() {
        string ids[5];

        fstream myID("StudentIDs.txt", ios::in);
        while (!myID.eof())
        {
            int i = 0;
            myID >> ids[i];
            cout << ids[i] << endl;
            ++i;
        }
        myID.close();
    }
    void setStudentName(string name) {
        this->name = name;
        fstream fName("StudentNames.txt", ios::app);
        fName << name << endl;
        fName.close();
    }
    void getStudentName() {
        string names[5];

        fstream myNames("StudentNames.txt", ios::in);
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
    string ID;
    string name;
};







int main() {
    string choose;
    string studentID, studentName, studentToSearch;
    Student student1;
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
            if (countlist < 5) {

                cout << "Enter Student ID:" << endl;
                cin >> studentID;
                cout << "Enter Student Name:" << endl;
                cin >> studentName;
                student1.setStudentID(studentID);
                student1.setStudentName(studentName);
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
                student1.getStudentID();
                student1.getStudentName();
            }
            else {
                cout << "No data!" << endl;
            }


        }
        else if (choose == "3")
        {
            cout << "Search:";
            cin >> studentToSearch;
            cout << student1.searchStudent(studentToSearch) << endl;

        }
        else if (choose == "4") {
            ofstream ofID;
            ofID.open("StudentIDs.txt");
            ofID.close();
            ofstream ofStudent;
            ofStudent.open("StudentNames.txt");
            ofStudent.close();
            cout << "Everything is deleted!" << endl;
            countlist = 0;
        }
        else if (choose == "5")
        {
            ofstream fout;
            fout.open("student.txt", ofstream::app);
            if (!fout.is_open())
            {
                cout << "Error in storing DATA to student.txt\n";
            }
            else
            {
                fout.write((char*)&student1, sizeof(Student));
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