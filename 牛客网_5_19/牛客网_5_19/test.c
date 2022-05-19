#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
#include<stdio.h>
int main()
{
	int i;
	scanf("%d", &i);
	int j = 0;
	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}
	return 0;
}






//int main()
//{
//	int x, i, r;
//	scanf("%d%d%d", &x, &i, &r);
//	if (x >= i && x <= r)
//	{
//		printf("true\n");
//	}
//	else
//	{
//		printf("false\n");
//	}
//	return 0;
//}







//int main()
//{
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		getchar();
//		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A'
//			|| ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//		{
//			printf("Vowel\n");
//		}
//		else
//		{
//			printf("Consonant\n");
//		}
//	}
//	return 0;
//}




//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		if (a % 2 == 1)
//		{
//			printf("Odd\n");
//		}
//		else
//		{
//			printf("Even\n");
//		}
//	}
//	return 0;
//}





//int main()
//{
//		int a;
//		while (scanf("%d", &a) != EOF)
//		{
//			if (a >= 60)
//			{
//				printf("Pass");
//			}
//			else
//			{
//				printf("Fail");
//			}
//		}
//	return 0;
//}









//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a >= 140)
//	{
//		printf("Genius");
//	}
//	return 0;
//}






//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int c = (a + b) % 100;
//	if (c / 10 == 0)
//	{
//		printf("%d\n", c % 10);
//	}
//	else
//	{
//		printf("%d\n", c);
//	}
//	return 0;
//}





//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d\n", &a, &b);
//	scanf("%d%d", &c, &d);
//	printf("%d\n", (a - c)*(a - c) + (b - d)*(b - d));
//	return 0;
//}







//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("%d\n", (a + b - c)*d);
//	return 0;
//}





//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d",&a, &b, &c, &d);
//	printf("%.1lf", 0.2*a + 0.1*b + 0.2 * c + 0.5 *d);
//	return 0;
//}





//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 0;
//	while (n)
//	{
//		int w = n % 10;
//		if (w % 2 == 1)
//		{
//			w = 1;
//		}
//		else
//		{
//			w = 0;
//		}
//		ret = ret + w*pow(10, i++);
//		n = n / 10;
//	}
//	printf("%d\n", ret);
//	return 0;
//}






//int main()
//{
//	long long a, b;
//	scanf("%d%d", &a, &b);
//	long long c = a*b;
//	while (b != 0)
//	{
//		long long tmp = a%b;
//		a = b;
//		b = tmp;
//	}
//	printf("%lld\n", a + c / a);
//	return 0;
//}








//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i >= 12)
//	{
//		printf("%d", (i / 12) * 4 + 2);
//	}
//	else
//	{
//		printf("2");
//	}
//	return 0;
//}







//int main()
//{
//	int h, m, k;
//	scanf("%d:%d%d", &h, &m, &k);
//	h = (h + (m + k) / 60) % 24;
//	m = (m + k) % 60;
//	printf("%#02d:%#02d\n", h, m);
//	return 0;
//}







//int main()
//{
//	int r;
//	scanf("%d", &r);
//	printf("%.2lf\n", 4 * 3.14*r*r*r / 3);
//	return 0;
//}




//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int c = (b - a) + b;
//	printf("%d\n", c);
//	return 0;
//}







//int main()
//{
//	int h, r;
//	scanf("%d%d", &h, &r);
//	double v = 3.14*h*r*r;
//	if (10000 / v == 0)
//	{
//		printf("%d", (int)10000 / v);
//	}
//	else
//	{
//		printf("%d", (int)(10000 / v + 1));
//	}
//	return 0;
//}




//int main()
//{
//	int i, j;
//	scanf("%d%d",&i,&j);
//	double f = 1.0 / (1.0 / i + 1.0 / j);
//	printf("%0.1lf", f);
//	return 0;
//}





//int main()
//{
//	double p = 3.14;
//	int a = 0;
//	scanf("%d", &a);
//	printf("%0.2lf", p*a*a);
//	return 0;
//}







//int main()
//{
//	double c = 0;
//	scanf("%lf", &c);
//	double f = 0.0;
//	f = 5.0 / 9 * (c - 32);
//	printf("%.3lf\n", f);
//	return 0;
//}





//int main()
//{
//	int n, h, m;
//	scanf("%d%d%d", &n, &h, &m);
//	if (m%h == 0)
//	{
//		int left = m / h;
//		printf("%d\n", n - left);
//	}
//	else
//	{
//		int left = m / h + 1;
//		printf("%d\n", n - left);
//	}
//	return 0;
//}





//void test1()
//{
//	List ps;
//	init(&ps);
//	PushBack(&ps, 1);
//	PushBack(&ps, 2);
//	PushBack(&ps, 3);
//	PushBack(&ps, 6);
//	PushBack(&ps, 4);
//	PushFront(&ps, 5);
//	PopBack(&ps);
//	PopFront(&ps);
//	Insert(&ps, 2, 20);
//	Erase(&ps, 3);
//	Print(&ps);
//	int ret = Find(&ps, 20);
//	printf("%d\n", ret);
//	Modify(&ps, 3, 20);
//	Print(&ps);
//}
//void menu()//顺序表
//{
//	printf("************************************************\n");
//	printf("         1.PushBack         2.PushFront         \n");
//	printf("         3.PopBack          4.PopFront          \n");
//	printf("         5.Insert           6.Erase             \n");
//	printf("         7.Find             8.Modify            \n");
//	printf("         9.Print            0.Exit              \n");
//	printf("************************************************\n");
//}
//void test()
//{
//	int input = 0;
//	List ps;
//	Init(&ps);
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
//					PushBack(&ps, x);
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
//					PushFront(&ps, x);
//				}
//			} while (x != -1);
//			break;
//		case Pop1:
//			PopBack(&ps);
//			break;
//		case Pop2:
//			PopFront(&ps);
//			break;
//		case insert:
//			printf("请输入坐标以及要插入的数据\n");
//			scanf("%d%d", &y, &x);
//			Insert(&ps, y, x);
//			break;
//		case erase:
//			printf("请输入删除坐标\n");
//			scanf("%d", &x);
//			Erase(&ps, x);
//			break;
//		case find:
//			printf("请输入要寻找数据的位置\n");
//			scanf("%d", &x);
//			int ret = Find(&ps, x);
//			printf("坐标为:%d\n", ret);
//			break;
//		case modify:
//			printf("请输入修改的坐标以及数据\n");
//			scanf("%d%d", &y, &x);
//			Modify(&ps, y, x);
//			break;
//		case print:
//			Print(&ps);
//			break;
//		case EXIT:
//			Defree(&ps);
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