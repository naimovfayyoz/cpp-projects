/*Name:Fayyoz Naimov
ID:U1910071
ASSIGNMENT: 4
8.	Program to display arithmetic operator using switch case
*/
#include<iostream>
using namespace std;
int main() {


	int a, b;
	cout << "Input the first number\n";
	cin >> a;
	cout << "Input the operation you want to operate\n";
	char x;
	cin >> x;
	cout << "Input the second number\n";
	cin >> b;
	switch (x) {
	case '/': cout << a / b << endl; break;
	case '*': cout << b * a << endl; break;
	case '+': cout << a + b << endl; break;
	case '-': cout << a - b << endl; break;


	}
}