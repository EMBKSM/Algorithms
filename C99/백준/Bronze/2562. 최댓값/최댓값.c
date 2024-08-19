#include <stdio.h>

int main(){
    int x, max=-1000000;
    int num_list[10];
    for(int i = 0; i<9; i++)
        scanf("%d", &num_list[i]);
    for(int i = 0; i<9;i++){
        if(num_list[i]>max){
            max = num_list[i];
            x=i+1;
        }
            
    }
    printf("%d\n%d",max,x);
}