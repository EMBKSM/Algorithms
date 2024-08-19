#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char input[10000];
    int B;
    int result = 0;

    scanf("%s %d", input, &B);    

    int len = strlen(input);      

    for (int i = 0; i < len; i++) {
        int digit;
        if (input[i] >= '0' && input[i] <= '9') {
            digit = input[i] - '0';   
        }
        else if (input[i] >= 'A' && input[i] <= 'Z') {
            digit = input[i] - 'A' + 10;
        }
        
        result += digit * pow(B, len - 1 - i);     
    }

    printf("%d", result);

    return 0;
}