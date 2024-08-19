#include <stdio.h>

int main(){
    char word[4], temp;
    scanf("%s", word);
    temp = word[0];
    word[0] = word[2];
    word[2] = temp;
    printf("%s", word);
}