#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ð������ļ�����ʽ(���Խ���Ϊ��)
  //һ.�����鲻��������
//int main()
//{
//	int i, j, k;
//	int arr[] = { 2,1,5,7,6,9,4,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 0;//˵��û����֮ǰ�������
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				flag = 1;//�����˽���˵��flag�����˸ı�
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 0)
//			break;//˵����һ���������
//	}
//	for (k = 0; k < sz; k++)
//	{
//		printf("%d \n", arr[k]);
//	}
//
//	return 0;
//}

  //����������ʵ��
//void bubble_sort(int arr[], int sz)
//{
//	int i, j;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 0;//˵��û����֮ǰ�������
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				flag = 1;//�����˽���˵��flag�����˸ı�
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 0)
//			break;//˵����һ���������
//	}
//}
//int main()
//{
//	int k;
//	int arr[] = { 2,1,5,7,6,9,4,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (k = 0; k < sz; k++)
//	{
//		printf("%d \n", arr[k]);
//	}
//
//	return 0;
//}

//��ָ����ʵ��
//void swap(int* p1, int* p2)
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i, j;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 0;//˵��û����֮ǰ�������
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				flag = 1;
//				swap(&arr[j], &arr[j + 1]);
//			}
//		}
//		if (flag == 0)
//			break;//˵����һ���������
//	}
//}
//int main()
//{
//	int k;
//	int arr[] = { 2,1,5,7,6,9,4,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (k = 0; k < sz; k++)
//	{
//		printf("%d \n", arr[k]);
//	}
//
//	return 0;
//}



//p296
//void  adjust_point(int* p)
//{
//	if (*p < 0)
//	{
//		*p = 0;
//		printf("%d\n", *p);
//	}
//	else if (*p > 100)
//	{
//		*p = 100;
//		printf("%d\n", *p);
//	}
//	else
//	{
//		printf("%d\n", *p);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������n��ֵ:"); scanf("%d", &n);
//	adjust_point(&n);
//}

//p310
//void set_idx(int* p, int sz)
//{
//	int i, j;
//	for (i = 0; i < sz; i++)
//	{
//		*p = i;
//		printf("%d ", *p);
//		p++;
//	}
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_idx(arr, sz);
//	return 0;
//}

void ary_set(int* p, int a, int b)
{
	int i;
	for (i = 0; i <=a; i++)
	{
		*(p+i) = b;

	}
}
int main()
{
	int i;
	int a[] = { 1,2,3,4,5 };
	ary_set(&a[2], 2, 99);
	for (i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}