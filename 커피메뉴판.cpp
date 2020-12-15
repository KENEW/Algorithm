#include<stdio.h>

//���� ���� N, M�� �Է� �ް�
//N���� �޴��� �Է� �޴´�. �޴� �Է��� �޴��� ��ȣ�� ������ �Է� �޴´�. �޴��� ��ȣ �̿��� �ٸ� ��ȣ�� ���� �ʴ´�.
//M�� ���� �������� Ŀ���� �� �ݾ׿��� M���� �A��.
//���� �ѱݾ� M���� ���� ��� 0������ ó���Ѵ�. �� �ݾ��� ��ȯ�ϴ� �Լ��� ����� �Է¿� ���� �� �ݾ��� ����ϼ���.

int menu(int coffee, int number)
{
	switch (coffee)
	{
	case 1:				//�Ƹ޸�ī��
		return (3000 * number);
	case 2:				//��
		return (3500 * number);
	case 3:				//��ī
		return (3800 * number);
	case 4:				//ī���
		return (4000 * number);
	default:			//����
		return -1;
	}
}

void print1()
{
	printf("-----------�޴�-----------\n");
	printf("1. �Ƹ޸�ī��, 3000��\n");
	printf("2. ī�� ���, 3500��\n");
	printf("3. ī�� ��ī, 3800��\n");
	printf("4. ī��� �����ƶ�, 4000��\n\n");

	printf("�ֹ� ����, ���� ���� ������ �Է� : ");
}

void print2()
{
	printf("�޴� ��ȣ, ���� : ");
}
int main(void)
{
	int n, m;			//Ƚ��, ���� ����
	int total = 0;		//�� ����

	print1();			//�޴��� ǥ��

	scanf_s("%d %d", &n, &m);
	
	for (int i = 0; i < n; i++)
	{
		int coffee, num;

		print2();

		scanf_s("%d %d", &coffee, &num);

		total += menu(coffee, num);
	}

	if (total <= m)	total = 0;	//���� ������ �� ���ݺ��� ũ��
	else total -= m;

	printf("%d", total);
	return 0;
}