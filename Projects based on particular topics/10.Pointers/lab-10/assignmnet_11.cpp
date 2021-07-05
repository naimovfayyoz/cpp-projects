#include <iostream>
using namespace std;

int main()
{
	int choose;
	cout << "1.Calculate the average of the given numbers\n"
		<< "2.Calculating the area of the triangle\n"
		<< "3.Swapping\n"
		<< "4.Smallest number of the array\n"
		<< "5.Checking\n";
	cin >> choose;
	system("cls");
	if (choose == 1){
		int a[50];
		int *ptr;
		ptr = a;
		int b;

		cout << "Input the quantity of the numbers\n";
		cin >> b;

		for (int i = 0; i < b; i++) {
			cout << "a[" << i << "] = ";
			cin >> *ptr;
			ptr++;
		}
		int sum = 0;
		int *c = a;
		for (int i = 0; i < b; i++) {
			sum += *c;
			c++;
		}
		cout << "The average of the given numbers is  " << sum << endl;
	}
	if (choose == 2){
		float *a, *b, *c, p, area, side1, side2, side3;
		a = &side1;
		b = &side2;
		c = &side3;
		cout << "Input 3 side of triangle\n";
		cin >> side1 >> side2 >> side3;
		p = (*a + *b + *c) / 2;
		area = sqrt(p*(p - *a)*(p - *b)*(p - *c));
		cout << "the of the triangle is:" << area << endl;



	}
	if (choose == 3){
		float *ptr1, *ptr, a, b;
		ptr = &a;
		ptr1 = &b;
		cin >> a >> b;
		a = a*b;
		b = a / b;
		a = a / b;
		cout << a << endl << b << endl;
	}
	if (choose == 4){
		int a[50];
		int *ptr;
		ptr = a;
		int n;

		cout << "Input the quantity of the numbers\n ";
		cin >> n;

		for (int i = 0; i < n; i++) {
			cout << "a[" << i << "] = ";
			cin >> *ptr;
			ptr++;
		}
		int *ptr1 = a;
		int pos = 0;
		int b = *ptr1;
		for (int i = 0; i < n; i++) {
			if (*ptr1 < b) {
				b = *ptr1;
				pos = i;
			}
			ptr1++;
		}
		cout << "The Smallest number: " << b<<endl;
		cout << "It's index: " << pos << endl;
		cout << "It's position in array: " << pos + 1 << endl;;
	}
	if (choose == 5){
		int a;
		cout << "Give your number: ";
		cin >> a;
		int *ptr;
		ptr = &a;

		if (*ptr > 0) {
			cout << "The given number is positive)\n";
		}
		else if (*ptr == 0) {
			cout << "The given  number is equal to 0--\n";
		}
		else if (*ptr < 0) {
			cout << "The given  number is negative(\n";
		}
	}
	system("pause");
}
/*
Name:Fayyoz NAimov
UID:U1910071*/