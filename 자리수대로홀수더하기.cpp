#include<iostream>

int main(void)
{
	int input;			//�Է� ��
	int tempNums = 10;	//�ڸ��� ���� �� ������ ��
	int number = 1;		//�ڸ���
	int total = 0;		//�հ�

	scanf_s("%d", &input);

	while (input >= number)
	{
		number *= 10;
	}
	number /= 10;

	printf("�ڸ��� : %d �ڸ�\n", number);

	while (1)
	{
		int temp;
		temp = input / number;
		input = input % (number);
		
		if (temp % 2 == 1)
		{
			printf("%d �ڸ� ���� ���� �� : %d\n", number, temp);
			total += temp;	//���� �����ش�.
		}
		else
		{
			printf("%d �ڸ� ������ Ȧ���� ����\n", number);
		}

		if (number == 1) break;
		else number /= 10;
	}

	printf("\n�ڸ��� Ȧ���� ���� �� : %d", total);
	//printf("%d", total);

	return 0;
}