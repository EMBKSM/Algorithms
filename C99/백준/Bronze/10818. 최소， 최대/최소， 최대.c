#include <stdio.h>

int main(){
    int n, min=1000000, max=-1000000;
    scanf("%d", &n);
    int num_list[n+1];
    for(int i = 0; i<n; i++)
        scanf("%d", &num_list[i]);
    for(int i = 0; i<n;i++){
        if(num_list[i]>max)
            max = num_list[i];
        if(num_list[i]<min)
            min = num_list[i];
    }
    printf("%d %d",min, max);
}