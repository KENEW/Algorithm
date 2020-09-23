//#include<stdio.h>
//#include<vector>
//using namespace std;
//
//int N;
//vector<long long> answer = {0, 1, 2};
//
//void find_answer()
//{
//	long long temp;
//
//	for (int i = 3; i <= N; i++)
//	{
//		temp = 0;
//		temp = answer[i - 1] + answer[i - 2];
//		answer.push_back(temp % 15746);
//	}
//}
//
//int main(void)
//{
//	scanf_s("%d", &N);
//	find_answer();
//	printf("%lld", answer[N] % 15746);
//
//	return 0;
//}