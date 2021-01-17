//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int N;
//
//int main(void)
//{
//	cin >> N;
//
//	vector<int> arr(N);
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//	}
//
//	sort(arr.begin(), arr.end(), greater<int>());
//
//	long long curNum1;
//	long long curNum2;
//	long long result = 0;
//
//	for (int i = 0; i < N; i++)
//	{
//		curNum1 = arr[i] * (i + 1);
//		//curNum2 = arr[i - 1] * (i);
//
//		result = max(curNum1, result);
//	}
//
//	cout << result;
//
//	return 0;
//}