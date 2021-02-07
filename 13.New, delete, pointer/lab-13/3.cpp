//fayyoz Naimov
//id : u1910071


#include<iostream>
#include<string>
#include"Fullname.h"
#include"Player.h"
using namespace std;
int res;
void Increase_GoalsScored() {
	do {
		cout << "Enter The Value You want to increase into: ";
		cin >> res;
	} while (!res / 1);


}

int main() {

	Player* player;
	player = new Player;
	int i = 1, option1, result;
	
	while(i!=0){
		cout << "1.Add Player Details\t" ;
		cout << "2.Display Player Details\t";
		cout << "3.Increase Player Goals\t";
		cout << "4.Delete Player From Memory\t";
		cout << "5.exit\n"
			cin >> option1;
		if (option1 == 1) {
			string firstname, middlename, lastname, id;
			int matchespalyed, goalsscored;
			cout << "Students'  name:";
			cin >> firstname;
			cout << "Students's middle name: ";
			cin >> middlename;
			cout << "Students' last name: ";
			cin >> lastname;
			player->setPlayer_Name(firstname, middlename, lastname);
			cout << "Input the ID: ";
			cin >> id;
			player->setPlayer_ID(id);
			cout << "How many matches played: ";
			cin >> matchespalyed;
			if (matchespalyed < 0) {
				cout << "Be sure that u r inputing the correct one\n";
				cin >> matchespalyed;
			}
			player->setMatches_Played(matchespalyed);
			cout << "how many goals have been scored?\n";
			cin >> goalsscored;
			if (goalsscored < 0) {
				cout << "Be sure that u r inputing the correct one\n";
				cin >> goalsscored;
			}
			player->setGoals_Scored(goalsscored);
		}
		if (option1 == 2) {
			cout << "The given ID:" << player->getPlayer_ID() << endl;
			cout << "The given Scored goals:" << player->getGoals_Scored() << endl;
			cout << "The given Played game:" << player->getMatches_Played() << endl;
			player->getPlayer_Name();
		}

		if (option1 == 3) {
			Increase_GoalsScored();
			res = res + player->getGoals_Scored();
			player->setGoals_Scored(res);
		}
		if (option1 == 4) {
			delete player;
		}
		if (option1 == 5)
			cout << "Bye\n";

		
	}

	system("pause");
	return 0;
	

}