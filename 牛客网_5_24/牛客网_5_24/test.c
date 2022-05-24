#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int arr[20][20] = { 0 };
	int i, j;
	int count = 1;
	int p = 0;
	int q = n - 1;
	while (count < n*n)
	{
		for (i = p; i < q; i++)
		{
			arr[0][i] = i + 1;
			count++;
		}
		for (i = p; i < q; i++)
		{
			arr[i][n - 1] = count;
			count++;
		}
		for (i = q; i>p; i--)
		{
			arr[n - 1][i] = count;
			count++;
		}
		for (i = q; i >p; i--)
		{
			arr[i][0] = count;
			count++;
		}
		p++;
		q--;
	}
	if (p == q)
	{
		arr[p][q] = count;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}













//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int sum = 0;
//	int arr[10][10] = { 0 };
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (arr[i][j] > 0)
//			{
//				sum += arr[i][j];
//			}
//		}
//	}
//	printf("%d",sum);
//	return 0;
//}









//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int i, j;
//	int count = 0;
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	if (count == m * n)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}











//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int arr[10][10];
//	int i, j;
//	int x, y;
//	int max = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			if (arr[i][j]>max)
//			{
//				x = i + 1;
//				y = j + 1;
//				max = arr[i][j];
//			}
//		}
//	}
//	printf("%d %d", x, y);
//	return 0;
//}








//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int arr[10][10];
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int x, y;
//	scanf("%d%d", &x, &y);
//	printf("%d", arr[x - 1][y - 1]);
//	return 0;
//}












//int main()
//{
//	int i, j;
//	for (i = 0; i < 5; i++)
//	{
//		float a;
//		float sum = 0;
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%f", &a);
//			sum += a;
//			printf("%.1f ", a);
//		}
//		printf("%.1f\n", sum);
//	}
//	return 0;
//}









//int main()
//{
//	int m;
//	scanf("%d", &m);
//	int i, j;
//	int count = 0;
//	for (i = 2; i <= m; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("%d", m - count-1);
//	return 0;
//}







//int main()
//{
//	int m,n;
//	scanf("%d", &m);
//	int arr[500] = { 0 };
//	int count = 0;
//	for (int i = 0; i < m; i++)
//	{
//	   scanf("%d", &arr[i]);
//	}
//	scanf("%d", &n);
//	for (int i = 0; i < m; i++)
//	{
//		if (arr[i] == n)
//		{
//			count++;
//		}
//	}
//	printf("%d ", count);
//	return 0;
//}









//int main()
//{
//	int m;
//	scanf("%d", &m);
//	int arr[500] = { 0 };
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = i + 1; j < m; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				for (int n = j; n < m - 1; n++)
//				{
//					arr[n] = arr[n + 1];
//				}
//				m--;
//				i--;
//			}
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}








//int main()
//{
//	int m,n;
//	scanf("%d", &m);
//	int arr[500] = { 0 };
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &n);
//	for (int i = 0; i <m; i++)
//	{
//		if (arr[i] != n)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//	return 0;
//}








//int main()
//{
//	int m,n;
//	scanf("%d", &m);
//	int arr[500] = { 0 };
//	int count1 = 0;
//	int count2 = 0;
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &n);
//	arr[m] = n;
//	for (int i = m; i >0; i--)
//	{
//		if (arr[i] < arr[i - 1])
//		{
//			int tmp = arr[i];
//			arr[i] = arr[i - 1];
//			arr[i - 1] = tmp;
//		}
//	}
//	for (int i = 0; i < m+1; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}







//int main()
//{
//	int m;
//	scanf("%d", &m);
//	int arr[5000] = { 0 };
//	int count1 = 0;
//	int count2 = 0;
//	for (int i = 0; i < m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < m-1; i++)
//	{
//		if ((arr[i] - arr[i + 1]) >= 0)
//		{
//			count1++;
//		}
//		if ((arr[i] - arr[i + 1]) <= 0)
//		{
//			count2++;
//		}
//	}
//	if (count1 == m-1 || count2 == m-1)
//	{
//		printf("sorted\n");
//	}
//	else
//	{
//		printf("unsorted\n");
//	}
//	return 0;
//}








//int main()
//{
//	int m, n;
//	scanf("%d%d", &n, &m);
//	int arr[5000] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = n; i < n + m; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < n + m; i++)
//	{
//		for (int j = 0; j < m + n - i - 1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < n + m; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


















//typedef char Type;
//typedef struct TreeNode
//{
//	struct TreeNode*left;
//	struct TreeNode*right;
//	Type data;
//}TNode;
//
//void Prev(TNode*ps)
//{
//	if (ps == NULL)
//	{
//		return;
//	}
//	printf("%c ", ps->data);
//	Prev(ps->left);
//	Prev(ps->right);
//}
//
//void Middle(TNode*ps)
//{
//	if (ps == NULL)
//	{
//		return;
//	}
//	Middle(ps->left);
//	printf("%c ", ps->data);
//	Middle(ps->right);
//}
//
//void Post(TNode*ps)
//{
//	if (ps == NULL)
//	{
//		return;
//	}
//	Post(ps->left);
//	Post(ps->right);
//	printf("%c ", ps->data);
//}
//
//int main()
//{
//	TNode*A = (TNode*)malloc(sizeof(TNode));
//	A->data = 'A';
//	A->left = NULL;
//	A->right = NULL;
//	TNode*B = (TNode*)malloc(sizeof(TNode));
//	B->data = 'B';
//	B->left = NULL;
//	B->right = NULL;
//	TNode*C = (TNode*)malloc(sizeof(TNode));
//	C->data = 'C';
//	C->left = NULL;
//	C->right = NULL;
//	TNode*D = (TNode*)malloc(sizeof(TNode));
//	D->data = 'D';
//	D->left = NULL;
//	D->right = NULL;
//	A->left = B;
//	A->right = C;
//	B->left = D;
//	Prev(A);
//	return 0;
//}











//bool isvalud(char*s)
//{
//	stack ps;
//	Init(&ps);
//	while (*s != '\0')
//	{
//		switch (*s)
//		{
//		case '{':
//		case '[':
//		case '(':
//			Push(&ps, *s);
//			s++;
//			break;
//		case '}':
//		case ']':
//		case ')':
//			if (Empty(&ps))
//			{
//				Defree(&ps);
//				return false;
//			}
//			char top = Top(&ps);
//			Pop(&ps);
//			if ((*s == '}'&&top != '{') || (*s == ']'&&top != '[') || (*s == ')'&&top != '('))
//			{
//				Defree(&ps);
//				return false;
//			}
//			else
//			{
//				s++;
//			}
//			break;
//		}
//	}
//	bool ret = Empty(&ps);
//	Defree(&ps);
//	return ret;
//}
//int main()
//{
//	//char s[] = ;
//	bool ret = isvalud("(}");
//	printf("%d", ret);
//	return 0;
//}