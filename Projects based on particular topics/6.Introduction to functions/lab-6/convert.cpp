#include<iostream>
using namespace std;
float convert(){
	float a, b, c, d;
	cout << "Give the hour\n";
	cin >> a;
	cout << "Give the minutes\n";
	cin >> b;
	cout << "Give the seconds\n";
	cin >> c;
	d = a * 60 + b + c / 60;
	cout << "The sum of the given of minutes is\t";
	return d;
}
int main(){
	int f;
	f = convert();
	cout << f << endl;
	system("pause");
}
		/*
Id:u1910071
Name:Naimov Fayyoz
Find the are of the circle*/