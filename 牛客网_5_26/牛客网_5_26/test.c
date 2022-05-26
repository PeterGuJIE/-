#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
int main()
{
	char arr[5000];
	gets(arr);
	int i, j;
	int len = strlen(arr);
	int count = 0;
	if (arr[0] >= 'A'&&arr[0] <= 'Z')
	{
		printf("%c", arr[0]);
	}
	else
	{
		printf("%c", arr[0] - 32);
	}
	for (i = 0; i < len; i++)
	{
		if (arr[i] != ' ')
		{
			count++;
		}
		else
		{
			if (arr[count + 1] >= 'A'&&arr[count + 1] <= 'Z')
			{
				printf("%c", arr[count + 1]);
				count++;
			}
			else
			{
				printf("%c", (arr[count + 1] - 32));
				count++;
			}
		}
	}
	return 0;
}









//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	char arr[500];
//	scanf("%s", arr);
//	int i, j;
//	int l, r;
//	char c1, c2;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d %d %c %c", &l, &r, &c1, &c2);
//		for (j = l - 1; j < r; j++)
//		{
//			if (arr[j] == c1)
//				arr[j] = c2;
//		}
//	}
//	printf("%s", arr);
//	return 0;
//}









//int main()
//{
//	char arr;
//	int count;
//	while ((arr = getchar()) != '0')
//	{
//		if (arr == 'A')
//			count++;
//		else if (arr == 'B')
//			count--;
//	}
//	if (count > 0)
//		printf("A");
//	else if (count < 0)
//		printf("B");
//	else
//		printf("E");
//	return 0;
//}








//int main()
//{
//	char arr[100] = { 0 };
//	scanf("%s", &arr);
//	int i;
//	int len = strlen(arr);
//	for (i = 0; i < len; ++i)
//	{
//		printf("%c", arr[i]);
//		if ((len - i - 1) % 3 == 0 && i != len - 1)
//		{
//			printf(",");
//		}
//	}
//	return 0;
//}





//int main()
//{
//	char arr[50];
//	gets(arr);
//	char arr1[] = "admin admin";
//	if (strcmp(arr1, arr) == 0)
//	{
//		printf("Login Success!\n");
//	}
//	else
//		printf("Login Fail!\n");
//	return 0;
//}








//int main()
//{
//	char arr[100];
//	gets(arr);
//	int i;
//	int n = strlen(arr);
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] == ' ' || arr[i] == '\n')
//			count++;
//	}
//	printf("%d", n - count);
//	return 0;
//}











//int Mine(int x, int y, int n, int m, char ch[500][500]) {
//	int count = 0;
//	for (int i = x - 1; i <= x + 1; i++) {
//		for (int j = y - 1; j <= y + 1; j++) {
//			if (ch[i][j] == '*' && i >= 0 && i < n && j >= 0 && j < m)
//				count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n, m;
//	scanf("%d%d", &n, &m);
//	char arr[500][500];
//	int i, j;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf(" %s", arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr[i][j] != '*')
//			{
//				arr[i][j] = Mine(i, j, n, m, arr);
//				printf("%d ", arr[i][j]);
//			}
//			else
//				printf("%c",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}









//int main()
//{
//	int board[3][3] = { 0 };
//	int i, j;
//	char k;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf(" %c", board[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != 'O')
//		{
//			k = board[i][1];
//			break;
//		}
//		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != 'O')
//		{
//			k = board[1][i];
//			break;
//		}
//	}
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != 'O')
//		k = board[1][1];
//	if (board[1][1] == board[0][2] && board[1][1] == board[2][0] && board[1][1] != 'O')
//		k = board[1][1];
//	if (k == 'K')
//		printf("KiKi wins!\n");
//	else if (k == 'B')
//		printf("BoBo wins!\n");
//	else
//		printf("No winner!\n");
//	return 0;
//}










//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i, j;
//	int arr[50][50];
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (i == j)
//			{
//				arr[i][j] = 1;
//				arr[i][0] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}







//int main()
//{
//	int weight[4] = { 1, 2, 3, 4 };
//	HFtree*new = Init(weight, 4);
//	int*ret = SelectMin(new);
//	Creat(new);
//	prev(new, new->length - 1);
//	return 0;
//}








//typedef struct TreeNode
//{
//	struct TreeNode*left;
//	struct TreeNode*right;
//	char data;
//}TNode;
//TNode* creat(char*arr, int*pi)
//{
//	if (arr[*pi] == '#')
//	{
//		(*pi)++;
//		return NULL;
//	}
//	TNode*new = (TNode*)malloc(sizeof(TNode));
//	if (new == NULL)
//	{
//		exit(-1);
//	}
//	new->data = arr[*pi];
//	++(*pi);
//	new->left = creat(arr, pi);
//	new->right = creat(arr, pi);
//
//	return new;
//}
//void Middle(TNode*root)
//{
//	if (root == NULL)
//		return;
//	Middle(root->left);
//	printf("%c ", root->data);
//	Middle(root->right);
//}
//int main()
//{
//	char arr[50];
//	scanf("%s", arr);
//	int i = 0;
//	TNode*ret = creat(arr, &i);
//	Middle(ret);
//	return 0;
//}









//int Depth(TNode*root)
//{
//	if (root == NULL)
//		return 0;
//	int left = Depth(root->left);
//	int right = Depth(root->right);
//	return left > right ? left + 1 : right + 1;
//}
//bool isBalanced(TNode*root)
//{
//	if (root == NULL)
//		return true;
//	int leftD = Depth(root->left);
//	int rightD = Depth(root->right);
//	return abs(leftD - rightD) < 2 && isBalanced(root->left) && isBalanced(root->right);
//}
//
//int main()
//{
//	TNode root;
//	bool ret = isBalanced(&root);
//	return 0;
//}








//int Depth(TNode*root)
//{
//	if (root == NULL)
//		return 0;
//	int left = Depth(root->left);
//	int right = Depth(root->right);
//	return left > right ? left + 1: right + 1;
//}
//int main()
//{
//	TNode root;
//	int ret = Depth(&root);
//	return 0;
//}









//typedef struct TreeNode
//{
//	struct TreeNode*left;
//	struct TreeNode*right;
//	Type data;
//}TNode;
//int Size(TNode*root)
//{
//	return root == NULL ? 0 : Size(root->left) + Size(root->right) + 1;
//}
//void _preorder(TNode*root, int*new, int*pi)
//{
//	if (root == NULL)
//		return;
//	new[*pi] = root->data;
//	_preorder(root->left, new, pi);
//	_preorder(root->right, new, pi);
//}
//int*preorder(TNode*root, int *returnsize)
//{
//	int size = Size(root);
//	int*new = (int*)malloc(size*sizeof(int));
//	int i = 0;
//	_preorder(root, new, &i);
//	*returnsize = size;
//	return new;
//}
//
//
//int main()
//{
//	struct TreeNode node1;
//	struct TreeNode node2;
//	struct TreeNode node3;
//	node1.data = 1;
//	node1.left = &node2;
//	node1.right = &node3;
//
//	node2.data = 2;
//	node2.left = NULL;
//	node2.right = NULL;
//
//	node3.data = 3;
//	node3.left = NULL;
//	node3.right = NULL;
//	int size = 0;
//
//	int* ret = preorder(&node1, &size);
//	return 0;
//}