//#include<iostream>
//using namespace std;
//
//typedef struct
//{
//	int x;
//	int y;
//	int r;
//}Circle;
//
//Circle c1, c2;
//int N;
//
//int main(void)
//{
//	cin >> N;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> c1.x >> c1.y >> c1.r;
//		cin >> c2.x >> c2.y >> c2.r;
//
//		int dis = (c1.x - c2.x) * (c1.x - c2.x) + (c1.y - c2.y) * (c1.y - c2.y);
//
//		int con1 = (c1.r - c2.r) * (c1.r - c2.r);
//		int con2 = (c1.r + c2.r) * (c1.r + c2.r);
//
//		if (dis == 0)
//		{
//			if (con1 == 0)
//			{
//				cout << "-1" << '\n';
//			}
//			else
//			{
//				cout << "0" << '\n';
//			}
//		}
//		else if (dis == con1 || dis == con2)
//		{
//			cout << "1" << '\n';
//		}
//		else if (con1 < dis && dis < con2)
//		{
//			cout << "2" << '\n';
//		}
//		else
//		{
//			cout << "0" << '\n';
//		}
//
//	}
//
//	
//	return 0;
//}