#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct ListNode
{
	int val;
	struct ListNode*next;
}ListNode;

void Back(ListNode**pps, int x);
void Print(ListNode*ps);
ListNode*resever(ListNode*ps);
ListNode*middle(ListNode*ps);
ListNode*mergetwo(ListNode*p1, ListNode*p2);