#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int i, j;
	int arr[50][50] = { 0 };
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d ", &arr[i][j]);
		}
	}
	int  k;
	scanf("%d", &k);
	int a, b;
	char t;
	for (i = 0; i < k; i++)
	{
		scanf("%c%d%d", &t, &a, &b);
		if (t == 'r')
		{
			for (j = 0; j < m; j++)
			{
				int tmp = arr[a - 1][j];
				arr[a - 1][j] = arr[b - 1][j];
				arr[b - 1][j] = tmp;
			}
		}
		if (t == 'c')
		{
			for (j = 0; j < n; j++)
			{
				int tmp = arr[j][a-1];
				arr[j][a - 1] = arr[j][b - 1];
				arr[j][b - 1] = tmp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}








//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int arr[50][50] = { 0 };
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d ", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}








//int main()
//{
//	int n,m;
//	scanf("%d%d", &n,&m);
//	int ch[50] = { 0 };
//	int i, j;
//	for (i = 0; i < n*m; i++)
//	{
//		scanf("%d", &ch[i]);
//		printf("%d ",ch[i]);
//		if ((i + 1) % m == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}








//int main()
//{
//	int m;
//	scanf("%d", &m);
//	int count = 0;
//	int arr[50][50] = { 0 };
//	int i, j;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d ", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//				count++;
//		}
//	}
//	if (count == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}










//int main()
//{
//	int m, n;
//	scanf("%d%d", &m, &n);
//	int arr1[50][50] = { 0 };
//	int arr2[50][50] = { 0 };
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d ", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d ", &arr2[i][j]);
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
//	double ret = 100.0 * count / (m*n);
//	printf("%.2lf", ret);
//	return 0;
//}









//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int arr[50][50] = { 0 };
//	int row = 0;
//	int col = 0;
//	int count = 1;
//	while (count < n*n)
//	{
//		for (int i = 0; i < 2; i++)
//		{
//			if (row < n&&col < n)
//			{
//				arr[row][col] = count;
//				count++;
//			}
//			col++;
//		}
//		col--;
//		while (col)
//		{
//			row++;
//			col--;
//			if (row < n&&col < n)
//			{
//				arr[row][col] = count;
//				count++;
//			}
//		}
//		row++;
//		while (row != 0)
//		{
//			if (row < n&&col < n)
//			{
//				arr[row][col] = count;
//				count++;
//			}
//			row--;
//			col++;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}







//typedef struct TreeNode
//{
//	TNode*left;
//	TNode*right;
//	char data;
//}TNode;
//
//void Prev(TNode*root)
//{
//	if (root == NULL)
//		return;
//	printf("%c ", root->data);
//	Prev(root->left);
//	Prev(root->right);
//}
//void Middle(TNode*root)
//{
//	if (root == NULL)
//		return;
//	Middle(root->left);
//	printf("%c ", root->data);
//	Middle(root->right);
//}
//void Post(TNode*root)
//{
//	if (root == NULL)
//		return;
//	Post(root->left);
//	Post(root->right);
//	printf("%c ", root->data);
//}
//void TreeSize(TNode*root, int *size)
//{
//	if (root == NULL)
//		return;
//	else
//	{
//		(*size)++;
//	}
//	TreeSize(root->left, size);
//	TreeSize(root->right, size);
//}
////或者
////int TreeSize(TNode*root)
////{
////	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
////}
//
//
//int TreeLeSize(TNode*root)
//{
//	if (root == NULL)
//		return 0;
//	if (root->left == NULL&&root->right == NULL)
//		return 1;
//
//	return TreeLeSize(root->left) + TreeLeSize(root->right);
//}
////或者
//void TreeLeSize(TNode*root,int* size)
//{
//	if (root == NULL)
//		return;
//	if (root->left == NULL&&root->right == NULL)
//		(*size)++;
//	TreeLeSize(root->left, size);
//	TreeLeSize(root->right, size);
//}
//
//void Level(TNode*root)
//{
//	Queue q;
//	Init(&q);
//	if (root != NULL)
//	{
//		Push(&q, root);
//	}
//	while (!Empty(&q))
//	{
//		TNode*front = Front(&q);
//		Pop(&q);
//		printf("%c ", front->data);
//		if (front->left != NULL)
//			Push(&q, front->left);
//		if (front->right != NULL)
//			Push(&q, front->right);
//	}
//	printf("\n");
//	Defree(&q);
//}
//
//
//
//
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
//	printf("\n");
//	//int Asize = 0;
//	//TreeSize(A,&Asize);
//	//int ret = TreeSize(A);
//	int Asize = 0;
//	TreeLeaSize(A, &Asize);
//	printf("%d\n", Asize);
//	Level(A);
//	return 0;
//	return 0;
//}//