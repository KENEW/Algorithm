#include<iostream>
using namespace std;

int N;
int result = 0;
int check;

int main(void)
{
	cin >> N;

	for (int i = N; i > 0; i--)
	{
		int temp = i;
		check = 0;

		while (temp % 5 == 0)
		{
			temp = temp / 5;
			check++;
		}

		result += check;
	}

	cout << result << endl;
}