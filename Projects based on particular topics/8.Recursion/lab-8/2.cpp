#include<iostream>
using namespace std;
double add(double x) {
	if (x != 0)
		return (x + add(x - 1));
	else 
		return x;
	
}
int main()
{
	int x;
	cout << "give the number of the terms :";
	cin >> x;
	cout << add(x)<<endl;
	system("pause");

}
/*
Name:Fayoz Naimov
ID:u1910071*/