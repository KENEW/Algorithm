#include<iostream>
#include<algorithm>
using namespace std;

int N;
int arr[301];
int score[301];

int main(void)
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> score[i];
	}

	arr[1] = score[1];
	arr[2] = score[2] + arr[1];
	arr[3] = max(score[1] + score[3], score[2] + score[3]);

	for (int i = 4; i <= N; i++)
	{
		arr[i] = max(arr[i - 2] + score[i], arr[i - 3] + score[i - 1] + score[i]);
	}

	cout << arr[N];
	return 0;
}