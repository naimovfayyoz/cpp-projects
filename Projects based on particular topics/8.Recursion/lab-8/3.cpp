#include<iostream>
using namespace std;
double fibonaci(double x) {
	if (x <= 1)
		return x;
	else
		return(fibonaci(x - 1) + fibonaci(x - 2));

}
int main() {
	int x;
	cout << "input the number   of terms of  the fibonaci seria : ";
	cin >> x;
	for (int y = 0; x > y; y++) {
cout << fibonaci(y)<<endl;
	}
	

	system("pause");

}

/*Name:Fayyoz Naimov
ID:U1910071*/