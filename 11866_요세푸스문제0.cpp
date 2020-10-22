//#include<iostream>
//#include<queue>
//#include<vector>
//using namespace std;
//
//queue<int> qu;
//vector<int> result;
//
//int main(void)
//{
//	int N, K;
//	cin >> N >> K;
//
//	for (int i = 1; i <= N; i++)
//	{
//		qu.push(i);
//	}
//
//	while (qu.size())
//	{
//		for (int i = 1; i < K; i++)
//		{
//			qu.push(qu.front());
//			qu.pop();
//		}
//		result.push_back(qu.front());
//		qu.pop();
//
//	}
//
//	cout << "<";
//	for (int i = 0; i < result.size(); i++)
//	{
//		cout << result[i];
//
//		if (i != result.size() - 1)
//		{
//			cout << ", ";
//		}
//	}
//	cout << ">";
//	return 0;
//}