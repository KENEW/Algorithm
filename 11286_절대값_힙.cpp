//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<vector>
//#include<cmath>
//#include<utility>
//using namespace std;
//
//int main(void)
//{
//	int N;
//	int inputNum;
//	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//
//
//	scanf("%d", &N);
//
//	while (N--)
//	{
//		scanf("%d", &inputNum);
//
//		if (inputNum == 0)
//		{
//			if (pq.empty())
//			{
//				printf("0\n");
//			}
//			else
//			{
//				printf("%d\n", pq.top().second);
//				pq.pop();
//			}
//		}
//		else
//		{
//			pq.push(make_pair(abs(inputNum), inputNum));
//		}
//	}
//
//	return 0;
//}