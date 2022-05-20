#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

typedef int Type;
typedef struct listnode ListNode;

struct listnode
{
	Type data;
	ListNode*next;
};
enum option
{
	EXIT,
	Push1,
	Push2,
	Pop1,
	Pop2,
	insert,
	erase,
	print
};
void Print(ListNode*ps);
void PushBack(ListNode**pps, Type x);
void PushFront(ListNode**pps, Type x);
void PopFront(ListNode**pps);
void PopBack(ListNode**pps);
ListNode*Find(ListNode*ps, Type x);
void Insert(ListNode**pps, ListNode* pos, Type x);
void Erase(ListNode**pps, ListNode* pos);
void Defree(ListNode**pps);