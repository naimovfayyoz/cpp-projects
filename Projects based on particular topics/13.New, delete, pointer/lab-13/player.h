#pragma once
#include<iostream>
#include"fullname.h"
#include<string>
using namespace std;


class Player {
private:
	string Player_ID;
	FullName Player_Name;
	int Matches_Played, Goals_Scored;
public:
	Player() {
		Matches_Played = 0;
		Goals_Scored = 0;
	}
	~Player() {
			cout << "bye";
		}
	void setPlayer_ID(string playerid) { Player_ID = playerid; }
	const string getPlayer_ID() { return Player_ID; }
	void setMatches_Played(int matchesplayed) { Matches_Played = matchesplayed; }
	 int getMatches_Played() {return Matches_Played;}
	void static setGoals_Scored(int goalsscored) { Goals_Scored = goalsscored; }
	int static getGoals_Scored() { return Goals_Scored; }
	void setPlayer_Name(string firstname, string middlename, string lastname) {
		Player_Name.setFirstName(firstname);
		Player_Name.setLastName(lastname);
		Player_Name.setMiddleName(middlename);
	}
	void getPlayer_Name()
	{
		cout << "First Name: " << Player_Name.getFirstName()  << endl;
		cout << "Middle Name: " << Player_Name.getMiddleName() << endl;
		cout << "Last Name: " << Player_Name.getLastName() << endl;
	}
	
	friend void static Increase_GoalsScored(void);

	

};