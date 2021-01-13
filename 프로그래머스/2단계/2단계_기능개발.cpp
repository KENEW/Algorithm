#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) 
{
    queue<int> q, q2;
    vector<int> answer;

    int speed = 0;
    int cnt = 0;

    for (int i = 0; i < speeds.size(); i++)
    {
        q.push(progresses[i]);
        q2.push(speeds[i]);
    }

	while (!q.empty())
	{
		if (q.front() + (q2.front() * speed) >= 100)
		{
			q.pop();
			q2.pop();
			cnt++;
		}
		else
		{
			if (cnt > 0)
			{
				answer.push_back(cnt);
				cnt = 0;
			}

			speed++;
		}
	}

	if (cnt > 0)
	{
		answer.push_back(cnt);
	}

    return answer;
}

