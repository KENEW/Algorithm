#include<iostream>
using namespace std;

int main(void)
{
	int number;
	cin >> number;

	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j <= number; j++)
		{
			if((j % 2 ) - 1 == 0)
				cout << "* ";
		}
		cout << "\n";
		for (int k = 0; k < number - 1; k++)
		{
			if(k % 2 == 0)
				cout << " *";
		}
		cout << "\n";
	}

	return 0;
}