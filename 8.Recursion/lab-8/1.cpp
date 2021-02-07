#include<iostream>
using namespace std;
double add(double x) {
	if (x != 0)
		return(x + add(x - 1));
	else
		return 0;

}
int main() {
	add(9);
}
	
	/*Name:Fayyoz Naimov
 ID:U1910071*/