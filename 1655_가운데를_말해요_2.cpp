#include<iostream>
#include<queue>
#include<algorithm>
#include<functional>
using namespace std;

#define MAX 100001

priority_queue<int, vector<int>, less<int>> maxPq;
priority_queue<int, vector<int>, greater<int>> minPq;

int arr[MAX];
int N, inputNum;

int main(void)
{
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &inputNum);

		if (maxPq.size() > minPq.size())
		{
			minPq.push(inputNum);
		}
		else
		{
			maxPq.push(inputNum);
		}

		if (!maxPq.empty() && !minPq.empty())
		{
			if (!(maxPq.top() <= minPq.top()))
			{
				int num1 = maxPq.top();
				int num2 = minPq.top();

				maxPq.pop();
				minPq.pop();

				maxPq.push(num2);
				minPq.push(num1);
			}
		}

		printf("%d\n", maxPq.top());
	}

	return 0;
}
