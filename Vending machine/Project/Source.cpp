
#include<iostream>
#include<string>
#include"Base.h"
#include"Owner.h"
#include"User.h"
int main()
{
	int i(1);//for while cycle
	int choose;
	string add;
	cout << "\t\t\t\tWelcome to the IUT Vending Machine!!\n"

		<< "\n\n";
	while (i != 0)
	{
		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t Your cash:" << user.GetCash() << endl;
		cout << "what kinf of product you want to purchase?\n"
			<< "1) Drinks\n"
			<< "2) Snacks\n"
			<< "3)To leave\n";
		cin >> choose;

		if (choose == 1)
		{
			DrinksData();//shows the cost of Drinks
			if (user.GetCash() == 0)
				Pay();//giving money
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t Your cash:" << user.GetCash() << endl;
			int choose;
			cout << "What you want to buy?\n";
			cin >> choose;
			if (choose == 1)
			{

				if (user.GetCash() >= Fanta.Cost)
				{
					user.Purchase(&Fanta);
					user.GetRemainder();
					machine.Print(&Fanta);//giving information whether shopping was successfull or not!
				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")//for adding money if user does not have so money
						Pay();
				}
			}
			else if (choose == 2)
			{

				if (user.GetCash() >= Pepsi.Cost)
				{
					user.Purchase(&Pepsi);
					user.GetRemainder(); machine.Print(&Pepsi);

				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}
			}
			else if (choose == 3)
			{

				if (user.GetCash() >= Sprite.Cost)
				{
					user.Purchase(&Sprite);
					user.GetRemainder();
					machine.Print(&Sprite);
				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}
			}
			else if (choose == 4)
			{
				if (user.GetCash() >= RedBull.Cost)
				{
					user.Purchase(&RedBull);
					user.GetRemainder();
					machine.Print(&RedBull);
				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}
			}
			else if (choose == 5)
			{

				if (user.GetCash() >= Flash.Cost)
				{
					user.Purchase(&Flash);
					user.GetRemainder();
					machine.Print(&Flash);
				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}
			}
			else
				cout << "Please press the correct number!\n";
		}

		else if (choose == 2 && (choose / 1))
		{
			SnacksData();
			if (user.GetCash() == 0)
				Pay();
			cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t Your cash:" << user.GetCash() << endl;
			int choose;
			cout << "What you want to buy?\n";
			cin >> choose;


			if (choose == 1)
			{

				if (user.GetCash() >= Bounty.Cost)
				{
					user.Purchase(&Bounty);
					user.GetRemainder();
					machine.Print(&Bounty);
				}
				else if ((choose / 1) == false)
				{
					cout << "Only numbers are allowed!\n";
					return 0;
				}
				else
				{
					cout << "You don't have enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}
			}
			else if (choose == 2)

				if (user.GetCash() >= Snickers.Cost)
				{
					user.Purchase(&Snickers);
					user.GetRemainder();
					machine.Print(&Snickers);
				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}

			else if (choose == 3)
			{

				if (user.GetCash() >= Amilov.Cost)
				{
					user.Purchase(&Amilov);
					user.GetRemainder();
					machine.Print(&Amilov);
				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}
			}

			else if (choose == 4)
			{
				if (user.GetCash() >= Mentos.Cost)
				{
					user.Purchase(&Mentos);
					user.GetRemainder();
					machine.Print(&Mentos);
				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}
			}
			else if (choose == 5)
			{

				if (user.GetCash() >= Crafers.Cost)
				{
					user.Purchase(&Crafers);
					user.GetRemainder();
					machine.Print(&Crafers);
				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}
			}
			else if (choose == 6)
			{

				if (user.GetCash() >= Oreo.Cost)
				{
					user.Purchase(&Oreo);
					user.GetRemainder();
					machine.Print(&Oreo);
				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}
			}
			else if (choose == 7)
			{

				if (user.GetCash() >= Skittles.Cost)
				{
					user.Purchase(&Skittles);
					user.GetRemainder();
					machine.Print(&Skittles);
				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}
			}
			else if (choose == 8)
			{

				if (user.GetCash() >= Orbit.Cost)
				{
					user.Purchase(&Orbit);
					user.GetRemainder();
					machine.Print(&Orbit);
				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}
			}
			else if (choose == 9)
			{

				if (user.GetCash() >= Five.Cost)
				{
					user.Purchase(&Five);
					user.GetRemainder();
					machine.Print(&Five);
				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}
			}
			else if (choose == 10)
			{

				if (user.GetCash() >= Carambas.Cost)
				{
					user.Purchase(&Carambas);
					user.GetRemainder();
					machine.Print(&Carambas);
				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}
			}
			else if (choose == 11)
			{

				if (user.GetCash() >= Lays.Cost)
				{
					user.Purchase(&Lays);
					user.GetRemainder();
					machine.Print(&Lays);
				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}
			}
			else if (choose == 12)
			{

				if (user.GetCash() >= Pringles.Cost)
				{
					user.Purchase(&Pringles);
					user.GetRemainder();
					machine.Print(&Pringles);
				}
				else
				{
					cout << "You don't have  enough money\n";
					cout << "If you want add money input A\n";
					cin >> add;
					if (add == "a" || add == "A")
						Pay();
				}

			}
			else if ((choose / 1) == false)
			{
				cout << "Only numbers are allowed!\n";
				return 0;
			}


			else
				cout << "Please press the correct number!\n";
		}
		else if (choose == 3)
		{
			int a;
			if (user.GetCash() > 0)
			{
				cout << "Your remained money will not be remained, Are you sure?\n"
					<< "1)yes\n"
					<< "2)Nope!\n";
				cin >> a;
				if (a == 1)
					AnotherUser();
				else if (a == 2);
				else if ((choose / 1) == false)
				{
					cout << "Only numbers are allowed!\n";
					return 0;

				}
				else
					cout << "Please,press the correct Number\n";
			}
			else
			{
				AnotherUser();
			}

		}
		else if ((choose / 1) == false)//validation for inputing a character!
		{
			cout << "Only numbers are allowed!\n";
			break;

		}
		else
			cout << "Please,press the correct Number\n";
	}
}

