//一p49
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*int main()
{
	int a, b;
	puts("请输入两个整数.");
	printf("整数A:"); scanf("%d", &a);
	printf("整数B:"); scanf("%d", &b);
	if (a % b == 0)
	{
		printf("b是a的约数\n");
	}
	else
	{
		printf("b不是a的约数");
	}
	return 0;
}

//p84
int main()
{
	int a, b,i;
	int sum=0;
	int max,min;
	puts("请输入两个整数.");
	printf("整数A:"); scanf("%d", &a);
	printf("整数B:"); scanf("%d", &b);
	printf("请输入两个整数:");
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		max = b;
		min = a;
	}
	else
	{
		max = a;
		min = b;
	}
	for (i = min; i <= max; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);
	return 0;
}*/

//p91
/*int main()
{
	int a,b;
	printf("请输入一个整数:");
	scanf("%d", &a);
	b = 1;
	while (b <= a)
	{
		if (b % 2 == 0)
		{
			printf("%d ", b);
		}
		b++;
	}
	do {
		if (b % 2 == 0)
		{
			printf("%d ", b);
		}
		b++;
	} while (b <= a);
	return 0;
}*/

//p96
/*int main()
{
	int a;
	int i = 1;
	int count = 0;
	puts("正整数:"); scanf("%d", &a);
	do{
		if (i % 2 == 0)
		{
			printf("-");
		}
		else
		{
			printf("+");
		}
		i++;
		count++;
	} while (count <= a);
	return 0;
	//用while循环来实现
	int main()
	{
		int a;
		int i = 1;
		int count = 0;
		puts("正整数:"); scanf("%d", &a);
		while (count <= a)
		{
			if (i % 2 == 0)
			{
				printf("-");
			}
			else
			{
				printf("+");
			}
			i++;
			count++;
		}
		return 0;
	}*/

//p96
/*int main()
{
	int a;
	int count = 0;
	printf("正整数;"); scanf("%d", &a);
	if (a > 0)
	{
		while (count < a)
		{
			printf("*\n");
			count++;
		}
	}
	else
	{
	
	}
	return 0;
}
int main()
{
	int a;
	printf("请输入一个整数:"); scanf("%d", &a);
	int count = 0;
	do {
		if (a > 0)
		{
			printf("*\n"); 
			count++;
		}
		else
		{

		}
	} while (count < a);
	return 0;
 }*/

//p91
/*int main()
{
	int a;
	int i=2;
	puts("请输入一个整数:"); scanf("%d", &a);
	do {
		printf("%d ",i);
		i = 2 * i;

	} while (i<a);
	//while(i<=a)
	//{
	//	printf("%d ",i);
	//	i = 2 * i;
	//}
	return 0;
}*/


//p98
/*int main()
{
	int a;
	printf("请输入一个正整数:");
	scanf("%d", &a);
	printf("该正数逆向显示的结果是:");
	while (a > 0)
	{
		printf("%d ", a % 10);
		a /= 10;
	}
	return 0;
}


int main()
{
	int a;
	int count = 0;
  	printf("请输入一个正整数:");
	scanf("%d", &a);
	while (a > 0)
	{
		a /= 10;
		count++;
	}
	printf("该正整数的位数是%d", count);
	return 0;
}*/

//p102
int main()
{
	int i, n, sum;
	sum = 0;
	printf("n的值:"); scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("1到n的和是%d", sum);
	return 0;
}

