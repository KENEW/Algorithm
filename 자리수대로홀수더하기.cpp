#include<iostream>

int main(void)
{
	int input;		//입력 값
	int tempNums = 10;	//자릿수 구할 때 나누는 값
	int number = 1;		//자릿수
	int total = 0;		//합계

	scanf_s("%d", &input);

	while (input >= number)
	{
		number *= 10;
	}
	number /= 10;

	printf("자릿수 : %d 자리\n", number);

	while (1)
	{
		int temp;
		temp = input / number;
		input = input % (number);
		
		if (temp % 2 == 1)
		{
			printf("%d 자리 에서 빼온 값 : %d\n", number, temp);
			total += temp;	//값을 더해준다.
		}
		else
		{
			printf("%d 자리 에서는 홀수가 없음\n", number);
		}

		if (number == 1) break;
		else number /= 10;
	}

	printf("\n자릿수 홀수를 더한 값 : %d", total);
	//printf("%d", total);

	return 0;
}
