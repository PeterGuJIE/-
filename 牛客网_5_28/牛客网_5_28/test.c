#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Ackmann(int n, int m)
{
	if (m == 0)
	{
		n += 1;
		return n;
	}
	else if (n == 0 && m > 0)
		return Ackmann(m, 1);
	else
		return Ackmann(m - 1, Ackmann(m, n - 1));
}
int main()
{
	long long n, m;
	scanf("%lldll%d", &n, &m);
	long long ret = Ackmann(n, m);
	printf("%lld", ret);
	return 0;
}








//int Sum(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n + Sum(n - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int sum = Sum(n);
//	printf("%d", sum);
//	return 0;
//}





//long long factorial(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n*factorial(n - 1);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	long long ret = factorial(n);
//	printf("%lld ", ret);
//	return 0;
//}








//int Step(int n)
//{
//	if (n == 1)
//		return 1;
//	else if (n == 2)
//		return 2;
//	else
//		return Step(n - 1) + Step(n - 2);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int count = Step(n);
//	printf("%d", count);
//	return 0;
//}








//int main()
//{
//	int n,m;
//	scanf("%d", &n);
//	while (n)
//	{
//		int i = 0, j = 0;
//		scanf("%d", &m);
//		while (m)
//		{
//			if (m % 2 != 0)
//				i++;
//			else
//				j++;
//			m = m / 2;
//		}
//		if (i % 2 == 0 && j % 2 != 0)
//			printf("1 ");
//		else if (i % 2 != 0 && j % 2 == 0)
//			printf("0 ");
//		else if (i % 2 == 0 && j % 2 == 0)
//			printf("10 ");
//		else
//			printf("100 ");
//		n--;
//	}
//	return 0;
//}







//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	for (int i = n; i <= m; i++)
//	{
//		int tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			int ret = tmp % 10;
//			sum = sum + pow(ret, 4);
//			tmp = tmp / 10;
//		}
//		if (i == sum)
//			printf("%d ", sum);
//	}
//	return 0;
//}









//int main()
//{
//	int n;
//	char a, b, c, d;
//	scanf("%d %c %c %c %c", &n, &a, &b, &c, &d);
//	char arr[50];
//	scanf("%s", arr);
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] == a)
//		{
//			arr[i] = b;
//		}
//		else if (arr[i] == c)
//		{
//			arr[i] = d;
//		}
//		printf("%c", arr[i]);
//	}
//	return 0;
//}






//int is_prime(int m)
//{
//	int i;
//	for (i = 2; i < m; i++)
//	{
//		if (m%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n,m,i;
//	scanf("%d", &n);
//	while (n)
//	{
//		scanf("%d", &m);
//		int ret = is_prime(m);
//		if (ret ==1 )
//		{
//			printf("true\n");
//		}
//		else
//		{
//			printf("false\n");
//		}
//		n--;
//	}
//	return 0;
//}





//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int sum = 1;
//		for (int i = 0; i < n; i++)
//		{
//			sum = sum * 3;
//		}
//		printf("%d\n", sum-1);///汉诺塔原来是找规律题 n==1 3-1；n==2 3*3-1
//	}
//	return 0;
//}








//int main()
//{
//	long long  t, n;
//	scanf("%lld", &t);
//	while (t--)
//	{
//		long long sum = 0;
//		long long num = 0;
//		scanf("%lld", &n);
//		while (n)
//		{
//			if (n & 1)
//			{
//				sum++;
//			}
//			n = n >> 1;
//		}
//		for (long long i = 0; i < sum; i++)
//		{
//			num = num * 2 + 1;
//		}
//		printf("%lld %lld\n", sum, num);
//	}
//	return 0;
//}






//int main()
//{
//	int n,a;
//	scanf("%d", &n);
//	int max = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d ", &a);
//		int m = sqrt(a);
//		if (a != m*m&&a>max)
//			max = a;
//	}
//	printf("%d", max);
//	return 0;
//}







//void QuickSort(int*a, int left, int right)
//{
//	if (left >= right)
//		return;
//	int begin = left;
//	int end = right;
//	int pivot = begin;
//	int key = a[pivot];
//	while (begin<end)
//	{
//		while (begin<end&&a[end] >= key)
//		{
//			end--;
//		}
//		a[pivot] = a[end];
//		pivot = end;
//		while (begin<end&&a[begin] <= key)
//		{
//			begin++;
//		}
//		a[pivot] = a[begin];
//		pivot = begin;
//	}
//	pivot = begin;
//	a[pivot] = key;
//
//	QuickSort(a, left, pivot - 1);
//	QuickSort(a, pivot +1,right );
//}
//
//void Print(int *arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 3, 5, 9, 8, 7, 1, 0, 4, 10 };
//	QuickSort(arr,0, sizeof(arr) / sizeof(int)-1);
//	Print(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}










//void Swap(int*a, int*b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void BubbleSort(int*a, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		int exchang = 0;
//		for (int j = 1; j < n - i; j++)
//		{
//			if (a[j - 1]>a[j])
//			{
//				Swap(&a[j - 1],& a[j]);
//				exchang = 1;
//			}
//		}
//		if (exchang == 0)
//		{
//			break;
//		}
//	}
//}
//void Print(int *arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 3, 5, 9, 8, 7, 1, 0, 4, 10 };
//	BubbleSort(arr, sizeof(arr) / sizeof(int));
//	Print(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}











//void Swap(int*a, int*b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void SelectSort(int *arr, int n)
//{
//	int begin = 0;
//	int end = n - 1;
//	while (begin < end)
//	{
//		int min = begin, max = end;
//		for (int i = begin; i <= end; i++)
//		{
//			if (arr[i] < arr[min])
//			{
//				min = i;
//			}
//			if (arr[i]>arr[max])
//			{
//				max = i;
//			}
//		}
//		Swap(&arr[begin], &arr[min]);
//		if (begin == max)
//		{
//			max = min;
//		}
//		Swap(&arr[max], &arr[end]);
//		begin++;
//		end--;
//	}
//}
//void Print(int *arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 3,5,9,8,7,1,0,4,10 };
//	SelectSort(arr, sizeof(arr) / sizeof(int));
//	Print(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}