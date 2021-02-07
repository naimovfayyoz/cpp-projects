#include "Header.h"
int main() {
	student grading;
	int  i = 1,option;
	student grading2;
	while (i != 2) {


		cout << "\t\t\t\t1)Inputing\n"
			"\t\t\t\t2)Displaying\n"
			"\t\t\t\t3)Exit\n";

		cin >> option;
		if (option == 1) {
			
			cin >> grading2;
		}
		if (option == 2) {
			cout << grading2;
			grading2.getTotal();
		}if (option == 3){
			cout << "BYE\n";
	
			break;
		}
	}
	system("pause");

}
/*Name:Fayyoz Naimov
ID:U1910071*/