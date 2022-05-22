#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
bool hascycle(ListNode*ps)
{
	ListNode*slow = ps, *fast =ps;
	while (fast&&fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			return true;
		}
	}
	return false;
}







//ListNode*mergetwo(ListNode*p1, ListNode*p2)
//{
//	if (p1 == NULL)
//	{
//		return p2;
//	}
//	if (p2 == NULL)
//	{
//		return p1;
//	}
//	ListNode*head = NULL, *tail = NULL;
//	while (p1 != NULL&&p2 != NULL)
//	{
//		if (p1->val < p2->val)
//		{
//			if (tail == NULL)
//			{
//				head = tail = p1;
//			}
//			else
//			{
//				tail->next = p1;
//				tail = tail->next;
//			}
//			p1 = p1->next;
//		}
//		else
//		{
//			if (tail == NULL)
//			{
//				head = tail = p2;
//			}
//			else
//			{
//				tail->next = p2;
//				tail = tail->next;
//			}
//			p2 = p2->next;
//		}
//	}
//	if (p1 != NULL)
//	{
//		tail->next = p1;
//	}
//	if (p2 != NULL)
//	{
//		tail->next = p2;
//	}
//	return head;
//}

ListNode*mergetwo(ListNode*p1, ListNode*p2)
{
	if (p1 == NULL)
	{
		return p2;
	}
	if (p2 == NULL)
	{
		return p1;
	}
	ListNode*head = NULL, *tail = NULL;
	if (p1->val < p2->val)
	{
		head = tail = p1;
		p1 = p1->next;
	}
	else
	{
		head = tail = p2;
		p2 = p2->next;
	}
	while (p1 != NULL&&p2 != NULL)
	{
		if (p1->val < p2->val)
		{
			tail->next = p1;
			p1=p1->next;
			tail = tail->next;
		}
		else
		{
			tail->next = p2;
			p2=p2->next;
			tail = tail->next;
		}
	}
	if (p1 != NULL)
	{
		tail->next = p1;
	}
	if (p2 != NULL)
	{
		tail->next = p2;
	}
	return head;
}






ListNode*middle(ListNode*ps)
{
	ListNode*slow = ps, *fast = ps;
	while (fast &&fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow; 
}








ListNode*resever(ListNode*ps)
{
	if (ps == NULL)
	{
		return NULL;
	}
	ListNode*n1 = NULL;
	ListNode*n2 = ps;
	ListNode*n3 = n2->next;
	while (n2 != NULL)
	{
		n2->next = n1;
		n1 = n2;
		n2 = n3;
		if (n3 != NULL)
		{
			n3 = n3->next;
		}
	}
	return n1;
}
ListNode*BugNode(int x)
{
	ListNode*new = (ListNode*)malloc(sizeof(ListNode));
	new->next = NULL;
	new->val = x;
	return new;
}
void Back(ListNode**pps, int x)
{

	ListNode*new = BugNode(x);
	if (*pps == NULL)
	{
		*pps = new;
	}
	else
	{
		//找到尾节点的指针
		ListNode*back = *pps;
		while (back->next != NULL)
		{
			back = back->next;
		}
		//尾节点，链接新节点
		back->next = new;
	}
}
void Print(ListNode*ps)
{
	ListNode*cur = ps;
	while (cur != NULL)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}
	printf("\n");
}