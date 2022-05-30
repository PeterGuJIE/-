#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
#include<stdio.h>

int main()
{
	int a, b, n, m;
	scanf("%d%d", &a, &b);
	scanf("%d", &n);
	scanf("%d", &m);
	int rectangle = a*b;
	double circle = 3.14*n*n;
	int square = m*m;
	printf("%d\n%g\n%d\n", rectangle, circle, square);
	return 0;
}








//typedef struct Data
//{
//	int*a;
//	int size;
//}Data;
//void Init(Data*ps)
//{
//	ps->a = malloc(sizeof(int)* 3);
//	ps->size = 0;
//}
//void Push(Data*ps, int n)
//{
//	ps->a[ps->size] = n;
//	ps->size++;
//}
//int Top(Data*ps)
//{
//	assert(ps);
//	assert(ps->size > 0);
//	return ps->a[ps->size - 1];
//}
//void Pop(Data*ps)
//{
//	assert(ps);
//	assert(ps->size > 0);
//	ps->size--;
//}
//void Defree(Data*ps)
//{
//	free(ps->a);
//	ps->a = NULL;
//	ps->size = 0;
//}
//int main()
//{
//	int n;
//	int a = 2;
//	Data ps;
//	Init(&ps);
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &n);
//		Push(&ps, n);
//	}
//	while (a)
//	{
//		printf("%d/", Top(&ps));
//		Pop(&ps);
//		a--;
//	}
//	printf("%d", Top(&ps));
//	Pop(&ps);
//	Defree(&ps);
//	return 0;
//}




//typedef struct Node
//{
//	struct Node*next;
//	int data;
//}Node;
//void Push(Node**pps, int n)
//{
//	Node*new = (Node*)malloc(sizeof(Node));
//	new->data = n;
//	new->next = NULL;
//	if (*pps == NULL)
//	{
//		*pps = new;
//	}
//	else
//	{
//		Node*back = *pps;
//		while (back->next != NULL)
//		{
//			back = back->next;
//		}
//		back->next = new;
//	}
//}
//Node*Find(Node*ps, int n)
//{
//	Node*cur = ps;
//	while (n)
//	{
//		cur = cur->next;
//		n--;
//	}
//	return cur;
//}
//void Add(Node**pps, Node*pos, int n)
//{
//	if (*pps == pos)
//	{
//		Push(pps, n);
//	}
//	else
//	{
//		Node*new = (Node*)malloc(sizeof(Node));
//		new->data = n;
//		new->next = NULL;
//		Node*front = *pps;
//		while (front->next != pos)
//		{
//			front = front->next;
//		}
//		front->next = new;
//		new->next = pos;
//	}
//}
//void Defree(Node**pps)
//{
//	while (*pps != NULL)
//	{
//		Node*cur = *pps;
//		*pps = cur->next;
//		free(cur);
//	}
//}
//void Print(Node*ps)
//{
//	Node*cur = ps;
//	while (cur != NULL)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//}
//int main()
//{
//	int n, m,a;
//	scanf("%d%d", &n,&a);
//	Node*plist = NULL;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		Push(&plist, m);
//	}
//	Node*pos = Find(plist, a);
//	Add(&plist, pos, a);
//	Print(plist);
//	Defree(&plist);
//	return 0;
//}






//typedef struct Node
//{
//	struct Node*next;
//	int data;
//}Node;
//
//void Push(Node**pps, int n)
//{
//	Node*new = (Node*)malloc(sizeof(Node));
//	new->data = n;
//	new->next = NULL;
//	if (*pps == NULL)
//	{
//		*pps = new;
//	}
//	else
//	{
//		Node*back = *pps;
//		while (back->next != NULL)
//		{
//			back = back->next;
//		}
//		back->next = new;
//	}
//}
//Node* Find(Node*ps, int n)
//{
//	Node*cur = ps;
//	while (cur != NULL)
//	{
//		if (cur->data == n)
//		{
//			return cur;
//		}
//		cur = cur->next;
//	}
//	return NULL;
//}
//void Defree(Node**pps)
//{
//	while (*pps != NULL)
//	{
//		Node*cur = *pps;
//		*pps = cur->next;
//		free(cur);
//	}
//}
//void Delet(Node**pps, Node*pos)
//{
//	Node*front = *pps;
//	if (*pps == pos)
//	{
//		Node*front = (*pps)->next;
//		free(*pps);
//		*pps = front;
//	}
//	else
//	{
//		while (front->next != pos)
//		{
//			front = front->next;
//		}
//		front->next = pos->next;
//		free(pos);
//	}
//}
//void Print(Node*ps)
//{
//	Node*cur = ps;
//	while (cur != NULL)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//}
//int main()
//{
//	Node*plist = NULL;
//	int n, m, del;
//	scanf("%d%d", &n, &del);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		Push(&plist, m);
//	}
//	while (n)
//	{
//		Node*pos = Find(plist, del);
//		if (pos != NULL)
//		{
//			Delet(&plist, pos);
//		}
//		n--;
//	}
//	
//	Print(plist);
//
//	Defree(&plist);
//	return 0;
//}









//typedef struct Node
//{
//	struct Node*next;
//	int data;
//}Node;
//void Push(Node**pps, int n)
//{
//	Node*new = (Node*)malloc(sizeof(Node));
//	new->data = n;
//	new->next = NULL;
//	if (*pps == NULL)
//	{
//		*pps = new;
//	}
//	else
//	{
//		Node*back = *pps;
//		while (back->next != NULL)
//		{
//			back = back->next;
//		}
//		back->next = new;
//	}
//}
//void Sum(Node*plist, Node*ps)
//{
//	Node*prev = plist;
//	while (prev != NULL)
//	{
//		int sum = 0;
//		sum += prev->data + ps->data;
//		prev = prev->next;
//		ps = ps->next;
//		printf("%d ", sum);
//	}
//	
//}
//int main()
//{
//	Node*plist = NULL;
//	Node*ps = NULL;
//	int n, m;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		Push(&plist, m);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		Push(&ps, m);
//	}
//	Sum(plist,ps);
//	return 0;
//}







//typedef struct Node
//{
//	struct Node*next;
//	int data;
//}Node;
//
//void Push(Node**pps, int n)
//{
//	Node*new = (Node*)malloc(sizeof(Node));
//	new->data = n;
//	new->next = NULL;
//	if (*pps == NULL)
//	{
//		*pps = new;
//	}
//	else
//	{
//		Node*back = *pps;
//		while (back->next != NULL)
//		{
//			back = back->next;
//		}
//		back->next = new;
//	}
//}
//void Sum(Node*ps)
//{
//	Node*cur = ps;
//	int sum = 0;
//	while (cur != NULL)
//	{
//		sum += cur->data;
//		cur = cur->next;
//	}
//	printf("%d", sum);
//}
//int main()
//{
//	int n,m;
//	scanf("%d", &n);
//	Node*plist = NULL;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		Push(&plist, m);
//	}
//	Sum(plist);
//	free(plist);
//	plist = NULL;
//	return 0;
//}








//void MergeSortNonR(int*a, int n)
//{
//	int*tmp = (int*)malloc(sizeof(int)*n);
//	int gap = 1;
//	while (gap < n)
//	{
//		for (int i = 0; i < n; i += 2 * gap)
//		{
//			int begin1 = i, end1 = i + gap - 1;
//			int begin2 = i + gap, end2 = i + 2 * gap - 1;
//			if (begin2 >= n)
//				break;
//			if (end2 >= n)
//			{
//				end2 = n - 1;
//			}
//			int index = i;
//			while (begin1 <= end1&&begin2 <= end2)
//			{
//				if (a[begin1] < a[begin2])
//				{
//					tmp[index++] = a[begin1++];
//				}
//				else
//				{
//					tmp[index++] = a[begin2++];
//				}
//			}
//			while (begin1 <= end1)
//			{
//				tmp[index++] = a[begin1++];
//			}
//			while (begin2 <= end2)
//			{
//				tmp[index++] = a[begin2++];
//			}
//			for (int j = i; j <= end2; j++)
//			{
//				a[j] = tmp[j];
//			}
//		}
//		gap *= 2;
//	}
//	free(tmp);
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
//	//QuickSort(arr, 0, sizeof(arr) / sizeof(int)-1);
//	MergeSortNonR(arr, sizeof(arr) / sizeof(int));
//	Print(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}










//int GetMid(int *a, int left, int right)
//{
//	int mid = (left + right) / 2;
//	if (a[left] < a[right])
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
//int QuickSort(int *a, int left, int right)
//{
//	int index = GetMid(a, left, right);
//	Swap(&a[left], &a[right]);
//	int begin = left;
//	int end = right;
//	int piovt = begin;
//	int key = a[begin];
//	while (begin < end)
//	{
//		while (begin < end&&a[end] >= key)
//		{
//			end--;
//		}
//		a[piovt] = a[end];
//		piovt = end;
//		while (begin < end&&a[begin] <= key)
//		{
//			begin++;
//		}
//		a[piovt] = a[begin];
//		piovt = begin;
//	}
//	piovt = begin;
//	a[piovt] = key;
//	return piovt;
//}
//
//
//void QuickSortNonR(int*a, int n)
//{
//	Node ps;
//	Init(&ps);
//	Push(&ps, n - 1);
//	Push(&ps, 0);
//	while (!Empty(&ps))
//	{
//		int left = Top(&ps);
//		Pop(&ps);
//		int right = Top(&ps);
//		Pop(&ps);
//		int index = QuickSort(a, left, right);
//		if (index + 1 < right)
//		{
//			Push(&ps, right);
//			Push(&ps, index + 1);
//		}
//		if (left < index - 1)
//		{
//			Push(&ps,index - 1);
//			Push(&ps, left);
//		}
//	}
//	Defree(&ps);
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
//	//QuickSort(arr, 0, sizeof(arr) / sizeof(int)-1);
//	QuickSortNonR(arr, sizeof(arr) / sizeof(int)-1); 
//	Print(arr, sizeof(arr) / sizeof(int));
//	return 0;
//}