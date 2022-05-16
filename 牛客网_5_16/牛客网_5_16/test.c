#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void printNumbers(int n, int* returnSize) {//JZ17 打印从1到最大的n位数 
	// write code here
	int i = 0;
	int len = (int)pow(10, n) - 1;
	*returnSize = len;
	int*str = (int*)malloc(len*sizeof(int));
	for (i = 1; i <= len; i++)
	{
		printf("%d ", str[i - 1] = i);
	}
}
int main()
{
	int n = 2;
	int sz = 0;
	printNumbers(n, sz);
	//int i = 0;
	//for (i = 0; i < 100; i++)
	//{
	//	printf("%d ", arr[i]);
	//};
	return 0;
}









//double Power(double base, int exponent) {//JZ16 数值的整数次方 
//	// write code here
//	if (exponent < 0)
//	{
//		return 1.0 /( Power(base, -exponent));
//	}
//	else if (exponent == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return base*Power(base, exponent - 1);
//	}
//}
//int main()
//{
//	double n = 2.1;
//	int k = 3;
//	double ret = Power(n, k);
//	printf("%lf\n", ret);
//	return 0;
//}







//int NumberOf1(int n) {//JZ15 二进制中1的个数 
//	// write code here
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n = -1;
//	int ret = NumberOf1(n);
//	printf("%d\n", ret);
//	return 0;
//}











//int cutRope(int n) {//JZ14 剪绳子 
//	// write code here
//	int i = 0;
//	int j = 0;
//	if (n <= 3)
//	{
//		return n - 1;
//	}
//	i = n / 3;
//	if ((n % 3) % 2 == 1)
//	{
//		i--;
//	}
//	j = (n - 3 * i) / 2;
//	return (int)pow(3, i)*(int)pow(2, j);
//}
//int main()
//{
//	int n = 8;
//	int ret = cutRope(n);
//	printf("%d\n", ret);
//	return 0;
//}




//int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {//JZ11 旋转数组的最小数字 
//	// write code here
//	int left = 0;
//	int right = rotateArrayLen - 1;
//	int i = 0;
//	while (left<right)
//	{
//		int mid = (left + right) / 2;
//		if (rotateArray[mid]>rotateArray[right])
//		{
//			left = mid + 1;
//		}
//		else if (rotateArray[mid] < rotateArray[right])
//		{
//			right = mid;
//		}
//		else
//		{
//			right--;
//		}
//	}
//	return left;
//}
//int main()
//{
//	int arr[] = { 3, 4, 5, 6, 1, 2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = minNumberInRotateArray(arr, sz);
//	printf("%d\n", arr[ret]);
//	return 0;
//}









//int Fibonacci(int n)//JZ10 斐波那契数列
//{
//	if (n < 3)
//		return 1;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//	int n = 6;
//	int ret = Fibonacci(n);
//	printf("%d\n", ret);
//	return 0;
//}







//char* replaceSpace(char* s) {//JZ5 替换空格
//	// write code here
//	int len = strlen(s);
//	int i = 0;
//	int j = 0;
//	char ch[500] = { 0 };
//	while (s[i] != '\0')
//	{
//		if (s[i] != ' ')
//			{
//				ch[j] = s[i];
//				j++;
//				i++;
//			}
//			else
//			{
//				ch[j] = '%';
//				ch[j + 1] = '2';
//				ch[j + 2] = '0';
//				j += 3;
//				i++;
//			}
//	}
//	printf("%s\n", ch);
//	return ch;
//}
//int main()
//{
//	char arr[] = "We Are Happy";
//	replaceSpace(arr);
//	/*printf("%s\n", arr);*/
//	return 0;
//}








//int Find(int target, int array[4][4], int arrayRowLen, int* arrayColLen) {//JZ4二维数组中的查找
//	// write code here
//	int i = 0;
//	int j = *arrayColLen - 1;
//	while (i < arrayRowLen && j >= 0)
//	{
//		if (target>array[i][j])
//		{
//			i++;
//		}
//		else if (target < array[i][j])
//		{
//			j--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return -1;
//}

//int main()
//{
//	int array[4][4] = { { 1, 2, 8, 9 }, { 2, 4, 9, 12 }, { 4, 7, 10, 13 }, { 6, 8, 11, 15 } };
//	int target = 7;
//	int y = 4;
//	int ret = Find(target, array, 4, &y);
//	printf("%d\n", ret);
//	return 0;
//}










//int duplicate(int* numbers, int numbersLen) //在一个长度为n的数组里的所有数字都在0到n-1的范围内。 
////数组中某些数字是重复的，但不知道有几个数字是重复的。也不知道每个数字重复几次。请找出数组中任意一个重复的数字。 
////例如，如果输入长度为7的数组[2,3,1,0,2,5,3]，那么对应的输出是2或者3。存在不合法的输入的话输出-1 
//{
//	// write code here
//	if (numbersLen == 0)
//		return -1;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i<numbersLen; i++)
//	{
//		int j = 0;
//		for (j = 0; j<numbersLen - 1; j++)
//		{
//			if (numbers[i] == numbers[j])
//			{
//				count++;
//			}
//		}
//		if (count == 2)
//			return numbers[i];
//	}
//	return -1;
//}
//int main()
//{
//	int numbers[] = { 2, 3, 1, 0, 2, 5, 3 };
//	int sz = sizeof(numbers) / sizeof(numbers[0]);
//	int ret = duplicate(numbers, sz);
//	printf("%d\n", ret);
//	return 0;
//}