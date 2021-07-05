#pragma once
#include<iostream>
using namespace std;
class VendingMachine//base class
{
public:
	int Quantity;
	string Name;
	int Cost;
	int RemainedMoney;
	VendingMachine()	//default ctor
	{
		RemainedMoney = 0;
	}
	void Print(VendingMachine* vending_machine)
	{
		cout << "The product has been bought!\n";
		cout << vending_machine->Name << "\t\tcost:" << vending_machine->Cost << endl;
	}


};
class Snacks : public VendingMachine//inherited class
{
public:
	Snacks(string Name, int Cost)//parametrized ctor
	{
		this->Quantity = 50;
		this->Name = Name;
		this->Cost = Cost;
	}
	void Print()
	{
		cout << Name << "'s cost:" << Cost << "\t\t\t\t\t\t\t\t quantity:" << Quantity << endl;
	}
private:
	int GetQuantity() { return Quantity; }
	string GetName() { return Name; }
	int GetCost() { return Cost; }
};
//global Objects
Snacks Fanta("Fanta", 4000);
Snacks	Pepsi("Pepsi", 4000);
Snacks Sprite("Sprite", 4000);
Snacks	Bounty("Bounty", 4500);
Snacks Snickers("Snickers", 3500);
Snacks Amilov("Amilov", 6500);
Snacks RedBull("RedBull", 11000);
Snacks	Flash("Flash", 5000);
Snacks Mentos("Mentos", 12000);
Snacks Crafers("Crafers", 5500);
Snacks Oreo("Oreo", 7500);
Snacks Skittles("Skittles", 3500);
Snacks Orbit("Orbit", 4000);
Snacks Five("Five", 7000);
Snacks Carambas("Carambas", 4000);
Snacks Lays("Lays", 5000);
Snacks Pringles("Pringles", 10500);
VendingMachine machine;


void SnacksData()//shows Snacks-related data!
{

	cout << "1)"; Bounty.Print();
	cout << "2)"; Snickers.Print();
	cout << "3)"; Amilov.Print();
	cout << "4)"; Mentos.Print();
	cout << "5)"; Crafers.Print();
	cout << "6)"; Oreo.Print();
	cout << "7)"; Skittles.Print();
	cout << "8)"; Orbit.Print();
	cout << "9)"; Five.Print();
	cout << "10)"; Carambas.Print();
	cout << "11)"; Lays.Print();
	cout << "12)"; Pringles.Print();

}
void DrinksData()//shows Drinks - related data!
{
	cout << "1)"; Fanta.Print();
	cout << "2)"; Pepsi.Print();
	cout << "3)"; Sprite.Print();
	cout << "4)"; RedBull.Print();
	cout << "5)"; Flash.Print();
}