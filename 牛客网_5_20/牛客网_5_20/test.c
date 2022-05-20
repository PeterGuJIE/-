#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
#include<stdio.h>
int main()
{
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	if (a == 0)
	{
		printf("Not quadratic equation");
	}
	else
	{
		float f = b*b - 4 * a*c;
		if (f == 0)
		{
			float d = -b + sqrt(f) / 2.0 / a;
			if (d == 0)
			{
				printf("x1=x2=0.00\n");
			}
			printf("x1=x2=%.2f\n", (-b + sqrt(f) / 2.0 / a));
		}
		else if (f > 0)
		{
			printf("x1=%.2f;x2=%.2f\n", (-b - sqrt(f)) / 2.0 / a, (-b + sqrt(f)) / 2.0 / a);
		}
		else
		{
			printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", -b / (2 * a), sqrt(-f) / (2 * a), -b / (2 * a), sqrt(-f) / (2 * a));
		}
	}
	return 0;
}





//int main()
//{
//	int a, b, c, x, y, z;
//	scanf("%d%d%d%d%d%d", &a, &b, &c, &x, &y, &z);
//	if (a < x || (a == x&&b < y) || (a == x&&b == y&&c < z) || (a == x&&b == y&&c == z))
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}






//int main()
//{
//	int a, b, c;
//	while (scanf("%d%d%d", &a, &b, &c)!=EOF)
//	{
//		getchar();
//		if ((a + b) > c && (a - b) < c)
//		{
//			if (a == b&&b == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (a == b || a == c || b == c)
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}









//int main()
//{
//	int a;
//	while (scanf("%d", &a) != EOF)
//	{
//		getchar();
//		if (a > 0)
//		{
//			printf("1\n");
//		}
//		else if (a == 0)
//		{
//			printf("0.5\n");
//		}
//		else
//		{
//			printf("0\n");
//		}
//	}
//	return 0;
//}






//int main()
//{
//	int a = 0;
//	while (scanf("%d", &a)!=EOF)
//	{
//		getchar();
//		switch (a)
//		{
//		case 200:
//			printf("OK\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n");
//			break;
//		case 403:
//			printf("Forbidden\n");
//			break;
//		case 404:
//			printf("Not Found\n");
//			break;
//		case 500:
//			printf("Internal Server Error\n");
//			break;
//		case 502:
//			printf("Bad Gateway\n");
//			break;
//		default:
//			break;
//		}
//	}
//	return 0;
//}





//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("Monday");
//		break;
//	case 2:
//		printf("Tuesday");
//		break;
//	case 3:
//		printf("Wednesday");
//		break;
//	case 4:
//		printf("Thursday");
//		break;
//	case 5:
//		printf("Friday");
//		break;
//	case 6:
//		printf("Saturday");
//		break;
//	case 7:
//		printf("Sunday");
//		break;
//	default:
//		break;
//	}
//	return 0;
//}







//int main()
//{
//	int x, y, x1, y1;
//	scanf("%d%d", &x, &y);
//	scanf("%d%d", &x1, &y1);
//	if (x1 == x)
//	{
//		y1 > y ? printf("u") : printf("d");
//	}
//	else
//	{
//		x1 > x ? printf("r") : printf("l");
//	}
//	return 0;
//}







//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = n / 1;
//	int b = n / 10 + 10;
//	char c = 'w';
//	char d = 'v';
//	printf("%c", a < b ? c : d);
//	return 0;
//}






//int main()
//{
//	float a;
//	scanf("%f", &a);
//	if (a < 100)
//	{
//		printf("%.1f", a);
//	}
//	else if (a >= 100 && a < 500)
//	{
//		printf("%.1f", a*0.9);
//	}
//	else if (a >= 500 && a < 2000)
//	{
//		printf("%.1f", a*0.8);
//	}
//	else if (a >= 2000 && a < 5000)
//	{
//		printf("%.1f", a*0.7);
//	}
//	else
//	{
//		printf("%.1f", a*0.6);
//	}
//	return 0;
//}








//int main()
//{
//	float a;
//	char b;
//	int sum = 0;
//	scanf("%f%c", &a, &b);
//	if (a > 1)
//	{
//		sum = ((a - (int)a) > 0 ? (int)a : (int)(a - 1)) + 20;
//	}
//	else
//	{
//		sum = 20;
//	}
//	if (b == 'y')
//	{
//		printf("%d\n", sum + 5);
//	}
//	else
//	{
//		printf("%d\n", sum);
//	}
//	return 0;
//}










//int main()
//{
//	float a, b;
//	int q, w, e;
//	scanf("%f %d %d %d", &a, &q, &w, &e);
//
//	if (q == 11 && w == 11)
//	{
//		if (e == 1)
//			b = a*0.7 - 50;
//		else
//			b = a*0.7;
//	}
//	else
//	{
//		if (e == 1)
//			b = a*0.8 - 50;
//		else
//			b = a*0.8;
//	}
//	if (b > 0)
//		printf("%.2f", b);
//	else
//		printf("%.2f", 0);
//	return 0;
//}






//int main()
//{
//	int arr[10] = { 0 };
//	int count1 = 0;
//	int count2 = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i]>0)
//		{
//			count1++;
//		}
//		else
//		{
//			count2++;
//		}
//	}
//	printf("positive:%d\nnegative:%d", count1, count2);
//	return 0;
//}





//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//	{
//		printf("2 ");
//	}
//	if (n % 3 == 0)
//	{
//		printf("3 ");
//	}
//	if (n % 7 == 0)
//	{
//		printf("7 ");
//	}
//	if (n % 7 != 0 && n % 3 != 0 && n % 2 != 0)
//	{
//		printf("n ");
//	}
//	return 0;
//}





//int main()
//{
//	char ch;
//	while (scanf("%c", &ch) != EOF)
//	{
//		getchar();
//		if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z'))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//	}
//	return 0;
//}








//int main()
//{
//	int ch = 0;
//	int n = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		scanf("%d", &ch);
//		if (ch>n)
//		{
//			n = ch;
//		}
//	}
//	printf("%d", n);
//	return 0;
//}






//int main()
//{
//	double w, h;
//	scanf("%lf %lf", &w, &h);
//	double BMI = w / (h*h);
//	if (BMI >= 18.5&&BMI <= 23.9)
//	{
//		printf("Normal\n");
//	}
//	else
//	{
//		printf("Abnormal\n");
//	}
//	return 0;
//}






//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = n % 100;
//	printf("%d", a);
//	if (a >= 3 && a <= 5)
//	{
//		printf("spring\n");
//	}
//	else if (a >= 6 && a <= 8)
//	{
//		printf("summer\n");
//	}
//	else if (a >= 9 && a <= 11)
//	{
//		printf("autumn\n"); 
//	}
//	else
//	{
//		printf("winter\n");
//	}
//	return 0;
//}






//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z'))
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}






//void test1()
//{
//	ListNode*ps = NULL;
//	PushBack(&ps, 1);
//	PushBack(&ps, 2);
//	PushBack(&ps, 3);
//	PushBack(&ps, 3);
//	PushBack(&ps, 4);
//	PushFront(&ps, 3);
//	PopFront(&ps);
//	PopBack(&ps);
//	Print(ps);
//	ListNode*pos = Find(ps, 2);
//	if (pos != NULL)
//	{
//		Insert(&ps, pos, 30);
//	}
//	pos = Find(ps, 3);
//	if (pos != NULL)
//	{
//		Erase(&ps, pos);
//	}
//	Print(ps);
//
//}
//void menu()//单向不循环链表
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
//	ListNode*ps = NULL;
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
//			printf("请输入要寻找的数字\n");
//			scanf("%d", &x);
//			ListNode*pos = Find(ps, x);
//			if (pos != NULL)
//			{
//				printf("存在数字，请输入要插入数字\n");
//				scanf("%d", &x);
//				Insert(&ps, pos, x);
//			}
//			else
//			{
//				printf("不存在数字\n");
//			}
//			break;
//		case erase:
//			printf("请输入要删除的数字\n");
//			scanf("%d", &x);
//			pos = Find(ps, x);
//			if (pos != NULL)
//			{
//				Erase(&ps, pos);
//			}
//			else
//			{
//				printf("不存在数字\n");
//			}
//			break;
//		case print:
//			Print(ps);
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