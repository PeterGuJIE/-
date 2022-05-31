#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"

//struct TreeNode* reConstructBinaryTree(int* pre, int preLen, int* vin, int vinLen) {
//	struct TreeNode* root;
//	int count = 0;
//	if (NULL == pre || 0 == preLen)
//		return NULL;
//	root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
//	memset(root, 0, sizeof(struct TreeNode));
//	root->val = pre[0];
//	while (root->val != vin[count])
//	{
//		count++;
//	}
//	root->left = reConstructBinaryTree(pre + 1, count, vin, count);
//	root->right = reConstructBinaryTree(pre + 1 + count, preLen - count - 1, vin + count + 1, vinLen - count - 1);
//	return root;
//}
//
//
//typedef struct ListNode LN;
//int* printListFromTailToHead(struct ListNode* listNode, int* returnSize) {
//	LN*plist = listNode;
//	if (listNode == NULL)
//		return -1;
//	int count = 0;
//	while (plist != NULL)
//	{
//		plist = plist->next;
//		count++;
//	}
//
//	int*arr = (int*)malloc(sizeof(int)*count);
//	*returnSize = count;
//	plist = listNode;
//	for (int i = count - 1; i >= 0; i--)
//	{
//		arr[i] = plist->val;
//		plist = plist->next;
//	}
//	return arr;
//}



//int duplicate(int* numbers, int numbersLen) {
//	// write code here
//	if (numbersLen == 0)
//		return -1;
//	int arr[10000] = { 0 };
//	int i = 0;
//	for (i = 0; i < numbersLen; i++){
//		arr[numbers[i]] ++;
//		if (arr[numbers[i]] == 2)
//		{
//			return numbers[i];
//		}
//		else
//		{
//			return -1;
//		}
//	}
//}







//typedef struct time
//{
//	int hour;
//	int mint;
//	int second;
//}TI;
//int main()
//{
//	int n,t;
//	int a = 0;
//	scanf("%d", &n);
//	TI time;
//	time.hour = 0;
//	time.mint = 0;
//	time.second = 0;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &t);
//		time.hour += t / 3600;
//		time.mint += t % 3600/60;
//		time.second += t % 60;
//		if (time.second>59)
//		{
//			a = time.second / 60;
//			time.mint += a;
//			time.second -= 60 * a;
//		}
//		if (time.mint>59)
//		{
//			a = time.mint / 60;
//			time.hour += a;
//			time.mint -= 60 * a;
//		}
//		printf("%d %d %d\n", time.hour, time.mint,time.second);
//	}
//	return 0;
//}





//typedef struct Count
//{
//	int row;
//	int col;
//}Count;
//
//
//int main()
//{
//	int n,a,b;
//	int sum1 = 0, sum2 = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d%d", &a, &b);
//		sum1 += a;
//		sum2 += b;
//	}
//	printf("%d%d", sum1, sum2);
//	return 0;
//}







//typedef struct Book{
//	char name[100];
//	int price;
//}BOOK;
//int cmp_by_price(const void*e1, const void*e2)
//{
//	return ((BOOK *)e1)->price - ((BOOK *)e2)->price;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	BOOK* arr = malloc(sizeof(BOOK)*n);
//	/*BOOK arr[3];*/
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s %d", &arr[i].name, &arr[i].price);
//		
//	}
//	qsort(arr, sz, sizeof(arr[0]), cmp_by_price);
//	
//	for (int i = 0; i < n; i++)
//	{
//		printf("%s\n", arr[i].name);
//	}
//	return 0;
//}





//bool IsPoss(int**maze, int n, int m, struct Maze cur)
//{
//	if (cur.row >= 0 && cur.row < n&&cur.col >= 0 && cur.col < m&&maze[cur.row][cur.col] == 1)
//		return true;
//	return false;
//}
//Node plist;
//Node minplist;
//void Copy(Node*ps, Node*pcopy)
//{
//	pcopy->a = (Type*)malloc(sizeof(Type)*ps->max_size);
//	memcpy(pcopy->a, ps->a, sizeof(Type)*ps->top);
//	pcopy->top = ps->top;
//	pcopy->max_size = ps->max_size;
//}
//void GetMin(int**maze, int n, int m, struct Maze cur, int p)
//{
//	Push(&plist, cur);
//	if (cur.row == 0 && cur.col == m - 1)
//	{
//		if ( Empty(&minplist) || Size(&plist) < Size(&minplist))
//		{
//			Defree(&minplist);
//			Copy(&plist, &minplist);
//		}
//	}
//	struct Maze next;
//	maze[cur.row][cur.col] = 2;
//
//	next = cur;
//	next.row -= 1;
//	if (IsPoss(maze, n, m, next))
//	{
//		GetMin(maze, n, m, next, p - 3);
//	}
//
//	next = cur;
//	next.row += 1;
//	if (IsPoss(maze, n, m, next))
//	{
//		GetMin(maze, n, m, next, p);
//	}
//
//	next = cur;
//	next.col -= 1;
//	if (IsPoss(maze, n, m, next))
//	{
//		GetMin(maze, n, m, next, p - 1);
//	}
//
//	next = cur;
//	next.col += 1;
//	if (IsPoss(maze, n, m, next))
//	{
//		GetMin(maze, n, m, next, p - 1);
//	}
//	maze[cur.row][cur.col] = 1;
//	Pop(&plist);
//}
//
//void Print(Node*ps)
//{
//	Node rPath;
//	Init(&rPath);
//	while (!Empty(ps))
//	{
//		Push(&rPath, Top(ps));
//		Pop(ps);
//	}
//	while (Size(&rPath)>1)
//	{
//		struct Maze top = Top(&rPath);
//		printf("[%d,%d],", top.row, top.col);
//		Pop(&rPath);
//	}
//	struct Maze top = Top(&rPath);
//	printf("[%d,%d]", top.row, top.col);
//	Pop(&rPath);
//	Defree(&rPath);
//}
//
//
//int main()
//{
//	int n, m,p;
//	scanf("%d%d%d", &n, &m, &p);
//	
//		int **maze = (int**)malloc(sizeof(int*)*n);
//		for (int i = 0; i< n; i++)
//		{
//			maze[i] = (int*)malloc(sizeof(int)*m);
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				scanf("%d", &maze[i][j]);
//			}
//		}
//		Init(&plist);
//		Init(&minplist);
//		struct Maze empty = { 0, 0 };
//		GetMin(maze, n, m, empty, p);
//		if (!Empty(&minplist))
//		{
//			Print(&minplist);
//		}
//		else
//		{
//			printf("Can not escape!");
//		}
//		Defree(&plist);
//		Defree(&minplist);
//		for (int i = 0; i < n; i++)
//		{
//			free(maze[i]);
//		}
//		free(maze);
//		maze = NULL;
//	
//	return 0;
//}













//bool IsPass(int**maze, int n, int m, struct Maze pos)//迷宫中等
//{
//	if (pos.row >= 0 && pos.row < n&&pos.col >= 0 && pos.col < m&&maze[pos.row][pos.col]==0)
//	{
//		return true;
//	}
//	return false;
//}
//
//Node path;
//bool GetMaze(int**maze, int n, int m, struct Maze cur)
//{
//	Push(&path, cur);
//	//检测出口
//	if (cur.row == n - 1 && cur.col == m - 1)
//		return true;
//
//
//	//探测四个方向
//	struct Maze next;
//	maze[cur.row][cur.col] = 2;
//
//	//上
//	next = cur;
//	next.row -= 1;
//	if (IsPass(maze,n,m,next))
//	{
//		if (GetMaze(maze, n, m, next))
//			return true;
//	}
//	//下
//	next = cur;
//	next.row += 1;
//	if (IsPass(maze, n, m, next))
//	{
//		if (GetMaze(maze, n, m, next))
//			return true;
//	}
//	//左
//	next = cur;
//	next.col -= 1;
//	if (IsPass(maze, n, m, next))
//	{
//		if (GetMaze(maze, n, m, next))
//			return true;
//	}
//	//右
//	next = cur;
//	next.col += 1;
//	if (IsPass(maze, n, m, next))
//	{
//		if (GetMaze(maze, n, m, next))
//			return true;
//	}
//	//Pop(&path);
//	return false;
//}
//
//
//void Print(Node*ps)
//{
//	Node rPath;
//	Init(&rPath);
//	while (!Empty(&path))
//	{
//		Push(&rPath, Top(&path));
//		Pop(&path);
//	}
//	while (!Empty(&rPath))
//	{
//		struct Maze top = Top(&rPath);
//		printf("(%d,%d)\n", top.row, top.col);
//		Pop(&rPath);
//	}
//
//	Defree(&rPath);
//}
//
//
//
//int main()
//{
//	int n, m;
//	while (scanf("%d%d", &n, &m) != EOF)
//	{
//		//动态开辟二维数组
//		int**maze = (int**)malloc(sizeof(int*)*n);
//		for (int i = 0; i < n; i++)
//		{
//			maze[i] = (int*)malloc(sizeof(int)*m);
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				scanf("%d", &maze[i][j]);
//			}
//		}
//		Init(&path);
//		//Print(maze, n, m);
//		struct Maze entey = { 0, 0 };
//		if (GetMaze(maze, n, m, entey))
//		{
//			//printf("找到通路\n");
//			Print(&path);
//		}
//		else
//		{
//			printf("没有找到通路\n");
//		}
//		Defree(&path);
//		for (int i = 0; i < n; i++)
//		{
//			free(maze[i]);
//		}
//		free(maze);
//		maze = NULL;
//	}
//	return 0;
//}