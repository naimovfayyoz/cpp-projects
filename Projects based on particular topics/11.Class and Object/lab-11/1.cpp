/*Name:Fayyoz Naimov
ID:u1910071*/
#include<iostream>

#include<string>
using namespace std;
class student
{
private:
	int id = 0;
	string student_name = "NONE";
	float english = 0, math = 0, science = 0, total = 0;
public:
	int getid() { return id; }
	void setid(int id1) { id = id1; }
	string getstudent_name() { return student_name; }
	void setstudent_name(string student_name1) { student_name = student_name1; }
	float getenglish() { return english; }
	void setenglish(float english1) { english = english1; }
	float getmath() { return math; }
	void setmath(float math1) { math = math1; }
	float getscience() { return science; }
	void setscience(float science1) { science = science1; }
};
int main() {
	student grading;
	int id1 , option, i = 1;
	string student_name1 ;
	float english1 = 0, math1 = 0, science1 = 0;
	while (i != 2) {


		cout << "\t\t\t\t1)Inputing\n"
			"\t\t\t\t2)Displaying\n"
			"\t\t\t\t3)Exit\n";

		cin >> option;
		if (option == 1) {
			cout << "\n Please enter the id\n";
			cin >> id1;
			cout << "\n Please enter the student name\n";
			cin >> student_name1;
			cout << "\n Please enter the math results\n";
			cin >> math1;
			cout << "\n Please enter the english results\n";
			cin >> english1;
			cout << "\n Please enter the science-related results\n";
			cin >> science1;
			grading.setid(id1);
			grading.setstudent_name(student_name1);
			grading.setenglish(english1);
			grading.setmath(math1);
			grading.setscience(science1);
		}
		if (option == 2) {
			cout << "The given id is:" << grading.getid() << endl;
			cout << "The given name is:" << grading.getstudent_name() << endl;
			cout << "The given id en results:" << grading.getenglish() << endl;
			cout << "The given id math results:" << grading.getmath() << endl;
			cout << "The given id science related is:" << grading.getscience() << endl;
			cout << "the total is:" << math1 + science1 + english1 << endl;
		}if (option == 3)
			break;
	}
	system("pause");

}