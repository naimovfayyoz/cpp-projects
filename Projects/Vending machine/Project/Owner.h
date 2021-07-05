#pragma once
#include<iostream>
#include"Base.h"
using namespace std;




class Owner :public VendingMachine//inherited class from machine
{
public:

	void SetNewCost(VendingMachine* vending_machine, int NewCost)//set new cost
	{
		if (NewCost > 500 && NewCost < 100000)
		{
			vending_machine->Cost = NewCost;
			cout << "The price Successfully has been changed!\n" << vending_machine->Name << "'s NewCost:" << vending_machine->Cost << endl;
		}
		else//the cost should be logic
		{
			vending_machine->Cost = vending_machine->Cost;
			cout << "The price has not changed.  Think logically and set the money again!\n";
		}

	}
	void SetNewQuantity(VendingMachine* vending_machine, int NewQuantity)
	{
		if (NewQuantity > 0 && NewQuantity < 50)//50 is a max
		{
			vending_machine->Quantity = NewQuantity;
			cout << "The Quantity Successfully has been changed!\n" << vending_machine->Name << "'s NewQuantity:" << vending_machine->Quantity << endl;
		}
		else
			cout << "The maxixum quantity is 50!\n";
	}

};

void Owners_menu()//Owners menu to set quantity or cost
{
	int change;
	Owner owner;//object to change quantity and cost
	int i(0);//for while cycle
	cout << "Welcome,Boss\n";
	int a;
	while (i != 1)
	{
		cout << "1)Drinks\n"
			<< "2)Snacks\n"
			<< "3)exit\n";
		cin >> a;
		if (a == 1)
		{
			cout << "1)Change Quantity\n"
				<< "2)Change Cost\n";

			cin >> change;
			if (change == 1)
			{
				int ChangeQuantity;
				int change;//local
				DrinksData();
				cout << "=====================================================\n\n";
				cout << "what you want to change?\n";
				cin >> change;
				if (change == 1)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Fanta, ChangeQuantity);
				}
				else if (change == 2)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Pepsi, ChangeQuantity);
				}
				else if (change == 3)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Sprite, ChangeQuantity);
				}
				else if (change == 4)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&RedBull, ChangeQuantity);
				}
				else if (change == 5)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Flash, ChangeQuantity);
				}
				else if ((change / 1) == false)
				{
					cout << "Only numbers are allowed!\n";
					break;

				}
				else
					cout << "Boss, please, INPUT THE CORRECT NUMBER\n";

				DrinksData();
			}


			if (change == 2)
			{
				int ChangeCost;
				int change;
				DrinksData();
				cout << "=====================================================\n\n";
				cout << "what you want to change?\n";
				cin >> change;
				if (change == 1)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Fanta, ChangeCost);
				}
				else if (change == 2)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Pepsi, ChangeCost);
				}
				else if (change == 3)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Sprite, ChangeCost);
				}
				else if (change == 4)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&RedBull, ChangeCost);
				}
				else if (change == 5)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Flash, ChangeCost);
				}
				else if ((change / 1) == false)
				{
					cout << "Only numbers are allowed!\n";
					break;

				}
				else
					cout << "Boss, please, INPUT THE CORRECT NUMBER\n";
				DrinksData();
			}
		}


		else if (a == 2)
		{
			cout << "1)Change Quantity\n"
				<< "2)Change Cost\n";
			cin >> change;

			if (change == 1)
			{
				int ChangeQuantity;
				int change;//local
				SnacksData();
				cout << "=====================================================\n\n";
				cout << "what you want to change?\n";
				cin >> change;

				if (change == 1)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Bounty, ChangeQuantity);
				}
				if (change == 2)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Snickers, ChangeQuantity);
				}
				if (change == 3)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Amilov, ChangeQuantity);
				}

				if (change == 4)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Mentos, ChangeQuantity);
				}
				if (change == 5)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Crafers, ChangeQuantity);
				}
				if (change == 6)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Oreo, ChangeQuantity);
				}
				if (change == 7)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Skittles, ChangeQuantity);
				}
				if (change == 8)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Orbit, ChangeQuantity);
				}
				if (change == 9)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Five, ChangeQuantity);
				}
				if (change == 10)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Carambas, ChangeQuantity);
				}
				if (change == 11)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Lays, ChangeQuantity);
				}
				if (change == 12)
				{
					cout << "Input the NEW Quantity:";
					cin >> ChangeQuantity;
					owner.SetNewQuantity(&Pringles, ChangeQuantity);
				}
				else if ((change / 1) == false)
				{
					cout << "Only numbers are allowed!\n";
					break;

				}
				else
					cout << "Boss, please, INPUT THE CORRECT NUMBER\n";
			}
			if (change == 2)
			{
				int ChangeCost;
				int change;
				SnacksData();
				cout << "=====================================================\n\n";
				cout << "what you want to change?\n";
				cin >> change;

				if (change == 1)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Bounty, ChangeCost);
				}
				if (change == 2)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Snickers, ChangeCost);
				}
				if (change == 3)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Amilov, ChangeCost);
				}

				if (change == 4)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Mentos, ChangeCost);
				}
				if (change == 5)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Crafers, ChangeCost);
				}
				if (change == 6)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Oreo, ChangeCost);
				}
				if (change == 7)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Skittles, ChangeCost);
				}
				if (change == 8)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Orbit, ChangeCost);
				}
				if (change == 9)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Five, ChangeCost);
				}
				if (change == 10)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Carambas, ChangeCost);
				}
				if (change == 11)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Lays, ChangeCost);
				}
				if (change == 12)
				{
					cout << "Input the NEW cost:";
					cin >> ChangeCost;
					owner.SetNewCost(&Pringles, ChangeCost);
				}

				else if ((change / 1) == false)
				{
					cout << "Only numbers are allowed!\n";
					break;

				}
				else
					cout << "Boss, please, INPUT THE CORRECT NUMBER\n";
			}
			SnacksData();
		}
		else if (a == 3)
		{
			i = 1;
		}
		else
		{
			cout << "please give correct number!\n";
		}


	}
}
