#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
#include<stdio.h>
int main()
{
	int n;
	int count = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		int a = 0;
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &a);
			sum += a;
		}
		if (sum<180)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}






//int main()
//{
//	int count = 0;
//	for (int i = 1; i <= 2019; i++)
//	{
//		if (i % 10 == 9 || (i / 10) % 10 == 9 || (i / 100) % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}





//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int count = 0;
//	while (n != 1)
//	{
//		if (n % 2 == 0)
//		{
//			n = n / 2;
//		}
//		else
//		{
//			n = n * 3 + 1;
//		}
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}








//int main()
//{
//	int n = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d", &n);
//	while (n > 0)
//	{
//		a = n % 10;
//		b += a;
//		n /= 10;
//	}
//	printf("%d", b);
//	return 0;
//}








//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = 0;
//	int sn = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//		sn += sum;
//	}
//	printf("%d", sn);
//	return 0;
//}








//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double d = 0;
//	int s = 1;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += s*(2 * i - 1);
//		d += 1.0 / sum;
//		s = -s;
//	}
//	printf("%.3lf", d);
//	return 0;
//}








//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double d = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		d += 1.0 / i;
//	}
//	printf("%.6lf", d);
//	return 0;
//}








//int main()
//{
//	int i;
//	scanf("%d", &i);
//	int sum = 0;
//	for (int n = 1; n <= i; n++)
//	{
//		if (n % 2 == 0)
//		{
//			sum -= n;
//		}
//		else
//		{
//			sum += n;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}







//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}








//int main()
//{
//	int n = 0;
//	int count = 0;
//	for (int i = 100; i < 1000; i++)
//	{
//		for (n = 2; n < i; n++)
//		{
//			if (i % n == 0)
//			{
//				break;
//			}
//		}
//		if (n == i)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}







//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//	{
//		printf("%d %d\n", n / 2, n / 2);
//	}
//	else
//	{
//		printf("%d %d\n", (n / 2) + 1, n / 2);
//	}
//	return 0;
//}






//int main()
//{
//	int i;
//	long sum = 0;
//	scanf("%d", &i);
//	for (int n = 1; n <= i; n++)
//	{
//		sum += n;
//	}
//	printf("%lld\n", sum);
//	return  0;
//}





//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		printf("Happy new year!Good luck!\n");
//	}
//	return 0;
//}








//int main()
//{
//	double a, b;
//	char ch;
//	while (scanf("%lf%c%lf", &a, &ch, &b) != EOF)
//	{
//		if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
//		{
//			if (ch == '*')
//			{
//				printf("%.4lf*%.4lf=%.4lf\n", a, b, a*b);
//			}
//			else if (ch == '-')
//			{
//				printf("%.4lf-%.4lf=%.4lf\n", a, b, a - b);
//			}
//			else if (ch == '+')
//			{
//				printf("%.4lf+%.4lf=%.4lf\n", a, b, a + b);
//			}
//			else
//			{
//				if (b == 0.0)
//					printf("Wrong!Division by zero!\n");
//				else
//					printf("%.4lf%c%.4lf=%.4lf\n", a, ch, b, a / b);
//			}
//		}
//		else
//		{
//			printf("Invalid operation!\n");
//		}
//	}
//	return 0;
//}







//int main()
//{
//	char arr[13] = { 0 };
//	scanf("%s", arr);
//	int s = 0;
//	int j = 1;
//	for (int i = 0; i < 11; i++)
//	{
//		if (arr[i] != '-')
//		{
//			s = s + (arr[i] - '0')*j;
//			j++;
//		}
//	}
//	int m = s % 11;
//	if (m == arr[12] - '0' || m == 10 && arr[12] == 'X')
//	{
//		printf("Right\n");
//	}
//	else
//	{
//		if (m == 10)
//		{
//			for (int i = 0; i < 12; i++)
//			{
//				printf("%c", arr[i]);
//			}
//			printf("X");
//		}
//		else
//		{
//			for (int i = 0; i < 12; i++)
//			{
//				printf("%c", arr[i]);
//			}
//			printf("%d",m);
//		}
//	}
//	return 0;
//}








//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (((a + b + c) / 3) >= 60)
//	{
//		printf("NO\n");
//	}
//	else
//	{
//		printf("YES\n");
//	}
//	return 0;
//}








//int main()
//{
//	int a, b,c;
//	while (scanf("%d%d", &b, &a)!=EOF)
//	{
//		getchar();
//		if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
//		{
//			c = 31;
//		}
//		else if (a == 4 || a == 6 || a == 9 || a == 11)
//		{
//			c = 30;
//		}
//		else if (b % 100 != 0 && b % 4 == 0 || b % 400 == 0)
//		{
//			c = 29;
//		}
//		else
//		{
//			c = 28;
//		}
//		printf("%d\n", c);
//	}
//	return 0;
//}





//void test()
//{
//	Dlist*ps = Init();
//	PushBack(ps, 1);
//	PushBack(ps, 2);
//	PushBack(ps, 3);
//	PushBack(ps, 4);
//	PushBack(ps, 3);
//	PushFront(ps, 4);
//	PopBack(ps);
//	PopFront(ps);
//	Print(ps);
//	Dlist*pos = Find(ps,2);
//	if (pos != NULL)
//	{
//		pos->data *= 10;
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("%s\n",pos);
//	}
//	Insert(ps, pos, 300);
//	Print(ps);
//	Erase(ps, pos);
//	Print(ps);
//	Defree(ps);
//}

//void menu()//双向循环链表
//{
//	printf("************************************************\n");
//	printf("         1.PushBack         2.PushFront         \n");
//	printf("         3.PopBack          4.PopFront          \n");
//	printf("         5.Insert           6.Erase             \n");
//	printf("         7.Print            0.Exit              \n");
//	printf("************************************************\n");
//}
//void test()
//{
//	int input = 0;
//	Dlist*ps = Init();
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case Push1:
//			printf("请输入你要插入的数据，以-1结束\n");
//			do
//			{
//				scanf("%d", &x);
//				if (x != -1)
//				{
//					PushBack(ps, x);
//				}
//			} while (x!=-1);
//			break;
//		case Push2:
//			printf("请输入你要插入的数据，以-1结束\n");
//			do
//			{
//				scanf("%d", &x);
//				if (x != -1)
//				{
//					PushFront(ps, x);
//				}
//			} while (x != -1);
//			break;
//		case Pop1:
//			PopBack(ps);
//			break;
//		case Pop2:
//			PopFront(ps);
//			break;
//		case insert:
//			printf("请输入要寻找的数字\n");
//			scanf("%d", &x);
//			Dlist*pos = Find(ps, x);
//			if (pos != NULL)
//			{
//				printf("存在数字，请输入要插入数字\n");
//				scanf("%d", &x);
//				Insert(ps, pos, x);
//			}
//			else
//			{
//				printf("%s\n",pos);
//			}
//			break;
//		case erase:
//			printf("请输入要删除的数字\n");
//			scanf("%d", &x);
//			pos = Find(ps, x);
//			if (pos != NULL)
//			{
//				Erase(ps, pos);
//			}
//			else
//			{
//				printf("%s\n", pos);
//			}
//			break;
//		case print:
//			Print(ps);
//			break;
//		case EXIT:
//			Defree(ps);
//			break;
//		default:
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}