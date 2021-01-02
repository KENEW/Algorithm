#include<iostream>
using namespace std;

int main(void)
{
	long long count = 0;
	long long A, B, C, result1 = 0, result2 = 0;

	scanf("%lld %lld %lld", &A, &B, &C);

	if (B >= C)
	{
		printf("-1");
		return 0;
	}

	 printf("%lld", (A / (C - B)) + 1);
	 return 0;
}

