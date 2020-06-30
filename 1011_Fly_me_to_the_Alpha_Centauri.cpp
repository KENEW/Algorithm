//#include<iostream>
//using namespace std;
//
//int solution(long long x, long long y)
//{
//	long long dist = y - x;
//	long long max = 0, warpCount, i;
//
//	while (1)
//	{
//		max++;
//		if(dist - (max * max) <= 0)	break;
//	}
//
//	if (dist - (max * max) == 0)					//case 1 : 딱 떨어지는 경우
//		return max * 2 - 1;
//	else
//	{
//		max--;
//		if(dist - (max * max) <= max)				//case 2 : 조금 남는 경우
//			return max * 2;
//		else 
//			return max * 2 + 1;						//case 3 : 최고속도로 조금 더 가야하는 경우
//	}
//}
//
//int main(void)
//{
//	long long testT, x, y;
//
//	cin >> testT;
//	while (testT--)
//	{
//		cin >> x >> y;
//		cout << solution(x, y) << endl;
//	}
//
//	return 0;
//}