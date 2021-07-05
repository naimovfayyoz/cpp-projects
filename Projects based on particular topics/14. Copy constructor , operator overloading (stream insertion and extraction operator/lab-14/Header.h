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
	float english, math, science, total;
public:
	student() {
		id = 0;
		student_name = "NONE";
		english = 0;
		math = 0;
		science = 0;
		total = 0;
	}

	student(student &grading2){
		this->id = grading2.id;
		this->student_name = grading2.student_name;
		this->english = grading2.english;
		this->math = grading2.math;
		this->science = grading2.science;
		this->total = grading2.total;
	}
	friend istream& operator>>(istream&, student &);
	friend ostream& operator<<(ostream&, student &);
	~student() {
		cout << "BYE";
	}
	void getTotal(){
		total = english + math + science;
		cout << "the total is:" << total << endl;
	}
};
istream & operator >>(istream &input, student &grading2)
{
	cout << "\n please enter the name:\n";
	input >> grading2.student_name;
cout << "\n please enter the id:\n";
	input >> grading2.id;
		cout << "\n please enter the english:\n";
	input >> grading2.english;
	cout << "\n please enter the math:\n";
	input >> grading2.math;
	cout << "\n please enter the science:\n";
	input >> grading2.science;
	return input;
}
ostream & operator <<(ostream &output, student &grading2){
	output << "name is:" << grading2.student_name<<endl;
	output << "id is:" << grading2.id << endl;
	output << "english is:" << grading2.english << endl;
	output << "math is:" << grading2.math << endl;
	output << "science is:" << grading2.science << endl;
	
	return output;

}
/*Name:Fayyoz Naimov
ID:U1910071*/