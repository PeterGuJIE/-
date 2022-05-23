#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i;
	int j;
	int arr[40] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n - 1; i++)
	{
		int tmp;
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}










//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a;
//	int sum = 0;
//	int sn = 101;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		if (a>sum)
//		{
//			sum = a;
//		}
//		if (a < sn)
//		{
//			sn = a;
//		}
//	}
//	printf("%d\n", sum - sn);
//	return 0;
//}












//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a);
//		sum += a;
//	}
//	printf("%d\n", sum);
//	return 0;
//}







//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 9; i >=0; --i)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}






//int main()
//{
//	int i, j;
//	scanf("%d%d", &i, &j);
//	int count = 0;
//	for (int n = 1; n <= i; n++)
//	{
//		int sum = n;
//		while (sum)
//		{
//			if (sum % 10 == j)
//			{
//				count++;
//			}
//			sum = sum / 10;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}









//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int low = 3 * n;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < low - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("*     ");
//		}
//		printf("\n");
//		for (j = 0; j < low - 2; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("* *   ");
//		}
//		printf("\n");
//		for (j = 0; j < low - 3; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("* * * ");
//		}
//		printf("\n");
//		low -= 3;
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < 3 * n - 1; j++)
//		{
//			printf(" ");
//		}
//		printf("*\n");
//	}
//	return 0;
//}











//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= i; j++)
//			{
//				printf("%d ", j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}














//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == j || i == n-3 || j == 0)
//				{
//
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}










//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == 0 || i == n - 1 || j == n - 1 || j == 0)
//				{
//
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}








//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if (i == j || i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}











//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n-i-1; j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			printf("\n");
//		}
//	}
//	return 0;
//}












//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < i; j++)
//			{
//				printf(" ");
//			}
//		    printf("*");
//			printf("\n");
//		}
//	}
//	return 0;
//}










//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n + 1; i++)
//		{
//			for (int j = 0; j < n - i; j++)
//			{
//				printf("  ");
//			}
//			for (int j = 0; j < i + 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < i + 1; j++)
//			{
//				printf("  ");
//			}
//			for (int j = 0; j < n - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}








//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n + 1; i++)
//		{
//			for (int j = 0; j < n + 1 - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < i + 2; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}









//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n + 1; i++)
//		{
//			int j = 0;
//			for (j = 0; j <n - i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (int i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j < n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}








//void test()
//{
//	QU ps;
//	Init(&ps);
//	Push(&ps, 1);
//	Push(&ps, 2);
//	Push(&ps, 3);
//	Push(&ps, 4);
//	int ret = Size(&ps);
//	printf("%d", ret);
//	while (Empty(&ps) == 0)
//	{
//		printf("%d", Front(&ps));
//		Pop(&ps);
//	}
//	Defee(&ps);
//}
//int main()
//{
//	test();
//	return 0;
//}











//int main()
//{
//	Node ps;
//	Init(&ps);
//	Push(&ps, 1);
//	Push(&ps, 2);
//	Push(&ps, 3);
//	Push(&ps, 4);
//	while (Empty(&ps)==0)
//	{
//		printf("%d", Top(&ps));
//		Pop(&ps);
//	}
//	return 0;
//}