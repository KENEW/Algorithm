#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> personT;

bool compare(pair<int, int> P1, pair<int, int> P2)
{
	return P1.second < P2.second;
}

int main(void)
{
	int N;
	int result = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		personT.push_back(make_pair(i, temp));
	}

	sort(personT.begin(), personT.end(), compare);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < i; j++)
		{
			result += personT[j].second;
		}
	}

	cout << result;

	return 0;
}