#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//p103
/*int main()
{
	int i,a;
	int count=0;
	printf("请输入一个正整数:");
	scanf("%d", &a);
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; count<a; i++)//写成i小于a也可以.就不用再定义变量count
	{
		printf("%d", arr[i % sz]);//定义一个数组是为了打印出超出的部分
		count++;
	}
	return 0;
}

int main()
{
	int a, b, c;
	int i;
	printf(" 开始数值(cm):"); scanf("%d", &a);
	printf("结束数值(cm):"); scanf("%d", &b);
	printf("间隔数值(cm):"); scanf("%d", &c);
	int ret = (b - a) / c;
	for (i = 0; i <= ret; i++)
	{
		printf("%d  %.2fkg\n", a, (double)(a - 100)*0.9);//double和float都可以
		a += c;
	}
	return 0;
}//1.整数和小数相乘没有类型转换;2.打印小数点没有用%f

//p105
int main()
{
	int a;
	int i;
	printf("请输入一个整数:"); scanf("%d", &a);
	for (i = 0; i <= a; i++)
	{
		if (i % 2!= 0)
		{
			printf("%d  ", i);
		}
	}
	return 0;
}

#include<math.h>
int main()
{
	int n;
	int i;
	printf("n的值:"); scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		double base = i;
		double exponent = 2;
		double result = pow(base, exponent);
		printf("%d ",(int)result );
	}
	return 0;
}//这里用了一个pow函数


int main()
{
	int i, n;
	printf("n的值:"); scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("%d  ", i * i);
	}
	return 0;
}想复杂了.没想到用i*i这种形式.一直在想怎么表达平方


p106
int main()
{
	int a,i;
	int count = 0;
	printf("显示多少个*:"); scanf("%d", &a);
	for (i = 0; i < a; i++)
	{
		printf("*");
		count++;
		if (count%5==0)//这里的想法利用的很不错.5个为一行就是判断是不是5的约数就可以了
		{
			printf("\n");
		}
	}
	return 0;
}*/

//p106
/*
int main()
{
	int a, i;
	int count = 0;
	printf("整数值:"); scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("约数有%d个", count);
	return 0;
}*/

//p112
//自己写的完全是错的(多重循环练习)
/*int main()
{
	int i, a;
	int count = 0;
	printf("生成一个正方形");
	printf("正方形有几层:"); scanf("%d", &a);
	for (i = 0; i <=count; i++)
	{
		count++;
		printf("*");
		if (count % a== 0)
		{
			printf("\n");
		}
	}
	return 0;
}

int main()
{
	int i;
	int j;
	int a;
	printf("生成一个正方形");
	printf("正方形有几层:"); scanf("%d", &a);
	//遍历每一行
	for ( i = 0; i < a; i++)
	{
		for (j = 0; j <a; j++)
		{
			//if (i==0|| i == a - 1 || j == 0 || j == a - 1)
			//{
			//	printf("*");
			//	count++;
			//}
			//else
			//{
			//	
			//}
			printf("*");
		}
		printf("\n");
		
	}
	return 0;
}


p112
int main()
{
	int i, j;
	int length, width;
	printf("让我们来画一个正方形.");
	printf("一边:"); scanf("%d", &length);
	printf("另一边:"); scanf("%d", &width);
	//遍历每一行
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j <7; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//等腰直角在左下方
int main()
{
	int i, j,a;
	printf("短边"); scanf("%d", &a);
	for (i = 0; i < a; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//等腰直角在右下方
int main()
{
	int i, j, a;
	printf("短边"); scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j<=a-i; j++)
		{
			printf(" ");

		}
		for (j =1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}


//等腰直角在左上方
int main()
{
	int i, j, a;
	printf("短边"); scanf("%d", &a);
	for (i = 0; i <=a; i++)//这里设置为0是为了后面方便*的输出且这里的0不能变成1
	{
		for (j =1; j<=a - i; j++)//这里对于i和j的取值和<或者<=有一定的随机性下面就列举出所有的可能性
			                 //1.如果i小于等于 a,那么最后的结果会换两次行.但是结果不会变
			                 //2.如果i小于a那么结果就换一次行,结果也是相同的
			                 //3.j等于0时,j就设为<a-i;   j设为等于1时,j就设为<=a-i
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/

//等腰直角在右上方

int main()
{
	int i, j,k, a;
	int count = 0;
	printf("短边"); scanf("%d", &a);
	for (i = a; i>=1; i--)
	{  
		//count++;
		for (k = 1; k<=a - i;k++)
		{
			printf(" ");
		}
		/*switch (i)
		{
		case 2:printf(" "); break;
		case 3:printf("  "); break;
		case 4:printf("   "); break;
		case 5:printf("    "); break;
		}//这里用了switch函数,如果这里用if也可以.但是更麻烦.*///这个用switch就是一个特例
		for (j = 0; j <a-count; j++)//这里j可以换成1但是后面j要改为<a-1;
		{ 
			printf("*");
		}
		count++;//两个地方都可以写count但是j和a-count的关系就不一样
		printf("\n");
	}
	return 0;
}


//p112.4.24
/*int main()
{
	int layers;//这个单词代表层
	int i, j, k;
	printf("让我们来画个金字塔.");
	printf("金字塔有几层:"); scanf("%d",&layers);
	for (i = 0; i <layers; i++)
	{
		for (j = 0; j <layers - i-1; j++)
		{
			printf(" ");//实现空格的打印
		}
		for (k = 0; k < 2 * i + 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

int main()
{
	int layers;//这个单词代表层
	int i, j, k;
	int count = 0;
	printf("让我们来画个金字塔.");
	printf("金字塔有几层:"); scanf("%d", &layers);
	for (i = layers; i >= 1; i--)
	{
		count++;
		for (j = 1; j <= layers-i; j++)
		{
			printf(" ");// 注意for语句刚开始要判断条件
		}
		for (k= 1; k <= 2 * i - 1; k++)
		{
			printf("%d", count%10);
		}
		printf("\n");
	}
	return 0;
}*/

//总结一下上面1.多重循环有难度(金字塔类型和倒金字塔类型).其中等腰直角三角型在右上角和倒金字塔
//有相同之处.总之就是确定好变量之间的关系