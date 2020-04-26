#include<iostream>
using namespace std;

int main(void)
{
	const int STU_NUMBER = 5;

	int input[STU_NUMBER];
	int average = 0;

	for (int i = 0; i < STU_NUMBER; i++)
	{
		cin >> input[i];

		if (input[i] < 40)
		{
			input[i] = 40;
		}

		average += input[i];
	}

	cout << average / STU_NUMBER;

	return 0;
}