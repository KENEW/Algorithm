#include<stdio.h>

//���� ���� N�� �Է� �޴´�.
//N�� �� �ڸ����� ���� ���ϰ�, ���� �ڸ����� ���� ���� �ڸ����� �ƴ϶�� �ٽ� �� ���� ���� ���Ѵ�.
//���� �ڸ����� ���� ������ �ݺ��Ͽ� ���� ����ϼ���.
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