#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, i, j;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		printf("\n");
		for (j = 0; j < a; j++)
		{
			printf("* ");
		}
	}
}