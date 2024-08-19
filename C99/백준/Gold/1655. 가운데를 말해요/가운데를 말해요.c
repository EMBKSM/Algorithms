#include <stdio.h>  // 가운데를 말해요
#include <stdlib.h>

typedef struct
{
	int data;
}node;

typedef struct
{
	node arr[100001];
	int size;
}HEAP;

void max_push(HEAP* h, int num)
{
	int i;
	i = ++(h->size);
	while ((i != 1) && (num > h->arr[i / 2].data))
	{
		h->arr[i].data = h->arr[i / 2].data;
		i /= 2;
	}
	h->arr[i].data = num;
}

void min_push(HEAP* h, int num)
{
	int i;
	i = ++(h->size);
	while ((i != 1) && (num < h->arr[i / 2].data))
	{
		h->arr[i].data = h->arr[i / 2].data;
		i /= 2;
	}
	h->arr[i].data = num;
}

int max_pop(HEAP* h)
{
	int root = h->arr[1].data;
	int temp = h->arr[(h->size)--].data;

	int parent = 1;
	int child = 2;
	while (child <= h->size)
	{
		if ((child < h->size) && (h->arr[child].data < h->arr[child + 1].data))
		{
			child++;
		}

		if (temp >= h->arr[child].data)
		{
			break;
		}

		h->arr[parent].data = h->arr[child].data;
		parent = child;
		child *= 2;
	}
	h->arr[parent].data = temp;

	return root;
}

int min_pop(HEAP* h)
{
	int root = h->arr[1].data;
	int temp = h->arr[(h->size)--].data;

	int parent = 1;
	int child = 2;
	while (child <= h->size)
	{
		if ((child < h->size) && (h->arr[child].data > h->arr[child + 1].data))
		{
			child++;
		}

		if (temp <= h->arr[child].data)
		{
			break;
		}

		h->arr[parent].data = h->arr[child].data;
		parent = child;
		child *= 2;
	}
	h->arr[parent].data = temp;

	return root;
}


int main()
{
	int n;
	scanf("%d", &n);

	HEAP min_h, max_h;
	min_h.size = max_h.size = 0;

	for (int i = 0; i < n; i++)
	{
		int num;
		scanf("%d", &num);
		
		if (max_h.size <= min_h.size)
		{
			max_push(&max_h, num);
		}
		else
		{
			min_push(&min_h, num);
		}

		while ((min_h.size > 0) && (max_h.arr[1].data > min_h.arr[1].data))
		{
			// max_heap, min_heap의 top 교환
			max_push(&max_h, min_pop(&min_h));
			min_push(&min_h, max_pop(&max_h));
		}

		printf("%d\n", max_h.arr[1].data);
	}

	return 0;
}