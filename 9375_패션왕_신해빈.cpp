#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

int N;
int wearN;
int result;

string name, kind;

int main(void)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		unordered_map<string, int> map;

		cin >> wearN;

		for (int j = 0; j < wearN; j++)
		{
			cin >> name >> kind;

			if (map.find(kind) == map.end())
			{
				map.insert({kind, 1});
			}
			else
			{
				map[kind]++;
			}
		}
		
		result = 1;

		for (auto i : map)
		{
			result *= (i.second + 1);
		}

		cout << result - 1 << endl;

	}


	return 0;
}