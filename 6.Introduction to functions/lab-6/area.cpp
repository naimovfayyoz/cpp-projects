#include<iostream>
using namespace std;
float area(){
	float area1, r;
	const float p = 3.14;
	cout << "Give the value for Radius\n";
	cin >> r;
	return area1 = pow(r, 2)*p;
}
int main(){
	float n;
	n = area();
	cout << "The area of the circle is\t" << n << endl;
	system("pause");
	return 0;
}
/*
Id:u1910071
Name:Naimov Fayyoz
Find the are of the circle*/