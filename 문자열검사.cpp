#include<stdio.h>
#define MAX 100

typedef struct strInput
{
	char input[MAX];
	int count;
}strInput;

strInput strinput[MAX];

void bubble_sort(strInput list[], int n) {
	int i, j;
	strInput temp;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4 -1 - i; j++) {
			if (list[j].count > list[j + 1].count) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
}

int main(void)
{
	int str;

	for (int a = 0; a < 4; a++)
	{
		str = 0;
		strinput[a].count = 0;

		scanf("%s", strinput[a].input);

		for (int i = 0; strinput[a].input[i] != '\0'; i++, str++)
		{
			switch (strinput[a].input[i])
			{
			case 'a':
				strinput[a].count++;
				break;
			case 'e':
				strinput[a].count++;
				break;
			case 'i':
				strinput[a].count++;
				break;
			case 'o':
				strinput[a].count++;
				break;
			case 'u':
				strinput[a].count++;
				break;
			}
		}
	}
	bubble_sort(strinput, 4);

	for (int i = 0; i < 4; i++)
	{
		printf("%s", strinput[i].input);
		if (i != 3) printf("\n");
	}
		
	return 0;
}