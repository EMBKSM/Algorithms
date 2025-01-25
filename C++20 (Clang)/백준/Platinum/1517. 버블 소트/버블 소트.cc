#include <bits/stdc++.h>
using namespace std;

long long counts = 0;

void merge(vector<int>& array, int start, int mid, int end) {
    int i = start, j = mid + 1, k = 0;
    vector<int> temp(end - start + 1);

    while (i <= mid && j <= end) {
        if (array[i] <= array[j]) {
            temp[k++] = array[i++];
        }
        else {
            temp[k++] = array[j++];
            counts += mid - i + 1;
        }
    }

    while (i <= mid) temp[k++] = array[i++];
    while (j <= end) temp[k++] = array[j++];

    for (i = start, k = 0; i <= end; i++, k++) array[i] = temp[k];
}

void mergeSort(vector<int>& array, int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(array, start, mid);
        mergeSort(array, mid + 1, end);
        merge(array, start, mid, end);
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++) cin >> array[i];

    mergeSort(array, 0, n - 1);

    cout << counts << endl;

    return 0;
}