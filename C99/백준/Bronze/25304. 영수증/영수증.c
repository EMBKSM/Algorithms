#include <stdio.h>

int main(){
    int X, n, price, cnt, sum=0;
    scanf("%d", &X);
    scanf("%d", &n);
    for(int i = 0; i< n; i++){
        scanf("%d %d", &price,&cnt);
        sum += (price*cnt);
    }
    if(X==sum)
        printf("Yes");
    else
        printf("No");
}