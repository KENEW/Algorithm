#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

string NString[500001];
string MString[500001];
vector<string> ResultStr;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> NString[i];
	}
	for (int i = 0; i < M; i++)
	{
		cin >> MString[i];
	}

	sort(MString, MString + M);

	for (int i = 0; i < N; i++)
	{
		if (binary_search(MString, MString + M, NString[i]))
		{
			ResultStr.push_back(NString[i]);
		}
	}

	sort(ResultStr.begin(), ResultStr.end());

	cout << ResultStr.size() << '\n';

	for (int i = 0; i < ResultStr.size(); i++)
	{
		cout << ResultStr[i] << '\n';
	}

	return 0;
}