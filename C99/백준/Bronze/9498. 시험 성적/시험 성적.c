#include <stdio.h>
int main() {
	int point;
	scanf("%d", &point);
	if (point > 100 || point < 0)
	{
		printf("ERROR");
	}
	switch (point / 10)
	{
	case 6:
		printf("D");
		break;
	case 7:
		printf("C");
		break;
	case 8:
		printf("B");
		break;
	case 9:
	case 10:
		if (point > 100 || point < 0)
		{
			break;
		}
		printf("A");
		break;
	default:
		printf("F");
		break;
	}
}