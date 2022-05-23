#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>


//typedef int Type;
//
//typedef struct Node
//{
//	Type a;
//	Node*next;
//}Node;


typedef struct SlistNode Node;
typedef int Type;

struct SlistNode
{
	Node*next;
	Type a;
};


typedef struct Queue
{
	Node*head;
	Node*tail;
}QU;
void Init(QU*ps);
void Defee(QU*ps);
void Push(QU*ps, Type x);
void Pop(QU*ps);
Type Front(QU*ps);
Type Back(QU*ps);
int Size(QU*ps);
bool Empty(QU*ps);







//typedef int Type;
//
//typedef struct Node
//{
//	Type*a;
//	int top;
//	int max_size;
//}Node;
//
//void Init(Node*ps);
//void Defree(Node*ps);
//void Push(Node*ps, Type x);
//void Pop(Node*ps);
//Type Top(Node*ps);
//int Size(Node*ps);
//bool Empty(Node*ps);