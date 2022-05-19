#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
#include<assert.h>
#pragma once
typedef int Listtpye;
typedef struct list List;
struct list
{
	Listtpye *a;
	int size;
	int max_size;
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
	find,
	modify,
	print
};

void Init(List*ps);
void Print(List*ps);
void Defree(List*ps);
void PushBack(List*ps, Listtpye x);
void PushFront(List*ps, Listtpye x);
void PopBack(List*ps);
void PopFront(List*ps);
void Insert(List*ps, int pos, Listtpye x);
void Erase(List*ps, int pos);
int Find(List*ps, Listtpye x);
void Modify(List*ps, int pos, Listtpye x);