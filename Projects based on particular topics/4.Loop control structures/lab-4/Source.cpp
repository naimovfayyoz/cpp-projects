/*Name:Fayyoz Naimov
ID:U1910071
ASSIGNMENT: 4
1.	Program to calculate sum of numbers from m to n.*/
#include<iostream>
using namespace std;
int main1() {
	int a, b, sum = 0;
	cout << "Please, input the numbers\n";
	cin >> a >> b;
	if (a > b)
	{
		cout << "eroor,please make sure that first number is bigger then second\n";
	}
	while (a <= b) {

		sum = sum + a;
		++a;
	}

	if (a > b) {
		cout << "Here is your sum of the given numbers " << sum << endl;
	}

	system("pause");
	return 0;

}