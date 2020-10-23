#include<iostream>
#include<deque>
using namespace std;

int deSize;
int N;
int findNum;
int result = 0;
int leftNum, rightNum;

deque<int> de;

deque<int> tLeftDeque;
deque<int> tRightDeque;

int main(void)
{
	cin >> deSize >> N;

	for(int i = 1; i <= deSize; i++)
	{
		de.push_back(i);
	}

	for (int i = 0; i < N; i++)
	{
		leftNum = 0;
		rightNum = 0;

		cin >> findNum;

		while (1)
		{
			if (de.front() == findNum)
			{
				de.pop_front();
				break;
			}
			else
			{
				tLeftDeque = de;
				while (tLeftDeque.front() != findNum)
				{
					leftNum++;
					tLeftDeque.push_back(tLeftDeque.front());
					tLeftDeque.pop_front();
				}

				tRightDeque = de;
				while (tRightDeque.front() != findNum)
				{
					rightNum++;
					tRightDeque.push_front(tRightDeque.back());
					tRightDeque.pop_back();
				}

				if (leftNum > rightNum)
				{
					de = tRightDeque;
					result += rightNum;
				}
				else
				{
					de = tLeftDeque;
					result += leftNum;
				}
			}
		}
	}

	cout << result;
	return 0;
}