/*Name:Fayyoz Naimov
ID:U1910071
ASSIGNMENT: 4
6.	Program to display series and find sum of 1+3+5+……..+n*/
#include<iostream>
using namespace std;
int main() {
	int a = 1, sum = 0, n;
	cin >> n;
	sum = (a + a + (n - 1) * 2) / 2 * n ;


	cout << sum << endl;
}