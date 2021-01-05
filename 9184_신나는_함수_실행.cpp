#include<iostream>
using namespace std;

int arr[21][21][21];

int solution(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0)
	{
		return 1;
	}
	if (a > 20 || b > 20 || c > 20)
	{
		return solution(20, 20, 20);
	}

	if (arr[a][b][c] != 0)
	{
		return arr[a][b][c];
	}

	if (a < b && b < c)
	{
		return arr[a][b][c] = solution(a, b, c - 1) + solution(a, b - 1, c - 1) - solution(a, b - 1, c);
	}
	else
	{
		return arr[a][b][c] = solution(a - 1, b, c) + solution(a - 1, b - 1, c) + solution(a - 1, b, c - 1) - solution(a - 1, b - 1, c - 1);
	}
}

int main(void)
{
	int num1, num2, num3;

	while (1)
	{
		cin >> num1 >> num2 >> num3;

		if (num1 == -1 && num2 == -1 && num3 == -1)
		{
			break;
		}

		cout << "w(" << num1 << ", " << num2 << ", " << num3 << ") = " << solution(num1, num2, num3) << endl;
	}

	return 0;
}