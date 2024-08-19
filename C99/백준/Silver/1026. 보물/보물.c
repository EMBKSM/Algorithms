#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
#define MAX_SIZE 101
#define dep(i,a,b) for(int i=a;i<b;i++)

int N;
int arr1[MAX_SIZE];
int arr2[MAX_SIZE];

int cmp1(const void* lhs, const void* rhs) {
	if (*(int*)lhs > *(int*)rhs) {
		return 1;
	}
	else {
		return -1;
	}
}

int cmp2(const void* lhs, const void* rhs) {
	if (*(int*)lhs < *(int*)rhs) {
		return 1;
	}
	else {
		return -1;
	}
}

int main() {
	scanf("%d", &N);
	dep(i,0,N) {
		scanf("%d", &arr1[i]);
	}
	dep(i, 0, N) {
		scanf("%d", &arr2[i]);
	}

	qsort(arr1, N, sizeof(int), cmp1);
	qsort(arr2, N, sizeof(int), cmp2);

	int result = 0;
	dep(i, 0, N) {
		result += arr1[i] * arr2[i];
	}
	printf("%d\n", result);
	
	return 0;
}