//#include<iostream>
//#include<cmath>
//using namespace std;
//
//int N;
//int ans = 0;
//int arr[20][20];
//bool visit[20];
//
//void dfs(int cnt, int cur)
//{
//	if (cnt == (N / 2))
//	{
//		int a = 0;
//		int b = 0;
//
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = i + 1; j < N; j++)
//			{
//				if (visit[i] && visit[j])
//				{
//					a += arr[i][j];
//					a += arr[j][i];
//				}
//				else if (!visit[i] && !visit[j])
//				{
//					b += arr[i][j];
//					b += arr[j][i];
//				}
//			}
//		}
//
//		ans == min(ans, abs(a - b));
//	}
//	for (int i = 0; i < N; i++)
//	{
//		if (!visit[i] && (i > cur))
//		{
//			visit[i] = true;
//			dfs(cnt + 1, i);
//			visit[i] = false;
//		}
//	}
//}
//int main(void)
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	dfs(0, -1);
//
//	cout << ans << endl;
//	return 0;
//}