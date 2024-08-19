#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d",&a,&b);
    if(a == b)
        printf("==");
    else
        printf("%c", (a>b) ? '>':'<');
}