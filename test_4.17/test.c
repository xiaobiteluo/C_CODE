//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//��ӡ����
//int main()
//{
//	int i, j;
//	char ch = 0;
//	int n = 7;
//	int num = n / 2;
//	//��ӡǰ����
//	for (i = 1; i <= num; i++)
//	{
//		for (j = i; j <= num; j++)//jҪ����i��ԭ����ÿ�еĿո񶼻��
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�м���
//	for (i = 1; i <= 7; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	//��ӡ������
//	for (i = num; i >= 1; i--)
//	{
//		for (j = i; j <= num; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//��������ֱ��������

// ֱ�������·�
//int main()
//{
//	int i, j;
//	int n;
//	printf("������Ҫ��ӡ�ı����ĳ���:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//ֱ�������·�
//int main()
//{
//	int i, j;
//	int n;
//	printf("������Ҫ��ӡ�ı����ĳ���:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for(j=i;j<=n;j++)
//		//for (j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//ֱ�������Ϸ�
//int main()
//{
//	int i, j;
//	int n;
//	printf("������Ҫ��ӡ�ı����ĳ���:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = i; j <= n; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//ֱ�������Ϸ�
//int main()
//{
//	int i, j;
//	int n;
//	printf("������Ҫ��ӡ�ı����ĳ���:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			printf(" ");
//		}
//		for (j = i; j <= n; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

////��ӡ������
//int main()
//{
//	int i, j; 
//	int n;
//	printf("��������Ҫ��ӡ�Ľ������Ĳ���:");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = i; j < n; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j<=2*i-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//�ܽ������������Ҫץס����֮��Ĺ�ϵ;

//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int age, time;
//    scanf("%d", &age);
//    time = age * 31560000;
//    printf("%d", time);
//    return 0;
//}

//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int i, n;
//    int sum = 0;
//    int flag = 1;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        sum = sum + i * flag;
//        flag = -flag;
//    }
//    printf("%d", sum);
//    return 0;
//}

//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int i, n;
//    double sum = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        sum = sum + 1.0 / i;
//    }
//    printf("%f", sum);
//    return 0;
//}

//#define  _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int i, n;
//    double sum = 0;
//    int flag = 1;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        sum = sum + (flag * 1.0) / i;
//        flag = -flag;
//    }
//    printf("%.1f", sum);
//    return 0;
//}

