//һp49
#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*int main()
{
	int a, b;
	puts("��������������.");
	printf("����A:"); scanf("%d", &a);
	printf("����B:"); scanf("%d", &b);
	if (a % b == 0)
	{
		printf("b��a��Լ��\n");
	}
	else
	{
		printf("b����a��Լ��");
	}
	return 0;
}

//p84
int main()
{
	int a, b,i;
	int sum=0;
	int max,min;
	puts("��������������.");
	printf("����A:"); scanf("%d", &a);
	printf("����B:"); scanf("%d", &b);
	printf("��������������:");
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
	printf("������һ������:");
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
	puts("������:"); scanf("%d", &a);
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
	//��whileѭ����ʵ��
	int main()
	{
		int a;
		int i = 1;
		int count = 0;
		puts("������:"); scanf("%d", &a);
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
	printf("������;"); scanf("%d", &a);
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
	printf("������һ������:"); scanf("%d", &a);
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
	puts("������һ������:"); scanf("%d", &a);
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
	printf("������һ��������:");
	scanf("%d", &a);
	printf("������������ʾ�Ľ����:");
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
  	printf("������һ��������:");
	scanf("%d", &a);
	while (a > 0)
	{
		a /= 10;
		count++;
	}
	printf("����������λ����%d", count);
	return 0;
}*/

//p102
int main()
{
	int i, n, sum;
	sum = 0;
	printf("n��ֵ:"); scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("1��n�ĺ���%d", sum);
	return 0;
}

