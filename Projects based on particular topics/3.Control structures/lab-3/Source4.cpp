#include<iostream>
using namespace std;
int main(){
	int a, b;
	cout << "give the value for a\n";
	cin >> a;
	cout << "a=" << a << endl;
	cout << "give the value for b\n";
	cin >> b;
	cout << "b=" << b << endl;
	a = a*b;
	b = a / b;
	a = a / b;
	cout << "swaped a=" << a << endl;
	cout << "swaped b="<<b<<endl;
	system("pause");
	return 0;
}
/*
NEME:FAYYOZ NAIMOV
UID:U1910071
Lab Assignment -3
to show swap of two no’s without using third variable.
*/