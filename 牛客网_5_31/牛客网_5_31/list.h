#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
#include<string.h>
typedef  struct Maze Type;

typedef struct Maze
{
	int row;
	int col;
}Maze;


typedef struct Node
{
	Type*a;
	int top;
	int max_size;
}Node;


void Init(Node*ps);
void Push(Node*ps, Type n);
Type Top(Node*ps);
void Pop(Node*ps);
bool Empty(Node*ps);
void Defree(Node*ps);
int Size(Node*ps); 