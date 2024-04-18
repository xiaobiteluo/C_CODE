//#define  _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>

//打印菱形
//int main()
//{
//	int i, j;
//	char ch = 0;
//	int n = 7;
//	int num = n / 2;
//	//打印前三行
//	for (i = 1; i <= num; i++)
//	{
//		for (j = i; j <= num; j++)//j要等于i的原因是每行的空格都会变
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印中间行
//	for (i = 1; i <= 7; i++)
//	{
//		printf("*");
//	}
//	printf("\n");
//	//打印下三行
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


//打引等腰直角三角形

// 直角在左下方
//int main()
//{
//	int i, j;
//	int n;
//	printf("请输入要打印的边数的长度:");
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


//直角在右下方
//int main()
//{
//	int i, j;
//	int n;
//	printf("请输入要打印的边数的长度:");
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


//直角在左上方
//int main()
//{
//	int i, j;
//	int n;
//	printf("请输入要打印的边数的长度:");
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


//直角在右上方
//int main()
//{
//	int i, j;
//	int n;
//	printf("请输入要打印的边数的长度:");
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

////打印金字塔
//int main()
//{
//	int i, j; 
//	int n;
//	printf("请输入你要打印的金字塔的层数:");
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
//总结这类问题就是要抓住变量之间的关系;

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

