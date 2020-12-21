//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<vector>
//using namespace std;
//
//int N;
//priority_queue<int, vector<int>, less<int>> pq;
//int arr[100001];
//
//int main(void)
//{
//	//ios::sync_with_stdio(false);
//	//cin.tie(0);
//	//cout.tie(0);
//	//
//	//cin >> N;
//	scanf("%d", &N);
//	
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		if (arr[i] == 0)
//		{
//			if (!pq.empty())
//			{
//				printf("%d\n", pq.top());
//				pq.pop();
//			}
//			else
//			{
//				printf("0\n");
//			}
//		}
//		else
//		{
//			pq.push(arr[i]);
//		}
//	}
//	return 0;
//}