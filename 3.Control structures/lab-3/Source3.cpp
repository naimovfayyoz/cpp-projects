#include<iostream>
using namespace std;
int main4(){
	int a;
	cout << "Input the number\n";
	cin >> a;
	if (a < 0)
	{
		cout << "Please,input the number from 1 to infinity\n";
	}
	
	
	if (a % 2 == 1){
		cout << "The given number is ODD number\n";
	}
	else {
		cout << "The given number is EVEN number\n";
	}
	system("pause");
	return 0;
}/*
NEME:FAYYOZ NAIMOV
UID:U1910071
Lab Assignment -3
to find whether given no is even or odd.
*/