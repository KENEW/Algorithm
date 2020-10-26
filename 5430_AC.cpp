#include<iostream>
#include<algorithm>
#include<string>
#include<deque>
using namespace std;

int N;
int inputN;
bool emptyCheck;
bool reverseCheck;
string solution = "";
string inputNum = "";
string tempStr = "";

deque<int> de;
deque<int> init_de;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		emptyCheck = false;
		reverseCheck = false;

		cin >> solution >> inputN >> inputNum;

		for (int k = 0; k <= inputNum.size(); k++)
		{
			if (inputNum.at(k) == ',')
			{
				de.push_back(stoi(tempStr));
				tempStr = "";
			}
			if (inputNum.at(k) == ']')
			{
				if (!tempStr.empty())
				{
					de.push_back(stoi(tempStr));
				}
				tempStr = "";
				break;
			}
			else if(inputNum.at(k) != '[' && inputNum.at(k) != ',' && inputNum.at(k) != ']')
			{
				tempStr.push_back(inputNum[k]);
			}
		}

		for (int j = 0; j < solution.size(); j++)
		{
			if (solution.at(j) == 'R')
			{
				reverseCheck = !reverseCheck;
			}
			if (solution.at(j) == 'D')
			{
				if (de.empty())
				{
					emptyCheck = true;
					break;
				}
				else
				{
					if(!reverseCheck)
					{
						de.pop_front();
					}
					else
					{
						de.pop_back();
					}
				}
			}
		}

		if (emptyCheck)
		{
			cout << "error" << '\n';
		}
		else
		{
			cout << "[";
			if (!reverseCheck)
			{
				for (int k = 0; k < de.size(); k++)
				{
					cout << de.at(k);
					if (k != de.size() - 1)
					{
						cout << ",";
					}
				}
			}
			if (reverseCheck)
			{
				for (int k = de.size() - 1; k >= 0; k--)
				{
					cout << de.at(k);
					if (k != 0)
					{
						cout << ",";
					}
				}
			}
			cout << "]" << '\n';
		}

		de = init_de;
	}
}