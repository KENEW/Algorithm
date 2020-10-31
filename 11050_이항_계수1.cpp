#include<iostream>
using namespace std;

int solution(int n, int k)
{
	if (n == k || k == 0)
	{
		return 1;
	}
	return solution(n-1, k) + solution(n - 1, k - 1);
}

int main(void)
{
	int N, K;
	cin >> N >> K;

	cout << solution(N, K) << endl;

	return 0;
}