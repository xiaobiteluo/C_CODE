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
	printf("������һ������:"); scanf("%d", &a);
	int ret = sqr(sqr(a));
	printf("a���Ĵ���Ϊ%d.", ret);
	return 0;
}//���ﴴ����sqr���������ʵ���������Ĵη�

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
	printf("������һ��������:"); scanf("%d", &n);
	int sum = sumup(n);
	printf("1��n��������Ϊ%d.", sum);
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
	printf("����������Ĵ���:"); scanf("%d", &n);
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
		printf("�ܷ���:%d\nƽ������:%.2f\n", sum2[count],(double)sum2[count]/2);
		//����ʵ����ÿ��ѧ�����ֺܷ�ƽ����
		count++;
	}
	return 0;
}


