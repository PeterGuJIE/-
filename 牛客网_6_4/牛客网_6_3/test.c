#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//void Sort(char*str, int*returnSize, char**ret, int i, int len, char*ch, int*sum)
//{
//	if (i == len)
//	{
//		char*tmp = (char*)malloc(sizeof(char)*len);
//		strcpy(tmp, ch);
//		ret[(*returnSize)++] = tmp;
//		return;
//	}
//	for (int j = 0; j<len; j++)
//	{
//		if (sum[j] == 1 || (j>0 && sum[j - 1] == 0 && str[j - 1] == str[j]))
//			continue;
//		sum[j] = 1;
//		ch[i] = str[j];
//		Sort(str, returnSize, ret, i + 1, len, ch, sum);
//		sum[j] = 0;
//	}
//
//}
//int cmp(const void*e1, const void*e2)
//{
//	return *(char*)e1 - *(char*)e2;
//}
//char** Permutation(char* str, int* returnSize) {
//	int len = strlen(str);
//	int num = 1;
//	for (int i = 1; i <= len; i++)
//		num *= i;
//
//	*returnSize = 0;
//	char**ret = (char**)malloc(sizeof(char*)*num);
//	int*sum = (int*)malloc(sizeof(int)*len);
//
//	char ch[10] = { 0 };
//	qsort(str, len, sizeof(char), cmp);
//	Sort(str, returnSize, ret, 0, len, ch, sum);
//	return ret;
//}
//
//
//
//
//
//void Size(TreeNode*ps, int*size)
//{
//	if (ps == NULL)
//		return;
//	else
//	{
//		(*size)++;
//	}
//	Size(ps->left, size);
//	Size(ps->right, size);
//}
//void Pass(struct TreeNode* root, char*ret)
//{
//	if (root == NULL)
//	{
//		strcat(ret, "#,");
//		return;
//	}
//	char ch[10] = { 0 };
//	sprintf(ch, "%d,", root->val);
//	strcat(ret, ch);
//	Pass(root->left, ret);
//	Pass(root->right, ret);
//}
//
//char* Serialize(struct TreeNode* root) {
//	int sz = 0;
//	Size(root, &sz);
//	char*ret = (char*)malloc(sizeof(char)* 70);
//	memset(ret, '\0', 70);
//	Pass(root, ret);
//	return ret;
//}
//
//struct TreeNode* fun(char* str, int* index){
//	if (str[*index] == '#'){
//		(*index) += 2;
//		return NULL;
//	}
//	int num = 0;
//	while (str[*index] != ',')
//	{
//		num = num * 10 + str[*index] - '0';
//		(*index)++;
//	}
//	(*index)++;
//	struct TreeNode*newnode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
//	newnode->val = num;
//	newnode->left = fun(str, index);
//	newnode->right = fun(str, index);
//	return newnode;
//}
//struct TreeNode* Deserialize(char* str) {
//	int index = 0;
//	return fun(str, &index);
//}








//typedef struct TreeNode TreeNode;
//struct TreeNode* Convert(struct TreeNode* pRootOfTree) {
//	if (pRootOfTree == NULL)
//		return NULL;
//	if (pRootOfTree->left == NULL&&pRootOfTree->right == NULL)
//		return pRootOfTree;
//	TreeNode*lchild = Convert(pRootOfTree->left);
//	if (lchild != NULL)
//	{
//		while (lchild->right)
//		{
//			lchild = lchild->right;
//		}
//		lchild->right = pRootOfTree;
//		pRootOfTree->left = lchild;
//	}
//	TreeNode*rchild = Convert(pRootOfTree->right);
//	if (rchild != NULL)
//	{
//		rchild->left = pRootOfTree;
//		pRootOfTree->right = rchild;
//	}
//	TreeNode*tmp = pRootOfTree;
//	while (tmp->left)
//		tmp = tmp->left;
//	return tmp;
//}











//struct TreeNode 
//{
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	
//};
//
//int Size(struct TreeNode* root)
//{
//	return root == NULL ? 0 : Size(root->left) + Size(root->right) + 1;
//}
//
//int* PrintFromTopToBottom(struct TreeNode* root, int* returnSize)
//{
//	int size = Size(root);
//	if (root == NULL)
//	{
//		return NULL;
//	}
//	int*ret = (int*)malloc(sizeof(int)*size);
//	int*queue = (int*)malloc(sizeof(int)*size);
//	int head = 0, tail = 0;
//	queue[tail++] = root;
//	while (head != size)
//	{
//		struct TreeNode* p = queue[head];
//		ret[head] = p->val;
//		if (p->left != NULL)
//		{
//			queue[tail++] = p->left;
//		}
//		if (p->right != NULL)
//		{
//			queue[tail++] = p->right;
//		}
//		head++;
//	}
//	*returnSize = size;
//	return ret;
//}
//
//
//typedef struct RandomListNode Node;
//Node*Init(int x)
//{
//	Node*ps = (Node*)malloc(sizeof(Node));
//	ps->next = ps->random = NULL;
//	ps->label = x;
//	return ps;
//}
//
//
//struct RandomListNode* Clone(struct RandomListNode* pHead) {
//	if (pHead == NULL)
//		return NULL;
//
//	Node*cur = pHead;
//	while (cur)
//	{
//		Node*newnode = Init(cur->label);
//		newnode->next = cur->next;
//		cur->next = newnode;
//		cur = newnode->next;
//	}
//	cur = pHead;
//	while (cur)
//	{
//		Node*prev = cur;
//		cur->next->random = (cur->random == NULL) ? NULL : cur->random->next;
//		cur = cur->next->next;
//	}
//	cur = pHead;
//	Node*next = cur->next;
//	Node*ret = pHead->next;
//	while (cur)
//	{
//		if (cur->next)
//			cur->next = cur->next->next;
//		if (next->next)
//			next->next = next->next->next;
//		cur = cur->next;
//		next = next->next;
//	}
//	return ret;
//}