#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	float a, b, c;
//	scanf("%f%f%f", &a, &b, &c);
//	float f = (a + b + c)/2;
//	float area = (float)sqrt(f*(f - a)*(f - b)*(f - c));
//	printf("circumference=%.2f area=%.2f", a + b + c, area);
//	return 0;
//}







//int main()
//{
//	int n = 0;
//	float max = 0;
//	float small = 101;
//	float mid = 0;
//	float f;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%f", &f);
//		max = max>f ? max : f;
//		small = small>f ? f : small;
//		mid += f;
//	}
//	printf("%.2f %.2f %.2f", max, small, mid / n);
//	return 0;
//}





//int main()
//{
//	long int i = 0;
//	scanf("%d", &i);
//	long int a = i*3.156*(int)pow(10, 7);
//	printf("%ld", a);
//	return 0;
//}





//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	printf("%d", 2 << (i-1));
//	return 0;
//}







//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a > 3600)
//	{
//		printf("%d %d %d", a / 3600, a % 3600 / 60, a % 3600 % 60);
//	}
//	else if (a >= 60 &&a <= 3600)
//	{
//		int hour = 0;
//		printf("%d %d %d", hour, a / 60, a % 60);
//	}
//	else
//	{
//		int hour = 0;
//		int min = 0;
//		printf("%d %d %d", hour, min, a);
//	}
//	return 0;
//}






//int main()
//{
//	int a,b;
//	scanf("%d%d", &a,&b);
//	int c = a + b;
//	while (c>7)
//	{
//		c = c % 7;
//	}
//	if (c == 0)
//	{
//		printf("7");
//	}
//	else
//	{
//		printf("%d", c);
//	}
//	return 0;
//}






//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int b = a % 100 / 10;
//	printf("%d", b);
//	return 0;
//}




//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", a%10);
//	return 0;
//}





//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d %d", a/b,a%b);
//	return 0;
//}



//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d", x * 100);
//	return 0;
//}





//int main()
//{
//	float f;
//	scanf("%f", &f);
//	int a = (int)f;
//	printf("%d", a % 10);
//	return 0;
//}


//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d", a % b);
//	return 0;
//}






//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d", a / b);
//	return 0;
//}





//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}







//int main()
//{
//	int a, b;
//	scanf("%x%o", &a, &b);
//	printf("%d", a + b);
//	return 0;
//}








//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d%8d%8d", a, b, c);
//	return 0;
//}




//int main()
//{
//	int a;
//	char b;
//	float c;
//	scanf("%c%d%f", &b, &a, &c);
//	printf("%c %d %.6f", b, a, c);
//	return 0;
//}





//int main()
//{
//	int a = 1234;
//	printf("%#o %#X", a,a);
//	return 0;
//}





//int main()//16进制到10进制
//{
//	int a = 0xABCDEF;
//	printf("%15d\n", a);
//	return 0;
//}






//void sever(int*arr1, int*arr2, int m, int n)//按照数字大小排序
//{
//	int end1 = m - 1;
//	int end2 = n - 1;
//	int end = m + n - 1;
//	while (end1 >= 0 && end2 >= 0)
//	{
//		if (arr1[end1] > arr2[end2])
//		{
//			arr1[end] = arr1[end1];
//			end--;
//			end1--;
//		}
//		else
//		{
//			arr1[end] = arr2[end2];
//			end2--;
//			end--;
//		}
//	}
//	while (end2 >= 0)
//	{
//		arr1[end] = arr2[end2];
//		end2--;
//		end--;
//	}
//}
//int main()
//{
//	int arr1[] = { 1, 2, 3, 0, 0, 0 };
//	int arr2[] = { -2, -5, 6 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	sever(arr1, arr2, 3, 3);
//	int i = 0;
//	for (i = 0; i < sz1; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}







//int  search(int*arr, int k, int sz)//覆盖所要寻找的值
//{
//	int i = 0;
//	int j = 0;
//	while (i<sz)
//	{
//		if (arr[i] != k)
//		{
//			arr[j] = arr[i];
//			j++;
//			i++;
//		}
//		else
//		{
//			i++;
//		}
//	}
//	return j;
//}
//int main()
//{
//	int arr[] = { 1, 2, 2, 3, 4, 5, 2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 2;
//	int ret = search(arr, k, sz);
//	for (int i = 0; i < ret; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}







//void sever(int*arr, int left, int right)//从右边移动3个数到左边
//{
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void move(int*arr, int k, int sz)
//{
//	sever(arr, 0, sz - k - 1);
//	sever(arr, sz - k, sz-1);
//	sever(arr, 0, sz-1);
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int k = 3;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, k, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}







//int find(int*arr, int sz)//寻找一个数
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		sum ^= i;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		sum ^= arr[i];
//	}
//	return sum;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 0, 10, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = find(arr, sz);
//	printf("%d\n", ret);
//	return 0;
//}