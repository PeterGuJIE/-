#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
void Init(List*ps)
{
	ps->a = NULL;
	ps->max_size = 0;
	ps->size = 0;
}
void CheckSize(List*ps)
{
	if (ps->size == ps->max_size)
	{
		int new_max = ps->max_size == 0 ? 4 : ps->max_size * 2;
		Listtpye*tmp = (Listtpye*)realloc(ps->a, sizeof(Listtpye)*new_max * 2);
		if (tmp == NULL)
		{
			printf("%s\n", strerror(errno)); 
			return;
		}
		else
		{
			ps->a = tmp;
			ps->max_size = new_max;
		}
	}
}
void PushBack(List*ps, Listtpye x)
{
	CheckSize(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
void PushFront(List*ps, Listtpye x)
{
	CheckSize(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void Print(List*ps)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void PopBack(List*ps)
{
	assert(ps->size>0);
	ps->a[ps->size - 1] = 0;
	ps->size--;
}
void PopFront(List*ps)
{
	assert(ps->size > 0);
	int front = 1;
	while (front<ps->size)
	{
		ps->a[front - 1] = ps->a[front];
		front++;
	}
	ps->size--;
}
void Insert(List*ps, int pos, Listtpye x)
{
	assert(pos < ps->size);
	int end = ps->size - 1;
	while (end>=pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}
void Erase(List*ps, int pos)
{
	assert(pos < ps->size);
	int front = pos + 1;
	while (front<ps->size)
	{
		ps->a[front - 1] = ps->a[front];
		front++;
	}
	ps->size--;
}
int Find(List*ps, Listtpye x)
{
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
	return -1;
}
void Modify(List*ps, int pos, Listtpye x)
{
	assert(pos < ps->size);
	ps->a[pos] = x;
}
void Defree(List*ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->max_size = ps->size = 0;
}
