#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	struct Node*next;
	int data;
}Node;
 void Push(Node*ps,int n)
 {
	 Node*new = (Node*)malloc(sizeof(Node));
	 new->data = n;
	 new->next = NULL;
	 if (ps == NULL)
		 ps = new;
	 else
	 {
		 Node*back = ps;
		 while (back->next != NULL)
		 {
			 back = back->next;
		 }
		 back->next = new;
	 }
 }
 void Print(Node*ps)
 {
	 Node*cur = ps->next;
	 while (cur != ps)
	 {
		 printf("%d ", cur->data);
		 cur = cur->next;
	 }
 }
 Node* Head()
 {
	 Node*phead = (Node*)malloc(sizeof(Node));
	 phead->data = 0;
	 phead->next = NULL;
	 return phead;
 }
 Node* Swap(Node*ps)
 {
	 Node*n1 = ps->next;
	 Node*n2 = ps->next->next;
	 n1->next = n2->next;
	 n2->next = n1;
	 ps->next = n2;


	 Node*back = ps;
	 Node*front1 = ps;
	 Node*front2 = ps;

	 while (back->next != NULL)
	 { 
		 back = back->next;
	 }
	 while (front1->next->next != NULL)
	 {
		 front1 = front1->next;
	 }
	 while (front2->next->next->next != NULL)
	 {
		 front2 = front2->next;
	 }
	 front1->next = ps;
	 back->next = front1;
	 front2->next = back;
	 return ps;
 }
 
 int main()
 {
	 int n,a;
	 scanf("%d", &n);
	 Node*plist = Head();
	 for (int i = 0; i < n; i++)
	 {
		 scanf("%d", &a);
		 Push(plist, a);
	 }
	 Node*ret = Swap(plist);
	 Print(plist);
	 free(plist);
	 plist = NULL;
	 return 0;
 }








// typedef struct Node
//{
//	int data;
//	struct Node*next;
// }Node;
// void Push(Node**pps,int n)
// {
//	 Node*new = (Node*)malloc(sizeof(Node));
//	 new->data = n;
//	 new->next = NULL;
//	 if (*pps == NULL)
//		 *pps = new;
//	 else
//	 {
//		 Node*back = *pps;
//		 while (back->next != NULL)
//		 {
//			 back = back->next;
//		 }
//		 back->next = new;
//	 }
// }
// void Print(Node*ps)
// {
//	 Node*cur = ps;
//	 while (cur != NULL)
//	 {
//		 printf("%d ", cur->data);
//		 cur = cur->next;
//	 }
// }
// int main()
// {
//	 int n,a;
//	 scanf("%d", &n);
//	 Node*plist = NULL;
//	 for (int i = 0; i < n; i++)
//	 {
//		 scanf("%d", &a);
//		 Push(&plist, a);
//	 }
//	 Print(plist);
//	 free(plist);
//	 plist = NULL;
//	 return 0;
// }






//void BubbleSort(int *arr, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[50];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	BubbleSort(arr, n);
//	return 0;
//}






//int Sum(int*arr, int n)
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	return sum;
//}
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	int arr[50];
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = Sum(arr, m);
//	printf("%d", sum);
//	return 0;
//}








//void Print(int m)
//{
//	if (m >= 1 && m < 10)
//		printf("%d", m);
//	else
//	{
//		printf("%d", m % 10);
//		Print(m / 10);
//	}
//}
//int main()
//{
//	int m;
//	scanf("%d", &m);
//	Print(m);
//	return 0;
//}








//int Cala(int n, int m)
//{
//	if (m == 1)
//		return n;
//	else
//		return n*Cala(n - 1, m - 1);
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int ret = Cala(n, m);
//	printf("%d", ret);
//	return 0;
//}





//int Hermite(int n, int m)
//{
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2 * n;
//	else
//		return 2 * m*Hermite(n - 1, m) - 2 * (n - 1)*Hermite(n - 2, m);
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	int ret = Hermite(n, m);
//	printf("%d", ret);
//	return 0;
//}








//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int ret = m % (int)pow(10, n);
//	printf("%d", ret);
//	return 0;
//}






//void _MergeSort(int*a, int left, int right, int*tmp)//归并排序
//{
//	if (left >= right)
//		return;
//	int mid = (left + right) / 2;
//	_MergeSort(a, left, mid, tmp); 
//	_MergeSort(a, mid + 1, right, tmp);
//
//	int begin1 = left, end1 = mid;
//	int begin2 = mid + 1, end2 = right;
//	int index = left;
//	while (begin1<=end1&&begin2<=end2)
//	{
//		if (a[begin1] < a[begin2])
//		{
//			tmp[index++] = a[begin1++];
//		}
//		else
//		{
//			tmp[index++] = a[begin2++];
//		}
//	}
//	while (begin1 <= end1)
//	{
//		tmp[index++] = a[begin1++];
//	}
//	while (begin2 <= end2)
//	{
//		tmp[index++] = a[begin2++];
//	}
//	for (int i = left; i <= right; i++)
//	{
//		a[i] = tmp[i];
//	}
//}
//void MergeSort(int *a, int n)
//{
//	int *tmp = (int*)malloc(sizeof(int)*n);
//	_MergeSort(a, 0, n - 1, tmp);
//	free(tmp);
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
//	MergeSort(arr, sizeof(arr) / sizeof(int));
//	Print(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}




//int QuickSort1(int*a, int left, int right)//左右指针法
//{
//	if (left >= right)
//		return;
//	int ret = _QuickSort(a, left, right);
//	Swap(&a[left], &a[right]);
//	int begin = left;
//	int end = right;
//	int key = begin;
//	while (left < right)
//	{
//		while (left < right&&a[end] >= a[key])
//		{
//			end--;
//		}
//		while (left < right&&a[begin] <= a[key])
//		{
//			begin++;
//		}
//		Swap(&a[begin], &a[end]);
//	}
//	Swap(&a[begin], &a[key]);
//}
//
//int QuickSort2(int*a, int left, int right)
//{
//	int ret = _QuickSort(a, left, right);
//	Swap(&a[left], &a[right]);
//	int key = left;
//	int prev = left;
//	int cur = left + 1;
//	while (cur<=right)
//	{
//		if (a[cur] < a[key] && ++prev != cur)
//		{
//			Swap(a[prev], a[cur]);
//		}
//		cur++;
//	}
//	Swap(&a[key], &a[prev]);
//	return prev;
//}
//void QuickSort(int *a, int left, int right)//快速排序法
//{
//	if (left >= right)
//	{
//		return;
//	}
//	int keyIndex = PartSort1(a, left, right);
//	int keyIndex = PartSort2(a, left, right);
//
//	//分治递归，如二叉树
//	QuickSort(a, left, keyIndex - 1);
//	QuickSort(a, keyIndex + 1, right);
//}
//
//int _QuickSort(int*a, int left, int right)//三目取中法
//{
//	int mid = (left + right) / 2;
//	if (a[left] < a[mid])
//	{
//		if (a[mid] < a[right])
//			return a[mid];
//		else if (a[left]>a[right])
//			return left;
//		else
//			return right;
//	}
//	else
//	{
//		if (a[mid] > a[right])
//			return a[mid];
//		else if (a[left]<a[right])
//			return left;
//		else
//			return right;
//	}
//}
//void Swap(int*a, int*b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void QuickSort(int*a, int left, int right)//挖坑法
//{
//	if (left >= right)
//		return;
//	int ret =_QuickSort(a, left, right);
//	Swap(&a[left], &a[right]);
//	int begin = left;
//	int end = right;
//	int piovt = begin;
//	int key = a[piovt];
//	while (begin<end)
//	{
//		while (begin<end&&a[end] >= key)
//		{
//			end--;
//		}
//		a[piovt] = a[end];
//		piovt = end;
//		while (begin<end&&a[begin] <= key)
//		{
//			begin++;
//		}
//		a[piovt] = a[begin];
//		piovt = begin;
//	}
//	piovt = begin;
//	a[piovt] = key;
//	QuickSort(a, left, piovt - 1);
//	QuickSort(a, piovt + 1, right);
//}
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
//	QuickSort(arr, 0, sizeof(arr) / sizeof(int)-1);
//	Print(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}