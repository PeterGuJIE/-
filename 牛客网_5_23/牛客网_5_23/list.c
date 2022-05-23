#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
void Init(QU*ps)
{
	assert(ps);
	ps->head = ps->tail = NULL;
}
void Defee(QU*ps)
{
	assert(ps);
	Node*cur = ps->head;
	while (cur != NULL)
	{
		Node*next = cur->next;
		free(cur);
		cur = next;
	}
	ps->head = ps->tail = NULL;
}
void Push(QU*ps, Type x)
{
	assert(ps);
	Node*new = (Node*)malloc(sizeof(Node));
	if (new == NULL)
	{
		exit(-1);
	}
	new->next = NULL;
	new->a = x;
	if (ps->tail == NULL)
	{
		ps->head = ps->tail = new;
	}
	else
	{
		ps->tail->next = new;
		ps->tail = new;
	}
}
void Pop(QU*ps)
{
	assert(ps);
	assert(ps->head);
	Node*next = ps->head->next;
	free(ps->head);
	ps->head = next;
}
Type Front(QU*ps)
{
	assert(ps);
	assert(ps->head);
	return ps->head->a;
}
Type Back(QU*ps)
{
	assert(ps);
	assert(ps->head);
	return ps->tail->a;
}
int Size(QU*ps)
{
	assert(ps);
	int size = 0;
	Node*cur = ps->head;
	while (cur != NULL)
	{
		cur = cur->next;
		size++;
	}
	return size;
}
bool Empty(QU*ps)
{
	assert(ps);
	return ps->head == NULL;
}









//void Init(Node*ps)
//{
//	ps->a = malloc(sizeof(Type)* 4);
//	if (ps->a == NULL)
//	{
//		exit(-1);
//	}
//	ps->max_size = 4;
//	ps->top = 0;
//}
//void Defree(Node*ps)
//{
//	assert(ps);
//	free(ps->a);
//	ps->a = NULL;
//	ps->max_size = ps->top = 0;
//}
//void Push(Node*ps, Type x)
//{
//	assert(ps);
//	if (ps->top == ps->max_size)
//	{
//		Type*tmp = realloc(ps->a, ps->max_size * 2 * sizeof(Type));
//		if (tmp == NULL)
//		{
//			exit(-1);
//		}
//		else
//		{
//			ps->a = tmp;
//			ps->max_size *= 2;
//		}
//	}
//	ps->a[ps->top] = x;
//	ps->top++;
//}
//void Pop(Node*ps)
//{
//	assert(ps);
//	assert(ps->top > 0);
//	ps->top--;
//}
//Type Top(Node*ps)
//{
//	assert(ps);
//	assert(ps->top > 0);
//	return ps->a[ps->top - 1];
//}
//int Size(Node*ps)
//{
//	assert(ps);
//	return ps->top;
//}
//bool Empty(Node*ps)
//{
//	assert(ps);
//	return ps->top == 0;
//}





//Node*detect(Node*ps)
//{
//	Node*slow = ps, *fast = ps;
//	while (fast&&fast->next != NULL)
//	{
//		slow = slow->next;
//		fast = fast->next->next;
//		if (slow == fast)
//		{
//			Node*meet = slow;
//			while (ps != meet)
//			{
//				ps = ps->next;
//				meet = meet->next;
//			}
//			return meet;
//		}
//	}
//	return NULL;
//}