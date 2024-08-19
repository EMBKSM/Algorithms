#include <stdio.h>

int main(){
    int n, m, cnt=0;
    scanf("%d", &n);
    m = n;
    n = (n < 10) ? n * 11 : ((n % 10) * 10 + (((n % 10 + n / 10)>9) ? (n % 10 + n / 10) %10: (n % 10 + n / 10)));
    cnt++;
    while(n != m){
        n = (n < 10) ? n * 11 : ((n % 10) * 10 + (((n % 10 + n / 10)>9) ? (n % 10 + n / 10) %10: (n % 10 + n / 10)));
        cnt++;
    }
    printf("%d", cnt);
}