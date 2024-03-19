#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//p155
/*nt sqr(int a)
{
	return a * a;
}
int main()
{
	int a;
	printf("请输入一个整数:"); scanf("%d", &a);
	int ret = sqr(sqr(a));
	printf("a的四次幂为%d.", ret);
	return 0;
}//这里创建了sqr这个函数来实现整数的四次方

int sumup(int x)
{
	int ret = 0;
	int i;
	for (i = 1; i <= x; i++)
	{
		ret += i;
	}
	return ret;
}


int main()
{
	int n;
	printf("请输入一个正整数:"); scanf("%d", &n);
	int sum = sumup(n);
	printf("1到n的整数和为%d.", sum);
}
p160
void alert(int ch, int x)
{
	int i;
	for (i = 1; i <= x; i++)
	{
		printf("%c", '\a');
	}
}

int main()
{
	int n;
	printf("请输入响铃的次数:"); scanf("%d", &n);
	alert('\a', n);
}

void ret(char mn)
{
	printf("%s\n", "hello.");
}
int main()
{
	ret("hello.");
}*/


int main()
{
	int i, j;
	int arr1[6][2] = { {79,89},{80,88},{80,87},{82,86},{83,85},{84,85} };
	int sum1[6][2];
	int sum2[6] = { 0 };
	int count = 0;
	for (i = 0; i<6; i++)
	{
		for (j = 0; j<2; j++)
		{
			sum2[count] += arr1[i][j];
		}
		printf("总分是:%d\n平均分是:%.2f\n", sum2[count],(double)sum2[count]/2);
		//这里实现了每个学生的总分和平均分
		count++;
	}
	return 0;
}


