#include<iostream>
using namespace std;

int main(void)
{
	int input[10000];
	int saveInput[10000];
	int num = 0;
	int inputNumber;
	int setNumber;

	cin >> inputNumber >> setNumber;

	for (int i = 0; i < inputNumber; i++)
	{
		cin >> input[i];
		if (setNumber > input[i])
		{
			saveInput[num] = input[i];
			num++;
		}
	}

	for (int k = 0; k < num; k++)
	{
		cout << saveInput[k] << " ";
	}

	return 0;
}