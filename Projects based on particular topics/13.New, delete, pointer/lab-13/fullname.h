#pragma once
#include<iostream>
#include<string>
using namespace std;
class FullName {
private:
	string FirstName, MiddleName, LastName;
public:
	FullName() {
		FirstName = "None";
		MiddleName = "None";
		LastName = "None";
	}
	~FullName() {
		cout << "bye";
	}
	void setFirstName(string firstname) { FirstName = firstname; }
	 string getFirstName() { return FirstName; }
	void setMiddleName(string middlename) { MiddleName = middlename; }
	 string getMiddleName() { return MiddleName; }
	void setLastName(string lastname) { LastName = lastname; }
	 string getLastName() { return LastName; }
};