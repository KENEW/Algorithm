//#include<iostream>
//#include<queue>
//using namespace std;
//
//#define endl '\n'
//#define MAX 100001
//
//int N;
//int arr[MAX];
//
//int main(void)
//{
//	cin.sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//	}
//
//	priority_queue<int> maxPq, minPq;
//
//	for (int i = 0; i < N; i++)
//	{
//		if (maxPq.size() > minPq.size())
//		{
//			minPq.push(-arr[i]);
//		}
//		else
//		{
//			maxPq.push(arr[i]);
//		}
//
//		if (!maxPq.empty() && !minPq.empty())
//		{
//			if (maxPq.top() > -minPq.top())
//			{
//				int max = maxPq.top();
//				int min = -minPq.top();
//
//				maxPq.pop();
//				minPq.pop();
//
//				maxPq.push(min);
//				minPq.push(-max);
//			}
//		}
//
//		cout << maxPq.top() << endl;
//	}
//
//	
//}