#include <stdio.h>
#include <stdlib.h>

long long count = 0;

void merge(int *array, int start, int mid, int end) {
    int i = start, j = mid+1, k = 0, temp[end-start+1];
    while(i <= mid && j <= end) {
        if(array[i] <= array[j]) {
            temp[k++] = array[i++];
        } else {
            temp[k++] = array[j++];
            count += mid - i + 1; // 왼쪽 배열의 남은 원소 수만큼 카운트 증가
        }
    }
    while(i <= mid) temp[k++] = array[i++];
    while(j <= end) temp[k++] = array[j++];
    for(i = start, k = 0; i <= end; i++, k++) array[i] = temp[k];
}

void mergeSort(int *array, int start, int end) {
    if(start < end) {
        int mid = (start + end) / 2;
        mergeSort(array, start, mid);
        mergeSort(array, mid+1, end);
        merge(array, start, mid, end);
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int array[n];
    for(i = 0; i < n; i++) scanf("%d", &array[i]);

    mergeSort(array, 0, n-1);

    printf("%lld\n", count);

    return 0;
}