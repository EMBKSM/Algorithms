#include <stdio.h>

int main(){
    int n, temp_a, temp_b;
    for(;;){
        scanf("%d %d", &temp_a, &temp_b);
        if(temp_a == temp_b && temp_a == 0)
            break;
        printf("%d\n", temp_a + temp_b);
    }
}