#include<iostream>
using namespace std;
int main(){
	int a[20];
	int n;
	cout << "Input number of elements in array:";
	cin >> n;
	cout << "Input array element\n";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

	}
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=" << a[i] << endl;
	}
	int pos;
	cout << "Input position from which ypu want to insert:";
	cin >> pos;
	n = n + 1;
	for (int i = pos; i < n; i--)
	{
		a[i+1] = a[i];
	}
	int value;
	cout << "Input the value that u want to insert:";
	cin >> value;
	a[pos] = val;
	for (int i = 0; i < n;i++){

		cout << "a[" << i << "]=" << a[i] << endl;
	}
	system("pause");

}

/*Name:Fayyoz Naimov
ID:u1910071*/