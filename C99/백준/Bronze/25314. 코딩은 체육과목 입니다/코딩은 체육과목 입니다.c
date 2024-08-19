#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    n /=4;
    for(int i = 0; i<n; i++)
        printf("long ");
    printf("int");
}