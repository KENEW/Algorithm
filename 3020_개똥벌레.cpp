//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int N, H;
//int cnt = 1;
//
////int BinarySearch(vector<int> & const bottom, vector<int> & const top)
////{
////	int result = 999999999;
////
////	for (int i = 1; i <= H; i++)
////	{
////		int collNum = bottom.size() - (lower_bound(bottom.begin(), bottom.end(), i) - bottom.begin());
////		collNum += top.size() - (upper_bound(top.begin(), top.end(), H - i) - top.begin());
////
////		if (result == collNum)
////		{
////			cnt++;
////		}
////		else if (result > collNum)
////		{
////			result = collNum;
////			cnt = 1;
////		}
////	}
////
////	return result;
////}
//int main(void)
//{
//	cin >> N >> H;
//
//	vector<int> bottom(N / 2);
//	vector<int> top(N / 2);
//
//	for (int i = 0; i < (N / 2); i++)
//	{
//		cin >> bottom[i] >> top[i];
//	}
//
//	sort(top.begin(), top.end());
//	sort(bottom.begin(), bottom.end());
//
//	int result = 999999999;
//
//	for (int i = 1; i <= H; i++)
//	{
//		int collNum = bottom.size() - (lower_bound(bottom.begin(), bottom.end(), i) - bottom.begin());
//		collNum += top.size() - (upper_bound(top.begin(), top.end(), H - i) - top.begin());
//
//		if (result == collNum)
//		{
//			cnt++;
//		}
//		else if (result > collNum)
//		{
//			result = collNum;
//			cnt = 1;
//		}
//	}
//	//cout << BinarySearch(bottom, top) << " " << cnt;
//	cout << result << " " << cnt;
//
//
//	return 0;
//}
