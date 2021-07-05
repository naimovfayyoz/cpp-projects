/*Name:Fayyoz Naimov
ID:U1910071
ASSIGNMENT: 5
5. Write a program to add first seven terms of the following series using for loop:
1/!1+ 2/!2 + 3/!3 + ………………….
*/
#include<iostream>
using namespace std;
int main() {
	float a = 1, b = 1,sum=0,c;
	

	for (; a <= 7; a++) {
		for (; b <= 7; b++)
		{
			c = a / (a * b);
			sum = c + sum;

			cout << sum << endl;
		}
		
	}cout <<"The sum of serios "<< sum << endl;
	system("pause");
	return 0;
}