#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    char word[1001];
    for(int i = 0; i<n;i++){
        scanf("%s", word);
        printf("%c%c\n",word[0],word[strlen(word)-1]);
    }

}