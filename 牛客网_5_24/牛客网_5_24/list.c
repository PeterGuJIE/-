#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
//void Init(Queue*ps)
//{
//	assert(ps);
//	ps->head = ps->tail = NULL;
//}
//void Push(Queue*ps, Type x)
//{
//	assert(ps);
//	Node*new = (Node*)malloc(sizeof(Node));
//	if (new == NULL)
//	{
//		exit(-1);
//	}
//	new->next = NULL;
//	new->data = x;
//	if (ps->tail == NULL)
//	{
//		ps->head = ps->tail = new;
//	}
//	else
//	{
//		ps->tail->next = new;
//		ps->tail = new;
//	}
//}
//void Pop(Queue*ps)
//{
//	assert(ps);
//	assert(ps->head);
//	Node*new = ps->head->next;
//	free(ps->head);
//	ps->head = new;
//}
//Type Front(Queue*ps)
//{
//	assert(ps);
//	assert(ps->head);
//	return ps->head->data;
//}
//Type Back(Queue*ps)
//{
//	assert(ps);
//	assert(ps->head);
//	return ps->tail->data;
//}
//void Defree(Queue*ps)
//{
//	assert(ps);
//	Node*cur = ps->head;
//	while (cur != NULL)
//	{
//		Node*new = cur->next;
//		free(cur);
//		cur = new;
//	}
//	ps->head = ps->tail = NULL;
//}
//int Size(Queue*ps)
//{
//	assert(ps);
//	int size = 0;
//	Node*cur = ps->head;
//	while (cur != NULL)
//	{
//		size++;
//		cur = cur->next;
//	}
//	return size;
//}
//bool Empty(Queue*ps)
//{
//	assert(ps);
//	return ps->head == NULL;
//}
//
//
//MyStack* Creaet()
//{
//	MyStack*ps = (MyStack*)malloc(sizeof(MyStack));
//	if (ps == NULL)
//	{
//		exit(-1);
//	}
//	Init(&ps->q1);
//	Init(&ps->q2);
//	return ps;
//}
//
//void MyPush(MyStack*ps, Type x)
//{
//	if (!Empty(&ps->q1))
//	{
//		Push(&ps->q1, x);
//	}
//	else
//	{
//		Push(&ps->q2, x);
//	}
//}
//int MyPop(MyStack*ps)
//{
//	Queue*EmptyQ = &ps->q1;
//	Queue*NoEmpty = &ps->q2;
//	if (!Empty(&ps->q1))
//	{
//		EmptyQ = &ps->q2;
//		NoEmpty = &ps->q1;
//	}
//	while (Size(NoEmpty) > 1)
//	{
//		Push(EmptyQ, Front(NoEmpty));
//		Pop(NoEmpty);
//	}
//	int top = Front(NoEmpty);
//	Pop(NoEmpty);
//	return top;
//}
//
//
//int MyTop(MyStack*ps)
//{
//	if (!Empty(&ps->q1))
//	{
//		return Back(&ps->q1);
//	}
//	else
//	{
//		return Back(&ps->q2);
//	}
//}
//
//bool MyEmpty(MyStack*ps)
//{
//	return Empty(&ps->q1) && Empty(&ps->q2);
//}
//void MyFree(MyStack*ps)
//{
//	Defree(&ps->q1);
//	Defree(&ps->q2);
//	free(ps);
//}



//void Init(stack*ps)
//{
//	ps->data = malloc(sizeof(Type)* 4);
//	if (ps->data == NULL)
//	{
//		exit(-1);
//	}
//	ps->top = 0;
//	ps->max_size = 4;
//}
//void Push(stack*ps, Type x)
//{
//	assert(ps);
//	if (ps->max_size == ps->top)
//	{
//		Type*tmp = (Type*)realloc(ps->data, ps->max_size * 2 * sizeof(Type));
//		if (tmp == NULL)
//		{
//			exit(-1);
//		}
//		else
//		{
//			ps->data = tmp;
//			ps->max_size *= 2;
//		}
//	}
//	ps->data[ps->top] = x;
//	ps->top++;
//}
//void Pop(stack*ps)
//{
//	assert(ps);
//	assert(ps->top > 0);
//	ps->top--;
//}
//void Defree(stack*ps)
//{
//	assert(ps);
//	free(ps->data);
//	ps->data = NULL;
//	ps->max_size = ps->max_size = 0;
//}
//bool Empty(stack*ps)
//{
//	assert(ps);
//	return ps->top == 0;
//}
//Type Top(stack*ps)
//{
//	assert(ps);
//	assert(ps->top > 0);
//	return ps->data[ps->top - 1];
//}