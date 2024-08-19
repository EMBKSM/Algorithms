#include <stdio.h>
int sol(int N, int r, int c){
    if(N==0)
        return 0;
    else
        return 2*(r%2)+(c%2) + 4*(sol(N-1,r/2,c/2));
}
int main(){
    int a, b, c;
    scanf("%d %d %d", &a,&b,&c);
    printf("%d", sol(a,b,c));
}


