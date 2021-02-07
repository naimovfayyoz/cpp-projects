#include<iostream>
#include<cmath>
using namespace std;
const float PI = 3.1415;
void area()
{
	double radius;
	cout << "INPUT THE radious\n";
	cin >> radius;
	cout << "THE circumference OF THE GIVEN Circle is   " << 2*radius*PI;
	//return pow(radius, 2)*PI;
}
double area(double a, double b)
{
	cout << "INPUT THE 2 sides of the rectangular\n";
	cin >> a >> b;
	return (a+b)*2;

}
double area(double side1, double side2, double angle){
	cout << "Input the first side of the triangle\n";
	cin >> side1;
	cout << "Input the second side of the triangle\n";
	cin >> side2;
	cout << "Input the third side of the triangle\n";
	cin >> angle;
	return side1+side2+angle;

}
int area(int side){

	cout << "INPUT THE side of the square\n";
	cin >> side;

	return 4*side;
}
int main(){





	cout << "THE PERIMETER OF THE GIVEN Rectangular is   " << area(1.2, 2.3) << endl;
	cout << "THE PERIMETER OF THE GIVEN Triangle is  " << area(1.1, 2.5, 3.8) << endl;
	cout << "THE PERIMETER OF THE GIVEN SQUARE IS" << area(4) << endl;
	area(); cout << endl;
	cout <<
		system("pause");
}
/*
Name:Fayyoz Naimov
UID:U1910071
*/