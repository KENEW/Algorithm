//#include<stdio.h>
//int arr[41];
//int N;
//
//int fibonachi(int num)
//{
//	if (num == 0)
//	{
//		arr[0] = 0;
//		return 0;
//	}
//	else if (num == 1)
//	{
//		arr[1] = 1;
//		return 1;
//	}
//
//	if (arr[num] != 0)
//	{
//		return arr[num];
//	}
//	else
//	{
//		return arr[num] = fibonachi(num - 1) + fibonachi(num - 2);
//	}
//}
//
//int main(void)
//{
//	scanf("%d", &N);
//
//	for (int i = 0; i < N; i++)
//	{
//		int inputNum;
//		scanf("%d", &inputNum);
//
//		if (inputNum == 0)
//		{
//			printf("%d %d\n", 1, 0);
//		}
//		else if (inputNum == 1)
//		{
//			printf("%d %d\n", 0 ,1);
//		}
//		else
//		{
//			fibonachi(inputNum);
//			printf("%d %d\n", arr[inputNum - 1], arr[inputNum]);
//		}
//	}
//
//	return 0;
//}