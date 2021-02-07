/*Name:Fayyoz Naimov
ID:U1910071
ASSIGNMENT: 4
7.	Program to use switch statement. Display Monday to Sunday.*/
#include<iostream>
using namespace std;
int main() {

	cout << "Enter the day of the week in digits from 1 to 7" << endl;

	char x;
	cin >> x;




	switch (x) {



	case '1': cout << "Monday\n"; break;
	case '2': cout << "Tuesday\n"; break;
	case '3': cout << "Wednesday\n"; break;
	case '4': cout << "Thursday\n"; break;
	case '5': cout << "Friday\n"; break;
	case '6': cout << "Saturday\n"; break;
	case '7': cout << "Sunday\n";  break;
	}
	if (x > 7) {
		cout << "Error\n";
	}
	system("pause");
	return 0;
}
