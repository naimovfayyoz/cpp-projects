/*
Name:Fayyoz Naimov
UID:U1910071
*/
#include<iostream>
using namespace std;
template<typyname OOP>
void biggest(OOP a, OOP b, OOP c){
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
int biggest(OOP a, OOP b, OOP c){
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