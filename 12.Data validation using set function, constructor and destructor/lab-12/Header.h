#pragma once
/*Name:Fayyoz Naimov
ID:u1910071*/
#include<iostream>
#include<string>
using namespace std;

class student
{
	
private:
	int id;
	string student_name;
	float english , math, science, total;
public:
	student() {
				id = 0;
				student_name = "NONE";
				english = 0;
				math = 0;
				science = 0;
				total = 0;
	}
	~student() {
		cout << "BYE";
	}
	//student(int id = 0, string student_name = "NONE", float english = 0, float math = 0, float science = 0);
	int getid() { return id; }
	void setid(int id1) { id = id1; }
	string getstudent_name() { return student_name; }
	void setstudent_name(string student_name1) { student_name = student_name1; }
	float getenglish() { return english; }
	void setenglish(float english1) { english = english1; }
	float getmath() { return math; }
	void setmath(float math1) { math = math1; }
	float getscience() { return science; }
	void setscience(float science1) { science = science1; }
	
};