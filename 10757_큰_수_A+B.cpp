#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

string a, b;



int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b;

	int upNumber = 0;

	string result(max(a.size(), b.size()), '0');

	for (int i = 0; i < result.size(); i++)
	{
		int t_number = upNumber;
		upNumber = 0;

		if (i < a.size())
		{
			t_number += a[a.size() - i - 1] - '0';
		}
		if (i < b.size())
		{
			t_number += b[b.size() - i - 1] - '0';
		}
		if (t_number >= 10)
		{
			upNumber = 1;
			t_number -= 10;
		}

		result[result.size() - i - 1] = t_number + '0';
	}

	if (upNumber)
	{
		result.insert(result.begin(), '1');
	}

	cout << result << "\n";
	return 0;

}