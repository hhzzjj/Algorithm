#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>

struct queue
{
	int data[100];
	int head;        //����
	int tail;        //��β
};

void caculate(struct queue q)                 //���ܣ�ɾ����һ�������ڶ�λ�ŵ�ĩβ��ɾ����ǰ��һ��������һ���ŵ�ĩβ......���˳�����ɾ��������
{
	while (q.head < q.tail)    //���в�Ϊ��ʱ
	{
		printf("%d", q.data[q.head]);
		q.head++;

		q.data[q.tail] = q.data[q.head];
		q.tail++;
		q.head++;
	}
}