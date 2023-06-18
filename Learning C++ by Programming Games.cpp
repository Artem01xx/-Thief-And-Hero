
// Thief And Hero
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Inventory
{
protected:
	int Quantity;
	vector<string>::const_iterator iter;
	vector<string> inventory;

public:

	Inventory()
	{
		int Quantity = 0;
	}

	


	void Method()
	{
		this->Quantity = Quantity;
		inventory.push_back("Sword");
		inventory.push_back(" Armor");
		inventory.push_back("Bow");
		inventory.push_back("Armor");

		Quantity = inventory.size();

		cout << " Quantity = " << Quantity << endl;
		cout << endl;

		cout << " Inventory " << endl;

		cout << endl;

		for (iter = inventory.begin(); iter != inventory.end();iter++)
		{
			cout << *iter << endl;
		}

		cout << endl;
	}

};

class Enemy : public Inventory
{
protected:
	bool Damage;

public:

	Enemy()
	{
		bool Damage = 0;
		int Quantity = 0;
	}

	Enemy(bool Damage)
	{
		this->Damage = Damage;
		this->Quantity = Quantity;
	}

	void TakeItem() 
	{
		if (Quantity >= 3)
		{
			
			Damage = true;
			cout << " Enemy took One of your Weapons " << endl;
			cout << endl;

			inventory.pop_back();

			for (iter = inventory.begin(); iter != inventory.end();iter++)
			{
				cout << *iter << endl;
			}
			
			
		}
		else
		{
			cout << " Thief Does Not Took Anything " << endl;
		}
	}
};



int main()
{
	
	

	Enemy enemy(80);

	enemy.Method();
	enemy.TakeItem();

	


	return 0;
}