#include<iostream>
using namespace std;
int main2(){
	int year;
	cout << "Input the year\n";
	cin >> year;
	if (year <= 0)
	{
		cout << "invalid year\n";
	}
	if (year % 4 == 0)
	{
		cout << "THIS YEAR IS LEAP YEAR\n";
	}
	else {
		cout << "THIS YEAR IS NOT LEAP YEAR\n";
	}
	system("pause");
	return 0;
}
/*
NEME:FAYYOZ NAIMOV
UID:U1910071
Lab Assignment -3
to find that entered year is leap year or not.
*/
