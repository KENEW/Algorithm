#include<stdio.h>

#define MAX_STU 20
#define MAX_CARD 4

//(Read_Me)Question : 양의 정수 n을 입력 받고, n명의 학생이 뽑은 카드 4장을 입력 받는다. 카드는 1부터 10까지의 자연수이고 다음과 같은
//방식으로 점수를 계산한다.
//모든 카드가 짝수이면 모두 곱함, 모든 카드가 홀수이면 모두 곱함, 첫번쨰 카드와 마지막 카드가 같으면 첫번째 카드를 제외하고 나머지 카드 곱함
//모든 카드의 숫자가 같으면 첫번째 카드와 1000을 곱함, 모두 아닐경우 그냥 모두 합함
//점수를 계산할 때, 여러 항목이 해당 될 경우 점수가 높은 것으로 계산.
//최고점을 받은 n번째 학생의 번호와 최고점을 
//(n < 20) 입력 예시
//3
//2 2 4 6
//9 3 1 1
//7 5 4 7

//출력 예시
//3 140

int main(void)
{
	int n[MAX_STU][MAX_CARD] = { 0, };
	int maxSum[MAX_STU] = { 0 , };

	int sum[5] = { 0 ,};

	int max = 0;

	int maxScore = 0;
	int input;

	scanf_s("%d", &input);

	for (int i = 0; i < input; i++)
	{
		for (int k = 0; k < MAX_CARD; k++)
		{
			scanf_s("%d", &n[i][k]);
		}

		//짝수계산
		if ((n[i][0] % 2 == 0) && (n[i][1] % 2 == 0) && (n[i][2] % 2 == 0) && (n[i][3] % 2 == 0))
			sum[0] = n[i][0] * n[i][1] * n[i][2] * n[i][3];

		//홀수계산
		if ((n[i][0] % 2 == 1) && (n[i][1] % 2 == 1) && (n[i][2] % 2 == 1) && (n[i][3] % 2 == 1))
			sum[1] = n[i][0] * n[i][1] * n[i][2] * n[i][3];

		//1번째 == 마지막
		if (n[i][0] == n[i][MAX_CARD - 1])
			sum[2] = n[i][1] * n[i][2] * n[i][3];

		//모든카드
		if((n[i][0] == n[i][1]) &&  (n[i][2] == n[i][3]))
			sum[3] = n[i][0] * 1000;

		//모두 아닐경우
		if (sum[0] == 0 && sum[1] == 0 && sum[2] == 0 && sum[3] == 0)
		{
			sum[4] = n[i][0] + n[i][1] + n[i][2] + n[i][3];
		}
		
		//위에 구한 값들 중에서 제일 큰 값을 골라냄
		for (int a = 0; a < sizeof(sum) / sizeof(int); a++)
		{
			if (sum[a] > max)
				max = sum[a];
		}

		maxSum[i] = max;

		//max 변수는 임시 함수라서 재활용을 위해 0으로 다시 초기화
		max = 0;

		//위에 성적 다섯개 변수를 재활용을 위해 모두 초기화
		for (int m = 0; m < 5; m++)	sum[m] = 0;	
	}

	//밑에서도 다시 재활용을 위해 max 변수 초기화
	max = 0;

	//모든 학생끼리 최고점수를 비교
	for (int b = 0; b < input; b++)
	{
		if (maxSum[b] > max)
			max = maxSum[b];
	}

	//최고점수를 받은 학생이 누군지 골라냄
	for (int c = 0; c < input; c++)
	{
		if (maxSum[c] == max)
			maxScore = c + 1;
	}

	printf("%d %d", maxScore, max);
	return 0;
}
