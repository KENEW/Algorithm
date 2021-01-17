//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<unordered_map>
//using namespace std;
//
//int N;
//vector<int> map1, map2;
//int result = 0;
//
//int main(void)
//{
//	int temp;
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> temp;
//		map1.push_back(temp);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		cin >> temp;
//		map2.push_back(temp);
//	}
//
//	sort(map1.begin(), map1.end(), greater<int>());
//	sort(map2.begin(), map2.end());
//
//	for (int i = 0; i < N; i++)
//	{
//		result += (map1[i] * map2[i]);
//	}
//
//	cout << result;
//
//	return 0;
//}