#include<iostream>
using namespace std;

int main(void)
{
	const int BURGER = 3;
	const int DRINK = 2;

	int minBurger = 2000;
	int minDrink = 2000;

	int temp;

	for (int i = 0; i < BURGER; i++)
	{
		cin >> temp;
		if (temp < minBurger)
			minBurger = temp;
	}

	for (int k = 0; k < DRINK; k++)
	{
		cin >> temp;
		if (temp < minDrink)
			minDrink = temp;
	}

	cout << minBurger + minDrink - 50;

	return 0;
}