//#include<set>
//#include<cmath>
//#include<vector>
//#include<algorithm>
//#include<iostream>
//using namespace std;
//
////라인 스위핑
//
//struct P
//{
//	int x, y;
//	P(){}
//	P(int x, int y) : x(x), y(y){}
//	bool operator < (const P& a) const
//	{
//		if(y == a.y) return x < a.x;
//		return y < a.y;
//	}
//};
//
//bool cmp(const P& a, const P& b)
//{
//	return a.x < b.x;
//}
//
//inline int pow2(int n){return n * n;}
//inline int dist(P a, P b){return pow2(a.x - b.x) + pow2(a.y - b.y); }
//
//int n, x, y;
//vector<P> p;
//set<P> s;
//
//int main(void)
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x >> y;
//		p.push_back({x, y});
//	}
//
//	sort(p.begin(), p.end(), cmp);
//
//	int result = (int)dist(p[0], p[1]);
//	int start = 0;
//
//	s.insert(p[0]);
//	s.insert(p[1]);
//
//	for (int i = 2; i < n; i++)
//	{
//		while (start < i)
//		{
//			if (pow2(p[i].x - p[start].x) > result)
//			{
//				s.erase(p[start++]);
//			}
//			else
//			{
//				break;
//			}
//		}
//
//		int d = (int)sqrt(result);
//		auto lo = s.lower_bound(P(-10000, p[i].y - d));
//		auto hi = s.upper_bound(P(10000, p[i].y + d));
//
//		for (auto iter = lo; iter != hi; iter++)
//		{
//			result = min(result, (int)dist(p[i], *iter));
//		}
//
//		s.insert(p[i]);
//	}
//
//	cout << result << "\n";
//
//	return 0;
//}