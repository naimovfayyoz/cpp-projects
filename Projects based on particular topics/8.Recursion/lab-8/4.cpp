#include<iostream>
using namespace std;
double GCD(int x, int y)
{
	if (y !=0) 
	return (GCD(y, x%y));
	

	else 
	return x;
}
int main() {
	int x, y;
	cout << "input the 2 numbers \n";
	cin >> x >> y;
	cout<<GCD(x,y);
	system("pause");
	return 0;
}
/*
Name:Fayoz Naimov
ID:U1910071*/
