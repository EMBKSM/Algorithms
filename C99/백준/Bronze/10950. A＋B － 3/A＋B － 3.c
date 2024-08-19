#include <stdio.h>

int main(){
    int n, temp_a, temp_b;
    scanf("%d", &n);
    for(int i = 0; i<n ; i++){
        scanf("%d %d", &temp_a, &temp_b);
        printf("%d\n", temp_a + temp_b);
    }
}