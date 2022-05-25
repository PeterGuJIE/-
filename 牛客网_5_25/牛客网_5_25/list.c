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
//		Node*next = cur->next;
//		free(cur);
//		cur = next;
//	}
//	ps->head = ps->tail = NULL;
//}
//bool Empty(Queue*ps)
//{
//	assert(ps);
//	return ps->head == NULL;
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