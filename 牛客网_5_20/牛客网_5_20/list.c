#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
ListNode*BuyNode(Type x)
{
	ListNode*new = (ListNode*)malloc(sizeof(ListNode));
	new->data = x;
	new->next = NULL;
	return new;
}
void Print(ListNode*ps)
{
	ListNode*cur = ps;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
void PushBack(ListNode**pps, Type x)
{
	ListNode*new = BuyNode(x);
	ListNode*back = *pps;
	if (*pps == NULL)
	{
		*pps = new;
	}
	else
	{
		while (back->next != NULL)
		{
			back = back->next;
		}
		back->next = new;
	}
}
void PushFront(ListNode**pps, Type x)
{
	ListNode*new = BuyNode(x);
	new->next = *pps;
	*pps = new;
}
void PopFront(ListNode**pps)
{
	ListNode*next = (*pps)->next;
	free(*pps);
	*pps = next;
}
void PopBack(ListNode**pps)
{
	if (*pps == NULL)
	{
		return;
	}
	else if ((*pps)->next == NULL)
	{
		free(*pps);
		*pps = NULL;
	}
	else
	{
		ListNode*front = NULL;
		ListNode*next = *pps;
		while (next->next != NULL)
		{
			front = next;
			next = next->next;
		}
		free(next);
		front->next = NULL;
	}
}
ListNode*Find(ListNode*ps, Type x)
{
	ListNode*cur = ps;
	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void Insert(ListNode**pps, ListNode* pos, Type x)
{
	if (pos == *pps)
	{
		PushFront(pps, x);
	}
	else
	{
		ListNode*new = BuyNode(x);
		ListNode*front = *pps;
		while (front->next != pos)
		{
			front = front->next;
		}
		front->next = new;
		new->next = pos;
	}
}
void Erase(ListNode**pps, ListNode* pos)
{
	if (*pps == pos)
	{
		PopFront(pps);
	}
	else
	{
		ListNode*front = *pps;
		while (front->next != pos)
		{
			front = front->next;
		}
		front->next = pos->next;
		free(pos);
	}
}
void Defree(ListNode**pps)
{
	while (*pps != NULL)
	{
		ListNode*cur = *pps;
		*pps = cur->next;
		free(cur);
	}
}