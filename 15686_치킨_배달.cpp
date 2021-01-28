//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
////3시간 동안 생각하고 풀어봤지만 못풀어서 풀이를 참고
//
//constexpr int MAX = 51;
//constexpr int INF = 100000000;
//
//int N, M;
//int result;
//
//int arr[MAX][MAX];
//vector<pair<int, int>> house, chicken;
//
//bool visited[13];
//
//int DistanceCalc(pair<int, int> a, pair<int, int> b)
//{
//	return abs(a.first - b.first) + abs(a.second - b.second);
//}
//
//void DFS(int index, int select)
//{
//	if (select == M)
//	{
//		int t_result = 0;
//
//		for (int i = 0; i < house.size(); i++)
//		{
//			int dist = INF;
//
//			for (int j = 0; j < chicken.size(); j++)
//			{
//				if (visited[j])
//				{
//					dist = min(dist, DistanceCalc(house[i], chicken[j]));
//				}
//			}
//
//			t_result += dist;
//		}
//
//		result = min(result, t_result);
//		return;
//	}
//
//	if (index == chicken.size())
//	{
//		return;
//	}
//
//	//치킨집 고르기
//	//원래는 next_permutation으로 n개 중에 r개를 뽑는 조합을 사용할라했는데
//	//재귀로 현재 인덱스를 체크하는 방법과 체크하지 않는 방법을 사용하면
//	//총 2^3 방법의 조합방법이 도출된다.
//
//	visited[index] = true;
//	DFS(index + 1, select + 1);
//	
//	visited[index] = false;
//	DFS(index + 1, select);
//}
//
//int main(void)
//{
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cin >> arr[i][j];
//
//			if (arr[i][j] == 1)
//			{
//				house.push_back({i, j});
//			}
//			else if (arr[i][j] == 2)
//			{
//				chicken.push_back({i, j});
//			}
//		}
//	}
//
//	result = INF;
//	DFS(0, 0);
//
//	cout << result << "\n";
//
//	return 0;
//}