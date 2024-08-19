#include <stdio.h>
int main(){
    int temp, N, X;
    scanf("%d %d",&N,&X);
    int qurry[N+1];
    for(int i = 0; i<N ; i++){
        scanf("%d",&qurry[i]);
        if(X>qurry[i])
            printf("%d ", qurry[i]);
    }
}