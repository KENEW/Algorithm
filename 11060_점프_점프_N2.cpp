//#include<iostream>
//using namespace std;
//
//int N;
//int a[1001];
//int i = 0;
//int maxIndex;
//int cnt;
//
//int main(void)
//{
//	cin >> N;
//
//	for (int j = 0; j < N; j++)
//	{
//		cin >> a[j];
//	}
//
//	while(true)
//	{
//		maxIndex = i + 1;
//
//		if (a[i] + i >= N)
//		{
//			break;
//		}
//
//		for (int j = a[i] + i; j > i; j--)
//		{
//			if (a[maxIndex] <= a[j])
//			{
//				maxIndex = j;
//			}
//		}
//
//		if (maxIndex == 0)
//		{
//			break;
//		}
//
//		i = maxIndex;
//		cnt++;
//	}
//	
//	cout << cnt + 1;
//	return 0;
//}