#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
Dlist*BuyNode(Type x)
{
	Dlist*new = (Dlist*)malloc(sizeof(Dlist));
	new->data = x;
	new->next = NULL;
	new->prev = NULL;
	return new;
}

Dlist*Init()
{
	Dlist*ps = BuyNode(0);
	ps->next = ps;
	ps->prev = ps;
	return ps;
}
void Print(Dlist*ps)
{
	assert(ps);
	Dlist*cur = ps->next;
	while (cur!=ps)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void PushBack(Dlist*ps, Type x)
{
	assert(ps);
	Dlist*back = ps->prev;
	Dlist*new = BuyNode(x);
	back->next = new;
	new->prev = back;
	new->next = ps;
	ps->prev = new;
}
void PushFront(Dlist*ps, Type x)
{
	assert(ps);
	Dlist*front = ps->next;
	Dlist*new = BuyNode(x);
	ps->next = new;
	new->prev = ps;
	new->next = front;
	front->prev = new;
}
void PopBack(Dlist*ps)
{
	assert(ps);
	assert(ps->next != ps);
	Dlist*back = ps->prev;
	Dlist*prev = back->prev;
	prev->next = ps;
	ps->prev = prev;
	free(back);
	back = NULL;
}
void PopFront(Dlist*ps)
{
	assert(ps);
	assert(ps->next != ps);
	Dlist*front = ps->next;
	Dlist*back = front->next;
	ps->next = back;
	back->prev = ps;
	free(front);
	front = NULL;
}

Dlist*Find(Dlist*ps, Type x)
{
	Dlist*cur = ps->next;
	while (cur->next != ps)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void Insert(Dlist*ps, Dlist*pos, Type x)
{
	assert(ps);
	Dlist*prev = pos->prev;
	Dlist*new = BuyNode(x);
	prev->next = new;
	new->prev = prev;
	new->next = pos;
	pos->prev = new;
}
void Erase(Dlist*ps, Dlist*pos)
{
	assert(ps);
	Dlist*front = pos->prev;
	Dlist*back = pos->next;
	front->next = back;
	back->prev = front;
	free(pos);
	pos = NULL;
}
void Defree(Dlist*ps)
{
	assert(ps);
	Dlist*cur = ps->next;
	while (cur != ps)
	{
		Dlist*next = cur->next;
		free(cur);
		cur = next;
	}
	free(ps);
	ps = NULL;
}