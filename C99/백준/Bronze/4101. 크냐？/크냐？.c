#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d",&a,&b);
    while(a!=0&&b!=0){
        (a>b) ? printf("Yes\n"):printf("No\n");
        scanf("%d %d",&a,&b);
    }
}