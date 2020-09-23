//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<cstdio>
//#include<string>
//#include<cmath>
//using namespace std;
//
//int main(void)
//{
//	int input;
//	cin >> input;
//	
//	vector<int> vec(input);
//
//	double sum = 0;
//	int minValue = 4000;
//	int maxValue = -4000;
//
//	for (int i = 0; i < input; i++)
//	{
//		cin >> vec[i];
//		sum += vec[i];
//
//		minValue = min(minValue, vec[i]);
//		maxValue = max(maxValue, vec[i]);
//	}
//
//	cout << (int)round(sum / double(input)) << endl;
//
//	vector<int> cnt(8001);
//	fill(cnt.begin(), cnt.end(), 0);
//
//	int pos = 0;
//	int maxpos = 0;
//
//	for (int i = 0; i < input; i++)
//	{
//		pos = vec[i] + 4000;
//		cnt[pos]++;
//		maxpos = max(maxpos, cnt[pos]);
//	}
//
//	cout << "max  : " << maxpos << endl;
//
//	int count = 0;
//	int secondMany = 0;
//	for(int i = 0; i < cnt.size(); i++);
//
//
//}
