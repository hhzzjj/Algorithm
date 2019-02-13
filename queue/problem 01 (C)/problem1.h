#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>

struct queue
{
	int data[100];
	int head;        //队首
	int tail;        //队尾
};

void caculate(struct queue q)                 //功能：删除第一个，将第二位放到末尾；删除当前第一个，将下一个放到末尾......最后按顺序输出删除的数字
{
	while (q.head < q.tail)    //队列不为空时
	{
		printf("%d", q.data[q.head]);
		q.head++;

		q.data[q.tail] = q.data[q.head];
		q.tail++;
		q.head++;
	}
}