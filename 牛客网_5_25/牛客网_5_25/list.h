#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>

typedef struct SlistNode Node;
typedef int  Type;

struct SlistNode
{
	Node*next;
	Type*data;
};

typedef struct Queue
{
	Node*head;
	Node*tail;
}Queue;

void Init(Queue*ps);
void Push(Queue*ps, Type x);
void Pop(Queue*ps);
Type Front(Queue*ps);
Type Back(Queue*ps);
void Defree(Queue*ps);
bool Empty(Queue*ps);
int Size(Queue*ps);