#include<iostream>
using namespace std;

int main(void)
{
	long long A, B, V;
	long long result = 0;

	scanf("%lld %lld %lld", &A, &B, &V);

	result = ((V - B) % (A - B));
	printf("%lld", result == 0 ? ((V - B) / (A - B)) : ((V - B) / (A - B)) + 1);
	return 0;
}