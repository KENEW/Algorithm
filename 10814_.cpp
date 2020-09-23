//#include<iostream>
//#include<algorithm>
//#include<utility>
//#include<vector>
//
//using namespace std;
//
//bool cmp(pair<int, string> u, pair<int, string> v)
//{
//	return u.first < v.first;
//}
//
//int main(void)
//{
//	int input;
//	cin >> input;
//
//	vector<pair<int, string>> vec(input);
//
//	for (int i = 0; i < input; i++)
//	{
//		cin >> vec[i].first >> vec[i].second;
//	}
//
//	stable_sort(vec.begin(), vec.end(), cmp);
//
//	for (int i = 0; i < input; i++)
//	{
//		cout << vec[i].first << ' ' << vec[i].second << '\n';
//	}
//}