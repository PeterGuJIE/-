#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//long long  Prime(long long n)
//{
//	long long a = n;
//	while (a>9)
//	{
//		a /= 10;
//		n = n * 10 + a % 10;
//	}
//	return n;
//}
//int is_Prime(long long count)
//{
//	long long  i = 0;
//	for (i = 2; i <= sqrt(count); i++)
//	{
//		if (count%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	long long n;
//	scanf("%lld", &n);
//	long long count = Prime(n);
//	int ret = is_Prime(count);
//	if (ret == 1)
//		printf("prime");
//	else
//		printf("noprime");
//	return 0;
//}











//int Sum(int sum1, int sum2)
//{
//	if (sum1 >= sum2)
//		return sum1 - sum2;
//	else
//		return sum2 - sum1;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int i, j;
//	int arr1[50];
//	int arr2[50];
//	int sum1 = 0,sum2=0;
//	int begin, end;
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d",&arr1[i]);
//		sum1 += arr1[i];
//	}
//	for (j = 0; j < b; j++)
//	{
//		scanf("%d", &arr2[j]);
//		
//	}
//	int min = sum1;
//	for (i = 0; i < b; i++)
//	{
//		sum2 = arr2[i];
//		for (j = 0; j < b; j++)
//		{
//			if (Sum(sum1, sum2) < min)
//			{
//				min = Sum(sum1, sum2);
//				begin = i;
//				end = j;
//			}
//			sum2 += arr2[j+1];
//		}
//	}
//	for (i = begin; i < end; i++)
//	{
//		printf("%d",arr2[i]);
//	}
//	return 0;
//}









//int main()
//{
//	int a, b;
//	int i,j;
//	int sum = 0;
//	scanf("%d%d", &a, &b);
//	for (i = a; i <= b; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if ((i%j) == 0)
//				break;
//		}
//		if (j == i)
//		{
//			sum += i;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}








//int main()
//{
//	int a, b;
//	scanf("%d", &a);
//	int i = 0;
//	int sum = 0;
//	int count = 0;
//	for (i = 0; i < a; i++)
//	{
//		scanf("%d ", &b);
//		if (b>60)
//		{
//			sum++;
//		}
//		else{
//			count++;
//		}
//	}
//	printf("%.1f", 0.1*count + sum*0.2);
//	return 0;
//}







//int Count(int i)
//{
//	int count = 0;
//	while (i)
//	{
//		Count(i / 10);
//		if (i % 10 == 2)
//		{
//			count++;
//		}
//		i = i / 10;
//	}
//	return count;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int count = 0;
//	for (int i = a; i <= b; i++)
//	{
//		count += Count(i);
//	}
//	printf("%d ", count);
//	return 0;
//}










//int SUM(int a)
//{
//	if (a < 9)
//		return a;
//	else
//		return SUM(a / 10) + a % 10;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int sum = 0;
//	while (a>9)
//	{
//		if (a >9)
//		{
//			a = SUM(a);
//			sum = a;
//		}
//		else
//		{
//			break;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}










//int SUM(int a)
//{
//	if (a < 9)
//		return a;
//	else
//		return SUM(a / 10) + a % 10;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int sum = 0;
//	int count;
//	for (int i = a; i <= b; i++)
//	{
//		sum = SUM(i);
//		if (sum%5==0)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}








//int max3(int a, int b, int c)
//{
//	if (a >= b&&a >= c)
//		return a;
//	else if (b >= a&&b >= c)
//		return b;
//	else
//		return c;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	float a1, b1, c1;
//	a1 = max3(a+b,b,c);
//	b1 = max3(a, b + c, c);
//	c1 = max3(a, b, b + c);
//	printf("%.2f", a1 / (b1 + c1));
//	return 0;
//}













//void Swap(int*a, int*b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void AdjustDown(int *arr,int sz,int i)
//{
//	int parent = i;
//	int child = parent * 2 + 1;
//	while (child<sz)
//	{
//		if (child + 1<sz && arr[child + 1] > arr[child])
//		{
//			child += 1;
//		}
//		if (arr[child] > arr[parent])
//		{
//			Swap(&arr[child], &arr[parent]);
//			parent = child;
//			child = parent * 2 + 1;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//
//void HeapSort(int *arr, int sz)
//{
//	for (int i = (sz - 1 - 1) / 2; i >= 0; i--)
//	{
//		AdjustDown(arr, sz, i);
//	}
//	int end = sz - 1;
//	while (end > 0)
//	{
//		Swap(&arr[0], &arr[end]);
//		AdjustDown(arr, end, 0);
//		end--;
//	}
//}
//void Print(int *arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 5,10,3,7,8,9,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	HeapSort(arr, sz);
//	Print(arr, sz);
//	return 0;
//}







//void ShelltSort(int *arr, int sz)
//{
//	int gap = 3;
//	while (gap > 1)
//	{
//		gap /= 2;
//		for (int i = 0; i < sz-gap; i++)
//		{
//			int end = i;
//			int tmp = arr[end + gap];
//			while (end >= 0)
//			{
//				if (arr[end]>tmp)
//				{
//					arr[end + gap] = arr[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			arr[end + gap] = tmp;
//		}
//	}
//}
//void Print(int *arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 5,10,3,7,8,9,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	ShelltSort(arr, sz);
//	Print(arr, sz);
//	return 0;
//}














//void InsertSort(int *arr, int sz)
//{
//	int i;
//	for (i = 0; i < sz-1; i++)
//	{
//		int end = i;
//		int tmp = arr[end + 1];
//		while (end >= 0)
//		{
//			if (arr[end]>tmp)
//			{
//				arr[end + 1] = arr[end];
//				end--;
//			}
//			else
//			{
//				break;
//			}
//		}
//		arr[end + 1] = tmp;
//	}
//}
//void Print(int *arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 5, 3, 1, 7, 9, 2, 5, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	InsertSort(arr, sz);
//	Print(arr, sz);
//	return 0;
//}