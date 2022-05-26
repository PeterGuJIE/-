#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

typedef int Type;

typedef struct TreeNode
{
	Type weight;
	Type parent;
	Type lchild;
	Type rchild;
}TNode;

typedef struct HFtree
{
	TNode*data;
	int length;
}HFtree;


HFtree* Init(int*weight, int length);
int*SelectMin(HFtree*root);
void Creat(HFtree*root);
void prev(HFtree*root, int index);