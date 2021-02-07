/*Name:Fayyoz Naimov
ID:U1910071
ASSIGNMENT: 4
5.Program to display sum of series 1+1/2+1/3+……….+1/n. .*/
#include <iostream>
using namespace std;
int main5() {
	float a, sum = 0;
	cout << "Enter the number of series" << endl;
	cin >> a;
		
	for (float i = 1; i <= a; i++) {
		sum = sum + (1 / i);
	}
	cout << sum << endl;
}