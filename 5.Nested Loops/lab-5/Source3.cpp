/*Name:Fayyoz Naimov
  IUD:U1910071
  Assignment:5
*
**
***
****
*****
*****
****
***
**
*/
#include<iostream>
using namespace std;
int main() {
	for (int a = 1; a <= 5; a++) {
		for (int b = 1; b <= a; b++)
		{
			cout << "*";
		}cout << endl;
	}
	for (int a = 1; a <= 5; a++) {
		for (int b = 5; b >= a; b--)
		{
			cout << "*";
		}cout << endl;
	}cout << endl;
	system("pause");
	return 0;
}