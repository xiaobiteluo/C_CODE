#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//p103
/*int main()
{
	int i,a;
	int count=0;
	printf("������һ��������:");
	scanf("%d", &a);
	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; count<a; i++)//д��iС��aҲ����.�Ͳ����ٶ������count
	{
		printf("%d", arr[i % sz]);//����һ��������Ϊ�˴�ӡ�������Ĳ���
		count++;
	}
	return 0;
}

int main()
{
	int a, b, c;
	int i;
	printf(" ��ʼ��ֵ(cm):"); scanf("%d", &a);
	printf("������ֵ(cm):"); scanf("%d", &b);
	printf("�����ֵ(cm):"); scanf("%d", &c);
	int ret = (b - a) / c;
	for (i = 0; i <= ret; i++)
	{
		printf("%d  %.2fkg\n", a, (double)(a - 100)*0.9);//double��float������
		a += c;
	}
	return 0;
}//1.������С�����û������ת��;2.��ӡС����û����%f

//p105
int main()
{
	int a;
	int i;
	printf("������һ������:"); scanf("%d", &a);
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
	printf("n��ֵ:"); scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		double base = i;
		double exponent = 2;
		double result = pow(base, exponent);
		printf("%d ",(int)result );
	}
	return 0;
}//��������һ��pow����


int main()
{
	int i, n;
	printf("n��ֵ:"); scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("%d  ", i * i);
	}
	return 0;
}�븴����.û�뵽��i*i������ʽ.һֱ������ô���ƽ��


p106
int main()
{
	int a,i;
	int count = 0;
	printf("��ʾ���ٸ�*:"); scanf("%d", &a);
	for (i = 0; i < a; i++)
	{
		printf("*");
		count++;
		if (count%5==0)//������뷨���õĺܲ���.5��Ϊһ�о����ж��ǲ���5��Լ���Ϳ�����
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
	printf("����ֵ:"); scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("Լ����%d��", count);
	return 0;
}*/

//p112
//�Լ�д����ȫ�Ǵ��(����ѭ����ϰ)
/*int main()
{
	int i, a;
	int count = 0;
	printf("����һ��������");
	printf("�������м���:"); scanf("%d", &a);
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
	printf("����һ��������");
	printf("�������м���:"); scanf("%d", &a);
	//����ÿһ��
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
	printf("����������һ��������.");
	printf("һ��:"); scanf("%d", &length);
	printf("��һ��:"); scanf("%d", &width);
	//����ÿһ��
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

//����ֱ�������·�
int main()
{
	int i, j,a;
	printf("�̱�"); scanf("%d", &a);
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

//����ֱ�������·�
int main()
{
	int i, j, a;
	printf("�̱�"); scanf("%d", &a);
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


//����ֱ�������Ϸ�
int main()
{
	int i, j, a;
	printf("�̱�"); scanf("%d", &a);
	for (i = 0; i <=a; i++)//��������Ϊ0��Ϊ�˺��淽��*������������0���ܱ��1
	{
		for (j =1; j<=a - i; j++)//�������i��j��ȡֵ��<����<=��һ���������������оٳ����еĿ�����
			                 //1.���iС�ڵ��� a,��ô���Ľ���ỻ������.���ǽ�������
			                 //2.���iС��a��ô����ͻ�һ����,���Ҳ����ͬ��
			                 //3.j����0ʱ,j����Ϊ<a-i;   j��Ϊ����1ʱ,j����Ϊ<=a-i
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/

//����ֱ�������Ϸ�

int main()
{
	int i, j,k, a;
	int count = 0;
	printf("�̱�"); scanf("%d", &a);
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
		}//��������switch����,���������ifҲ����.���Ǹ��鷳.*///�����switch����һ������
		for (j = 0; j <a-count; j++)//����j���Ի���1���Ǻ���jҪ��Ϊ<a-1;
		{ 
			printf("*");
		}
		count++;//�����ط�������дcount����j��a-count�Ĺ�ϵ�Ͳ�һ��
		printf("\n");
	}
	return 0;
}


//p112.4.24
/*int main()
{
	int layers;//������ʴ����
	int i, j, k;
	printf("������������������.");
	printf("�������м���:"); scanf("%d",&layers);
	for (i = 0; i <layers; i++)
	{
		for (j = 0; j <layers - i-1; j++)
		{
			printf(" ");//ʵ�ֿո�Ĵ�ӡ
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
	int layers;//������ʴ����
	int i, j, k;
	int count = 0;
	printf("������������������.");
	printf("�������м���:"); scanf("%d", &layers);
	for (i = layers; i >= 1; i--)
	{
		count++;
		for (j = 1; j <= layers-i; j++)
		{
			printf(" ");// ע��for���տ�ʼҪ�ж�����
		}
		for (k= 1; k <= 2 * i - 1; k++)
		{
			printf("%d", count%10);
		}
		printf("\n");
	}
	return 0;
}*/

//�ܽ�һ������1.����ѭ�����Ѷ�(���������ͺ͵�����������).���е���ֱ�������������ϽǺ͵�������
//����֮ͬ��.��֮����ȷ���ñ���֮��Ĺ�ϵ