#include<iostream>
using namespace std;
int main() {
	for (int a = 1; a <= 3; a++) {
		for (int b = a; b < 3; b++) {
			cout << " ";
		}
			for (int c = 1; c <= (2 * a - 1); c++)
			{
				cout << "*";
			}cout << endl;
		}
		
	  system("pause");
		return 0;
}