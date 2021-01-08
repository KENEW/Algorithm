#include<iostream>
#include<algorithm>
using namespace std;

int arr[10001];
int value[10001];
int N;

int main(void)
{
	cin >> N;

	for(int i = 1; i <= N; i++)
	{
		cin >> value[i];
	}

	arr[0] = value[0] = 0;
	arr[1] = value[1];
	arr[2] = value[2] + value[1];

	for (int i = 3; i <= N; i++)
	{
		arr[i] = max(arr[i - 3] + value[i - 1] + value[i], max(arr[i - 2] + value[i], arr[i - 1]));
	}

	cout << arr[N];
	return 0;
}