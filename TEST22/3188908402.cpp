#include <stdio.h>
#include <string.h>
#include <malloc.h>
#define SIZE 10
#include "final.h"
int main()
{
	int num1, num2;
	char str;
	void fun10();
	scanf_s("%d", &num1);
	int testFun(num1);
	str = getchar();
	scanf_s("%c", &str, 100);
	while (str == 'y' || str == 'n')
	{
		if (str == 'y')
		{
			scanf_s("%d", &num2);
			int testFun(num2);
		}
		if (str == 'n')
			break;
		getchar();
		scanf_s("%c", &str, 100);
	}
	return 0;
}