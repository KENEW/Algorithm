#include<iostream>
using namespace std;

int main(void)
{
	int number[10] = {0,};
	int input[3];
	int sum = 1;

	int numbers = 1;

	for (int i = 0; i < sizeof(input) / 4; i++)
	{
		cin >> input[i];
		sum *= input[i];
	}
	//printf("%d\n", sum);
	while (numbers < sum)
	{
		numbers *= 10;
	}
	numbers /= 10;
	while (numbers != 0)
	{
		switch (sum / numbers)
		{
		case 0:
			number[0]++;
			break;
		case 1:
			number[1]++;
			break;
		case 2:
			number[2]++;
			break;
		case 3:
			number[3]++;
			break;
		case 4:
			number[4]++;
			break;
		case 5:
			number[5]++;
			break;
		case 6:
			number[6]++;
			break;
		case 7:
			number[7]++;
			break;
		case 8:
			number[8]++;
			break;
		case 9:
			number[9]++;
			break;
		}

		sum %= numbers;
		numbers /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << number[i];
		if (i != 9)
			cout << endl;
	}
	return 0;
}