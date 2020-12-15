#include<stdio.h>

//양의 정수 N, M을 입력 받고
//N번의 메뉴를 입력 받는다. 메뉴 입력은 메뉴의 번호와 개수로 입력 받는다. 메뉴의 번호 이외의 다른 번호가 들어가지 않는다.
//M은 할인 쿠폰으로 커피의 총 금액에서 M원을 뺸다.
//만약 총금액 M보다 작을 경우 0원으로 처리한다. 총 금액을 반환하는 함수를 만들고 입력에 따른 총 금액을 출력하세요.

int menu(int coffee, int number)
{
	switch (coffee)
	{
	case 1:				//아메리카노
		return (3000 * number);
	case 2:				//라떼
		return (3500 * number);
	case 3:				//모카
		return (3800 * number);
	case 4:				//카라멜
		return (4000 * number);
	default:			//오류
		return -1;
	}
}

void print1()
{
	printf("-----------메뉴-----------\n");
	printf("1. 아메리카노, 3000원\n");
	printf("2. 카페 라뗴, 3500원\n");
	printf("3. 카페 모카, 3800원\n");
	printf("4. 카라멜 마끼아또, 4000원\n\n");

	printf("주문 갯수, 할인 가격 순으로 입력 : ");
}

void print2()
{
	printf("메뉴 번호, 갯수 : ");
}
int main(void)
{
	int n, m;			//횟수, 할인 가격
	int total = 0;		//총 가격

	print1();			//메뉴판 표시

	scanf_s("%d %d", &n, &m);
	
	for (int i = 0; i < n; i++)
	{
		int coffee, num;

		print2();

		scanf_s("%d %d", &coffee, &num);

		total += menu(coffee, num);
	}

	if (total <= m)	total = 0;	//할인 가격이 총 가격보다 크면
	else total -= m;

	printf("%d", total);
	return 0;
}