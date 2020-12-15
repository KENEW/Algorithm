#include<stdio.h>

//양의 정수 N을 입력 받는다.
//N의 각 자리수의 합을 구하고, 만약 자리수의 합이 일의 자리수가 아니라면 다시 그 수의 합을 구한다.
//일의 자리수가 나올 때까지 반복하여 값을 출력하세요.
//EX 184682 > 29 > 11 > 2

int main(void)
{
	int input, remain;
	int sum = 0;
	int temp;

	scanf_s("%d", &input);

	while (1)
	{
		remain = 1;
		temp = input;

		while (1)
		{
			remain *= 10;

			if (input % remain == input)
			{
				sum += (temp % remain) / (remain / 10);
				break;
			}
			else
				sum += (temp % remain) / (remain / 10);
		}

		input = sum;
		//printf("%d ", sum);

		if (sum < 10) break;
		sum = 0;
	}
	printf("%d ", sum);
}