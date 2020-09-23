//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int N;
//
//vector<int> int_vec;
//vector<int> now_cal_method;
//
//int cal_method[4];
//
//int min_ = 1000000000, max_ = -1000000000;
//
//void calculator()
//{
//	int result = int_vec[0];
//	for (int i = 0; i < N - 1; i++)
//	{
//		switch (now_cal_method[i])
//		{
//			case 0:
//				result += int_vec[i + 1];
//				break;
//			case 1:
//				result -= int_vec[i + 1];
//				break;
//			case 2:
//				result *= int_vec[i + 1];
//				break;
//			case 3:
//				result /= int_vec[i + 1];
//				break;
//		}
//	}
//
//	max_ = max(result, max_);
//	min_ = min(result, min_);
//}
//
//void dfs(int depth)
//{
//	if (depth == N - 1)
//	{	
//		calculator();
//	}
//	else
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			if (cal_method[i])
//			{
//				cal_method[i]--;
//				now_cal_method.push_back(i);
//
//				dfs(depth + 1);
//
//				cal_method[i]++;
//				now_cal_method.pop_back();
//			}
//		}
//	}
//}
//int main(void)
//{
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		int temp;
//		cin >> temp;
//		int_vec.push_back(temp);
//	}
//
//	for (int i = 0; i < 4; i++)
//	{
//		cin >> cal_method[i];
//	}
//
//	dfs(0);
//
//	cout << max_ << '\n' << min_;
//
//	return 0;
//}