#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

// ֧�ֶ�̬������ջ
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;		// ջ��
	int capacity;  // ���� 
}Stack;
// ��ʼ��ջ 
void StackInit(Stack* ps);
// ��ջ 
void StackPush(Stack* ps, STDataType data);
// ��ջ 
void StackPop(Stack* ps);
// ��ȡջ��Ԫ�� 
STDataType StackTop(Stack* ps);
// ��ȡջ����ЧԪ�ظ��� 
int StackSize(Stack* ps);
// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0 
int StackEmpty(Stack* ps);
// ����ջ 
void StackDestroy(Stack* ps);

void PrintStack(Stack* ps);