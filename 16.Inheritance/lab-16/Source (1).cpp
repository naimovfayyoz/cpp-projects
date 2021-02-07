#include<iostream>
#include<string>
using namespace std;
class Person {
private:
    string name;
    string adress;
    string toString1;
public:
    Person()
    {
        name = "NULL";
        adress = "NULL";
        toString1 = "NULL";
    }
    Person(string name1, string adress1)
    {
        name = name1;
        adress = adress1;
    }
    string getName()
    {
        return name;
    }
    string getAdress()
    {
        return adress;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setAdress(string adress)
    {
        this->adress = adress;
    }
    string toString()
    {
        toString1 = " Name : " + name + "\n Adress : " + adress;
        return toString1;
    }
};
class Student :public Person
{
private:
    int numCourses;
    string courses[10];
    int grades[3];
    int avgrades;
public:
    Student()
    {
        avgrades = 0;
        numCourses = 0;
        for (int i = 0; i <= 3; i++)
        {

            grades[i] = 0;
        }
        for (int i(0); i <= 10; i++) {
            courses[i] = "Null";
        }
    }
    Student(string name, string adress)
    {
        Person::setAdress(adress);
        Person::setName(name);
    }
    void addCourseGrade(string course, int grade)
    {
        courses[numCourses] = course;
        grades[numCourses] = grade;
        ++numCourses;
    }
    void printGrades()
    {
        for (int i = 0; i < numCourses; i++)
        {
            cout << courses[i] << " : " << grades[i] << endl;
        }
    }
    double getAverageGrade()
    {
        for (int i = 0; i < numCourses; i++)
        {
            avgrades = avgrades + grades[i];
        }
        avgrades = avgrades / numCourses;
        return avgrades;
    }
    string toString()
    {
        return Person::toString();
    }
};

class Teacher :public Person
{
private:
    int numCourses;
    string courses[5];
public:
    Teacher()
    {
        numCourses = 0;
        for (int i = 0; i < 5; i++)
        {
            courses[i] = "Null";
        }

    }
    Teacher(string teacher_name, string teacher_adress)
    {
        numCourses = 0;
        Person::setName(teacher_name);
        Person::setAdress(teacher_adress);
    }
    bool checking(string checking_course)
    {
        for (int i = 0; i < numCourses; i++)
        {
            if (courses[i] == checking_course)
                return false;
        }
        return true;
    }
    bool addCourse(string course_name)
    {
        if (numCourses < 5)
        {
            checking(course_name);
            if (checking(course_name) == true)
            {
                courses[numCourses] = course_name;
                ++numCourses;
                cout << "The Course " << course_name << " have been added!\n";

            }
            else
            {
                system("cls");
                cout << "The given subject already exists!\n";
            }
        }
        else
        {
            cout << "check the number of the !\n";
        }
        return true;
    }
    bool removeCourse(string removing_course)
    {
        checking(removing_course);
        if (checking(removing_course) == true)
        {

            cout << "Sorry,but u have to make sure that course exists!\n";
        }
        else
        {
            int next;
            for (int i = 0; i <= numCourses; i++)
            {
                if (courses[i] == removing_course)
                {
                    courses[i] = "";

                    cout << "The course " << removing_course <<
                        " has been removed successfully!\n";
                    next = i;
                }
                if (next <= i) {
                    courses[i] = courses[i + 1];
                }
            }
        }
        return true;
    }
};
int main()
{
    int a=1;
    string cin_stname;
    string cin_stadress;
    string cin_coursename;
    int cin_coursegrade = 0;
    int i;
    string cin_tname;
    string cin_tadress;
    string extra_course;
    string remove_course;
    int b = 0;
    int option = 0;
    Student student;
    Teacher teacher;
    while (a != 0) {
         cout << "Input 1 to add Student Information\n"
        << "Input 2 to add Student Grades\n"
        << "Input 3 to get Scores with Average Score\n"
        << " Input 4 to add Teacher\n"
        << "Input 5 to add Teacher Course\n"
        << "Input 6 to remove Teacher Course\n"
        << "0 to exit program\n";
        cin >> i;
        if (i == 1)
        {
            if (option != 0)
            {
                cout << "Input Student's Name:";
                cin >> cin_stname;
                cout << "Input Student's Adress:";
                cin >> cin_stadress;
                Student student(cin_stname, cin_stadress);
                ++option;

            }
            else
            {
              
                cout << "we have this one!" << endl;

            }
        }
        else if (i == 2)
        {
            if (cin_stname == "")
            {
               
                cout << "No student name\n" ;

            }
            else
            {
                cout << "Input the Course Name: ";
                cin >> cin_coursename;
                cout << "Input the Grade for " << cin_coursename << " : ";
                cin >> cin_coursegrade;
                student.addCourseGrade(cin_coursename, cin_coursegrade);

            }
        }
        else if (i == 3)
        {
            if (cin_stname != "" && cin_coursegrade != 0)
            {
              
                student.printGrades();
                cout << "Average Grade for " << cin_stname << " is: " <<
                    student.getAverageGrade() << endl;

            }
            else
            {
              
                cout << "No marks yet!" << endl;

            }
        }
        else if (i == 4)
        {
            if (b == 0)
            {
                Teacher teacher;
                cout << "Input Teacher's Name: " << endl;
                cin >> cin_tname;
                cout << "Input Teacher's Adress: " << endl;
                cin >> cin_tadress;
                ++b;

            }
            else
            {
              
                cout << "we have this one yet!\n";

            }
        }
        else if (i == 5)
        {
            if (cin_tname != "")
            {
                cout << "Input course Name: ";
                cin >> extra_course;
                teacher.addCourse(extra_course);

            }
            else
            {
             
                cout << "No professors!" << endl;

            }
        }
        else if (i == 6)
        {
            if (cin_tname != "")
            {
                cout << "Input course to remove: ";
                cin >> remove_course;
                teacher.removeCourse(remove_course);

            }
            else
            {

                cout << "No professors!" << endl;

            }
        }
       
         } return 0;
}
/*
Id:u1910071
Name:Fayyoz Naimov*/
