#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int N, i;
int gcd, cnt(0);

int GCD(int a, int b)
{
	//return a % b ? GCD(b, a % b) : b;

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

	vector<int> v(N);
	vector<int> result;

	for (i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	gcd = v[1] - v[0];

	for (i = 2; i < N; i++)
	{
		gcd = GCD(gcd, v[i] - v[i - 1]);
	}

	for (i = 2; i * i <= gcd; i++)
	{
		if (gcd % i == 0)
		{
			result.push_back(i);
			result.push_back(gcd / i);
		}
	}

	result.push_back(gcd);

	sort(result.begin(), result.end());

	result.erase(unique(result.begin(), result.end()), result.end());

	for (i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}

	return 0;
}