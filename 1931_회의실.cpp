#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<pair<int, int>> timeList;

bool compare(pair<int, int> P1, pair<int, int> P2)
{
	if (P1.second == P2.second)
	{
		return P1.first < P2.first;
	}
	else
	{
		return P1.second < P2.second;
	}
}

int main(void)
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int first, second;
		cin >> first >> second;
		timeList.push_back(make_pair(first, second));
	}

	sort(timeList.begin(), timeList.end(), compare);

	int now = timeList[0].second;
	int count = 1;

	for (int i = 1; i < N; i++)
	{
		if (now <= timeList[i].first)
		{
			count++;
			now = timeList[i].second;
		}
	}

	cout << count;

	return 0;
}