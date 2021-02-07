/*
Name:Fayyoz Naimov
UID:U1910071
*/
#include<iostream>
using namespace std;
void biggest(double a, double b, double c){
		if (a > b && a > c)
		cout << "The largest number is:      " << a;
	if (c>b&&c>a)
		cout << "The largest number is:      " << c;
	if (b>a&&b>c)
		cout << "The largest number is:      " << b;
	if (a == b && b == c )
		cout << "they are equal ";
	if (a==b&&b>c)
		cout <<"The largest number is:      "<< a;
	if (b==c&&c> a)
		cout <<"The largest number is:      "<< b;
	if (a == b&&b > c)
		cout <<"The largest number is:      "<< a;

}
int biggest(int a, int b, int c){
	if (a > b && a > c)
		cout << "The largest number is:      " << a;
	if (c>b&&c>a)
		cout << "The largest number is:      " << c;
	if (b>a&&b>c)
		cout << "The largest number is:      " << b;
	if (a == b && b == c)
		cout << "they are equal";
	if (a == b&&b>c)
		cout << "The largest number is:      " << a;
	if (b == c&&c> a)
		cout << "The largest number is:      " << b;
	if (a == b&&b > c)
		cout << "The largest number is:      " << a;

	return a, b, c;
}
int main()
{
	double a, b, c;
	cout << "Give the 3  values\n";
	cin >> a >> b >> c;
	biggest(a,b,c);
	cout << endl;
	system("pause");
}