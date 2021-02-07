#include<iostream>
using namespace std;
float fact(float a){
	float c = 1;

	for (int b = 0; b < a; b++){
		c *= a - b;
	}return c;


}
float main(){
	float power, b, result = 0;
	cout << "Give the number of the seria\n";
	cin >> b;
	for (int i = 1; i <= b; i++){
		power = pow(i, i);
		result += power / fact(i);
	}cout << "Here the sum of the given seria\n" << result << endl;

	system("pause");

}
/*
Name:Naimov Fayyoz
ID:U1910071
Assignment-6*/