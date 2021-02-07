#include<iostream>
using namespace std;
void change(){
	int a, b;
	cout << "Enter the value of the two variables\n";
	cin >> a >> b;
	a = a*b;
	b = a / b;
	a = a / b;
	cout << a << endl << b << endl;

}
int main(){
	change();
	system("pause");
	return 0;
}
/*
Id:u1910071
Name:Naimov Fayyoz
Find the are of the circle*/