//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int inputNum[500001];
//int searchNum[500001];
//int resultNum[500001]= {0, };
//
//int inputCnt, searchCnt;
//bool breakCheck = false;
//
//int main(void)
//{
//	scanf("%d", &inputCnt);
//	for (int i = 0; i < inputCnt; i++)
//	{
//		scanf("%d", &inputNum[i]);
//	}
//
//	sort(inputNum, inputNum + inputCnt);
//
//	scanf("%d", &searchCnt);
//	for (int i = 0; i < searchCnt; i++)
//	{
//		scanf("%d", &searchNum[i]);
//	}
//
//	for (int i = 0; i < searchCnt; i++)
//	{	
//		int left = 0;
//		int right = inputCnt;
//
//		breakCheck = false;
//
//		while ((left <= right) && (breakCheck == false))
//		{
//			int mid = (left + right) / 2;
//
//			if (searchNum[i] == inputNum[mid])
//			{
//				resultNum[i] = 1;
//				breakCheck = true;
//			}
//			else if (searchNum[i] >= inputNum[mid])
//			{
//				left = mid + 1;
//			}
//			else
//			{
//				right = mid - 1;
//			}
//		}
//	}
//
//	for (int i = 0; i < searchCnt; i++)
//	{
//		printf("%d ", resultNum[i]);
//	}
//
//	return 0;
//}
