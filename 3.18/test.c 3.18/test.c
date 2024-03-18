#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//p126(5.1)
/*int main()
{
	int arr[5] = { 0 };
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("arr[%d]=%d\n", i,i);
	}
	return 0;
}
//p126(5.2)
int main()
{
	int arr[5] = { 0 };
	int i;
	for (i = 0; i<5;i++)
	{
		arr[i] = 5 - i;
		printf("arr[%d]=%d\n",i, arr[i]);
	}
	return 0;
}

//p129(5.4)

int main()
{
	int a, b;
	int i;
	int j = 0;
	printf("a b\n");
	puts("---------");
	int arr1[5] = { 17,23,36,0,0 };
	int arr2[5] = { 0 };
	for (i = 0; i < 5; i++)
	{
		arr2[i] = arr1[i];
		printf("%d  %d\n", arr1[i], arr2[i]);
	}
	return 0;

}
//p129
int main()
{
	int a, b;
	int i;
	int j = 0;
	int count = 0;
	printf("a b\n");
	puts("---------");
	int arr1[5] = { 17,23,36,0,0 };
	int arr2[5] = { 0 };
	for (i = 0; i < 5; i++)
	{
		arr2[i] = arr1[i];
		count++;
	}
	for (j = 0; j < 5; j++)
	{
		printf("%d   %d\n", arr1[j], arr2[count - j-1]);
	}
	return 0;
}//关键是搞出count这个变量类加*/


