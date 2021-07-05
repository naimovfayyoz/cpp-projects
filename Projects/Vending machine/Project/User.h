#pragma once
#include"Base.h"
#include"Owner.h"
#include<iostream>
using namespace std;


class User :public VendingMachine//inherited class from machine 
{
public:
	User()
	{
		Cash = 0;

	}
	void SetCash(int cash)
	{
		if (cash == 12345)
		{
			Owners_menu();
		}
		else if (cash == 500 || cash == 1000 || cash == 5000 || cash == 10000 || cash == 100000 || cash == 50000)//excistant uzbek sum
		{
			this->Cash += cash;//in order to have opportunity to add money
		}
		else
			cout << "Please give a valid money\n";
	}
	int GetCash()
	{

		return Cash;
	}
	int Purchase(VendingMachine* vending_machine)
	{
		Cash = (this->Cash) - (vending_machine->Cost);
		vending_machine->Quantity = vending_machine->Quantity - 1;//logically quantity should be -1!
		return Cash;
	}
	int GetRemainder()//if user got product and has a remainder
	{
		cout << "Your Remainded money:" << Cash << endl << "===========================================\n\n\n\n";

		return Cash;
	}
	int Leave()//if user finished shopping
	{
		RemainedMoney = Cash;
		return RemainedMoney;
	}

private:
	int Cash;
};
User user;
void Pay()//the process of giving money
{
	int quantity, cash;
	string next = "asdasd";
	while (next != "OK")
	{
		cout << "Insert money: (the vending machine only accepts 500, 1000, 5000, 10000, 50000 and 100000)  \n";
		cin >> cash;
		if (cash == 12345 || cash == 500 || cash == 1000 || cash == 5000 || cash == 10000 || cash == 100000 || cash == 50000)
		{
			user.SetCash(cash);
			cout << "Do you want add money or go next?\n"
				<< "Press anything to add money\n"
				<< "Ok) Go next\n";
			cin >> next;
			if (next == "OK" || next == "ok" || next == "Ok")
				next = "OK";
		}


		else
			cout << "Please give the correct money!\n";

	}
}
void AnotherUser()//if coming another user it will be called
{
	cout << "Welcome, a new user!\n";
	User user1;
	user1.Leave();

}