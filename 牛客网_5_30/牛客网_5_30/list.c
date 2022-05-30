#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
//void Init(Node*ps)
//{
//	ps->a = malloc(sizeof(Type)* 4);
//	if (ps == NULL)
//		exit(-1);
//	ps->max_size = 4;
//	ps->size = 0;
//}
//void Defree(Node*ps)
//{
//	free(ps->a);
//	ps->a = NULL;
//	ps->max_size = ps->size = 0;
//}
//void Push(Node*ps, Type x)
//{
//	if (ps->max_size == ps->size)
//	{
//		Type*tmp = realloc(ps->a, sizeof(Type)*ps->max_size * 2);
//		if (ps == NULL)
//			exit(-1);
//		else
//		{
//			ps->a = tmp;
//			ps->max_size *= 2;
//		}
//	}
//	ps->a[ps->size] = x;
//	ps->size++;
//}
//
//
//bool Empty(Node*ps)
//{
//	assert(ps);
//	return ps->size == 0;
//}
//
//
//Type Top(Node*ps)
//{
//	assert(ps);
//	return ps->a[ps->size - 1];
//}
//void Pop(Node*ps)
//{
//	assert(ps);
//	ps->size--;
//}