#include <stdio.h>

int main(){
    int h, m;
    scanf("%d %d",&h, &m);
    if((m-45)<0){
        if(h==0){
            h=23;
            m+= 15;
        }
        else{
            m+=15;
            h-= 1;
        }
    }
    else{
        m-=45;
    }
    printf("%d %d", h, m);
}