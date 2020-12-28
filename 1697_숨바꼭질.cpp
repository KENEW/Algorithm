#include<iostream>
#include<queue>
#include<utility>
#define MAX 100001
using namespace std;

int N, K;
int second = 0;
bool visited[MAX];

void BFS()
{
	queue<pair<int, int>> q;
	q.emplace(N, 0);

	while (!q.empty())
	{
		int pos = q.front().first;
		int time = q.front().second;
		q.pop();
		
		if (pos == K)
		{
			second = time;
			break;
		}
		
		int front = pos + 1;
		int back = pos - 1;
		int tp = pos * 2;

		if (back >= 0 && visited[back] == false)
		{
			visited[back] = true;
			q.emplace(back, time + 1);
		}
		if (front <= K && visited[front] == false)
		{
			visited[front] = true;
			q.emplace(front, time + 1);
		}
		if(tp <= K + 1 && visited[tp] == false)
		{
			visited[tp] = true;
			q.emplace(tp, time + 1);
		}
	}
}

int main(void)
{
	cin >> N >> K;

	BFS();
	cout << second << endl;

	return 0;
}