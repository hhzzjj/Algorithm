#include "problem1.h"
#include <stdio.h>

int main()
{
	struct queue q;
	int i;
	q.head = 1;
	q.tail = 1;
	for (i = 1; i <=9; i++)   //ע�⣬�˴�i��1��ʼ��9
	{
		scanf("%d", &q.data[q.tail]);
		q.tail++;
	}

	caculate(q);
	getchar(); getchar();
	return 0;

}