#include<iostream>
#include<algorithm>
using namespace std;

int ring[101];
int N;

int GCD(int a, int b)
{
	int n;
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
		cin >> ring[i];
	}

	for (int i = 1; i < N; i++)
	{
		int gcd = GCD(ring[0], ring[i]);

		cout << ring[0] / gcd << "/" << ring[i] / gcd << endl;
	}

	return 0;
}