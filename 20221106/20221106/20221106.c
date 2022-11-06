#include <stdio.h>
#pragma warning (disable:4996)
int main()
{
	int a, b, c = 0;
	step1:
	printf("输入三个排尾的人数： ");
	scanf("%d%d%d", &a, &b, &c);
	if (a > 3 && b > 5 && c > 7 && a<0 && b<0 && c<0 )
	{
		printf("请重新输入数字");
		goto step1;
	}
	int n = 10;
	while (n<=100)
	{
		if (n % 5==b && n % 7==c && n%3==a)
		{
			printf("队伍人数为：%d ", n);
			break;
		}
		n++;

	}
	if (n == 101)
	{
		printf("No answer");
	}
	return 0;
}