//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int main(void)
//{
//	vector<int> inputNum;
//	inputNum.push_back(0);
//	int N, t_num;
//
//	scanf("%d", &N);
//
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &t_num);
//
//		if (t_num > inputNum.back())
//		{
//			inputNum.push_back(t_num);
//		}
//		else
//		{
//			int t_index = lower_bound(inputNum.begin(), inputNum.end(), t_num) - inputNum.begin();
//			inputNum.at(t_index) = t_num;
//		}
//	}
//
//	printf("%d\n", inputNum.size() - 1);
//
//	return 0;
//}