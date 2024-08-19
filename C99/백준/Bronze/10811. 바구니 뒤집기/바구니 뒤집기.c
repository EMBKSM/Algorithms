#include <stdio.h>

int main(void)
{
    int basket[101] = {0,};
    int N,M,i,j;
    int temp;

    scanf("%d %d", &N, &M);

    for (int a = 0; a < N; a++){
        basket[a] = a+1;
    }

    for (int b = 0; b < M; b++){
        scanf("%d %d", &i, &j);
        for (int c = i-1; c < j; c++){
            temp = basket[c];
            basket[c] = basket[j-1];
            basket[j-1] = temp;
            j--;
        }
    }

    for (int d = 0; d < N; d++){
        printf("%d ", basket[d]);
    }

    return 0;
}