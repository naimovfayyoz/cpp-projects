#include "Header.h"
int main() {
	student grading;
	int id1, option, i = 1;
	string student_name1;
	float english1 = 0, math1 = 0, science1 = 0;
	while (i != 2) {


		cout << "\t\t\t\t1)Inputing\n"
			"\t\t\t\t2)Displaying\n"
			"\t\t\t\t3)Exit\n";

		cin >> option;
		if (option == 1) {
			cout << "\n Please enter the id\n";
			cin >> id1;
			while (id1 <= 0) {
				cout << "ID must be positive\n";
				cin >> id1;
			}
			grading.setid(id1);
			cout << "\n Please enter the student name\n";
			cin >> student_name1;
			cout << "\n Please enter the math results\n";
			cin >> math1;
			while (math1 < 0 || math1>100) {
				cout << "Be sure that your result between 0-100\n";
					cin >> math1;
			}
			cout << "\n Please enter the english results\n";
			cin >> english1;
			while (english1 < 0 || english1>100) {
				cout << "Be sure that your result between 0-100\n";
				cin >> english1;
			}
			cout << "\n Please enter the science-related results\n";
			cin >> science1;
			while (science1 < 0 || science1>100) {
				cout << "Be sure that your result between 0-100\n";
				cin >> science1;
			}
			
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
		}if (option == 3){
				cout << "BYE";

				break;
			}
			}
	system("pause");

}