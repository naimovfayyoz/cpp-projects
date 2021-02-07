#include<iostream>
using namespace std;
void display(){
	double a[50];
	int n;
	cout << "Input array element :";
	cin >> n;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		cout << "a[" << i << "] is:" << a[i] << endl;
	}

}
int main(){
	display();
	system("pause");
}
/*Name:Fayyoz Naimov
ID:U1910071*/