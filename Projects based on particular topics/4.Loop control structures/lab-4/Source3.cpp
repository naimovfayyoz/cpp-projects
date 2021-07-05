/*Name:Fayyoz Naimov
ID:U1910071
ASSIGNMENT: 4
4.	Program to find whether given number is a prime number or not
*/
#include<iostream>
using namespace std;
int main4() {


	int a, b;
	cout << "Please, give the number that u want to check prime it or\n " << endl;
	cin >> a;
	b = a % 2;
	if (b == 0 && a != 2) {
		cout << "The given number is not the prime" << endl;
	}
	else {
		cout << "The given number is prime " << endl;
	}
}