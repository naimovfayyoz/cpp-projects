#include<iostream>
#include<cstring>
#include<string>
#include<iomanip>
using namespace std;
class myString
{
private:
	int size;
	char *str;
public:


	myString(int mySize)
	{
		size = (mySize > 0 ? mySize : 10);
		str = new char[size];

		for (int i = 0; i < size; i++)
			str[i] = 0;
	}

	myString(const myString& StringToCopy) : size(StringToCopy.size)
	{
		str = new char[size];

		for (int i = 0; i < size; i++)
			str[i] = StringToCopy.str[i];
	}

	~myString()
	{
		delete[] str;
	}

	int getSize() const
	{
		return size;
	}

	friend istream& operator >> (istream&input, myString&string1)
	{
		for (int i = 0; i < string1.size; i++)
			input >> string1.str[i];
		return input;
	}

	friend ostream& operator << (ostream& output, const myString&m1)
	{

		for (int i = 0; i < m1.size; i++)
			output << m1.str[i];
		return output;
	}

	
	bool operator !=(const myString& right) const
	{
		return !(*this == right);
	}

	bool operator ==(const myString& right) const
	{
		if (size != right.size)
			return false;

		for (int i = 0; i < size; i++)
		if (str[i] != right.str[i])
			return false;
		return true;
	}

	bool operator >(const myString& right) const
	{
		if (size > right.size)
			return true;
		return false;
	}

	bool operator <(const myString& right) const
	{
		if (size < right.size)
			return false;
		return true;
	}
};


using namespace std;
int main()
{
	myString string1(5);
	myString string2(4);
	cout << "Size of first string is " << string1.getSize() << endl;
	cout << "Size of second string is " << string2.getSize() << endl << endl;
	cout << "Enter the 2 strings: " << endl;
	cin >> string1 >> string2;
	cout << endl;
	cout << "After input, the strings: " << string1 << " and " << string2 << endl << endl;

	cout << "Evaluating  strings: " << endl;
	if (string1 != string2)
		cout << string1 << " and " << string2 << " are not equal" << endl << endl;

	cout << "Evaluating  strings: " << endl;
	if (string1 > string2)
		cout << string1 << " greater than " << string2 << endl << endl;

	cout << "Evaluating  strings: " << endl;
	if (string1 < string2)
		cout << string2 << " is less than " << string1 << endl << endl;


	myString string3(string1);
	cout << "Size of third string is: " << string3.getSize() << endl << endl;

	cout << "Evaluating  strings:" << endl;
	if (string3 == string1)
		cout << string3 << " and " << string1 << " are equal" << endl << endl;



	system("pause");
	return 0;
}
/*Name:Fayyoz Naimov
 UID:u1910071*/