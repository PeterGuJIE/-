#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char ch = 0;
	while ((ch = getchar()) != EOF)
	{
		getchar();
		putchar(ch + 32);
		printf("\n");
	}
	return 0;
}







//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	if (ch >= 'a'&&ch <= 'z')
//	{
//		printf("%c\n", ch - 32);
//	}
//	else if (ch >= 'A'&&ch <= 'Z')
//	{
//		printf("%c\n", ch + 32);
//	}
//	else
//	{
//		;
//	}
//	return 0;
//}



//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}







//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int year = a / 10000;
//	int month = a % 10000 / 100;
//	int date = a % 100;
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("date=%02d\n", date);
//	return 0;
//}









//int main()
//{
//	int id = 0;
//	float a, b, c;
//	scanf("%d;%f,%f,%f", &id, &a, &b, &c);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", id,a,b,c);
//	return 0;
//}







//int main()
//{
//	int a, b, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	printf("score1=%d,score2=%d,score3=%d", a, b, c);
//	return 0;
//}





//int main()
//{
//	float f = 0;
//	scanf("%f", &f);
//	if (f >= 0)
//	{
//		double a = f;
//		if (f + 0.5 >= a + 1.0)
//		{
//			printf("%.0lf", a+1);
//		}
//		else
//		{
//			printf("%.0lf", a);
//		}
//	}
//	else
//	{
//		double a = f;
//		if (f - 0.5 <= a - 1.0)
//		{
//			printf("%.0lf", a - 1);
//		}
//		else
//		{
//			printf("%.0lf", a);
//		}
//	}
//	return 0;
//}







//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%d\n", ch);
//	return 0;
//}









//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		for (j = 1; j <= 3-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= 2; i++)
//	{
//		for (j = 0; j <i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (3 - i)-1; j++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}










//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	char arr[3][3] = { 0 };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			arr[i][j] = ch;
//			printf("%c", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}




//int main()
//{
//	int a,b,c = 0;
//	scanf("%d %d %d", &a,&b,&c);
//	printf("%d\n", b);
//	return 0;
//}






//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%c\n", ch);
//	return 0;
//}





//int main()
//{
//	double f = 0;
//	scanf("%lf", &f);
//	printf("%0.3lf\n", f);
//	return 0;
//}






//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d", i);
//	return 0;
//}
//
//
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *   \n");
//	printf("    *  *   \n");
//	return 0;
//}







//int main()
//{
//	printf("Hello Nowcoder!\n");
//		return 0;
//}







//void reOrderArray(int* array, int arrayLen, int* returnSize) {//JZ21 调整数组顺序使奇数位于偶数前面(一) 
//	// write code here
//	int i = 0;
//	for (i = 0; i < arrayLen; i++)
//	{
//		int j = 0;
//		for (j = 0; j < arrayLen; j++)
//		{
//			if (array[i] % 2 == 1 && array[j] % 2 == 0)
//			{
//				int tmp = array[i];
//				array[i] = array[j];
//				array[j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 2;
//	reOrderArray(arr, sz,&k);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}