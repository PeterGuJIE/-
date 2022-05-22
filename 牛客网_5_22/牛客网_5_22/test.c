#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int j = 0;
//		for (int i = 0; i < n; i++)
//		{
//			for (j = 0; j <i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <n-i; j++)
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
//		int j = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			for (j = 0; j < n-i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <i; j++)
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
//		int j = 0;
//		for (int i = 0; i < n; i++)
//		{
//			for (j = 0; j < n-1-i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j <=i; j++)
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
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n-i; j++)
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
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 0; j < i; j++)
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
//		for (int i = 0; i < n; i++)
//		{
//			for (int a = 0; a < n; a++)
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
//		for (int i = 0; i < n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}








//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		int tmp = 0;
//		int num = i;
//		while (num)
//		{
//			tmp = tmp * 10 + num % 10; 
//			num = num / 10;
//		}
//		if (tmp == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}







//int main()
//{
//	int k;
//	scanf("%d", &k);
//	int sum = 0;
//	int count = 0;
//	for (int i = 1; i <= k; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (count == k)
//			{
//				break;
//			}
//			sum += i;
//			count++;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}









//void print(int a)
//{
//	if (a < 6)
//	{
//		printf("%d", a);
//	}
//	else
//	{
//		print(a / 6);
//		printf("%d", a % 6);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}








//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	while (a)
//	{
//		printf("%d", a % 10);
//		a = a / 10;
//	}
//	return 0;
//}


//int main()
//{
//	int a[7], temp;
//	float count = 0.0;
//	while (scanf("%d%d%d%d%d%d%d", &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7]) != EOF)
//	{
//		for (int i = 1; i<7; i++)
//		{
//			for (int j = 1; j<7; j++)
//			{
//				if (a[j + 1] >= a[j])
//				{
//					temp = a[j + 1];
//					a[j + 1] = a[j];
//					a[j] = temp;
//				}
//			}
//		}
//		for (int i = 1; i <= 7; i++)
//		{
//			if (i != 1 && i != 7)
//			{
//				count += a[i];
//			}
//		}
//		printf("%.2f\n", count / 5.0);
//		count = 0;  
//	}
//}


//int main()
//{
//	int a = 0;
//	int min = 101;
//	int max = 0;
//	int sum = 0;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a>max)
//		{
//			max = a;
//		}
//		if (a<min)
//		{
//			min = a;
//		}
//		sum += a;
//	}
//	float c = (sum - max - min) / 5.0;
//	printf("%.2f", c);
//	return 0;
//}







//int main()
//{
//	for (int i = 10000; i < 100000; i++)
//	{
//		if (i == ((i / 10000)*(1 % 10000)) + ((i / 1000)*(1 % 1000)) + ((i / 100)*(1 % 100)) + ((i / 10)*(1 % 10)))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}








//int main()
//{
//	int m, n;
//	while (scanf("%d%d", &m, &n)!=EOF)
//	{
//		getchar();
//		int i = 0;
//		int count = 0;
//		for (i = m; i <= n; i++)
//		{
//			int tmp = i;
//			int j = 0;
//			while (tmp)
//			{
//				j = j + (int)pow(tmp % 10, 3);
//				tmp = tmp / 10;
//			}
//			if (i == j)
//			{
//				printf("%d ", i);
//				count++;
//			}
//		}
//		if (count == 0)
//		{
//			printf("no\n");
//		}
//	}
//	return 0;
//}








//void test()
//{
//	ListNode*ps = NULL;
//	ListNode*p2 = NULL;
//	Back(&ps, 1);
//	Back(&ps, 2);
//	Back(&ps, 3);
//	Back(&p2, 2);
//	Back(&p2, 3);
//	Back(&p2, 4);
//	//ListNode*ret = resever(ps);
//	//ListNode*ret = middle(ps);
//	ListNode*ret= mergetwo(ps, p2);
//	Print(ret);
//}
//int main()
//{
//	test();
//	return 0;
//}