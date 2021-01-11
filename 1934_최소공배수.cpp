#include<iostream>
#include<algorithm>
using namespace std;

int N;
int num1, num2;

int GCD(int a, int b)
{
	int n;
	
	if (a < b)
	{
		swap(a, b);
	}

	while (b != 0)
	{
		n = a % b;
		a = b;
		b = n;
	}

	return a;
}
int main(void)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> num1 >> num2;
		cout << (num1 * num2 ) / GCD(num1, num2) << endl;
	}

	return 0;
}