#include<iostream>
using namespace std;

int main(void)
{
	char input[80];

	int score[5] = { 0, 0, 0, 0, 0};
	int setCount = 0;
	int bonus = 1;
	int j = 0;

	cin >> setCount;

	for (int i = 0; i < setCount; i++)
	{
		score[i] = 0;
  	bonus = 1;
		j = 0;

		cin >> input;

		while (input[j] != '\0')
		{
			if (input[j] == 'X')
			{
				bonus = 1;
			}
			else if(input[j] == 'O')
			{
				score[i] += bonus;
				bonus++;
			}
			j++;
		}
		cout << score[i];
		if (i != setCount - 1)
		{
			cout << endl;
		}
	}
	return 0;
}
