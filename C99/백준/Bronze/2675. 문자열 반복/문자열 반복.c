#include <stdio.h>
#include <string.h>
int main(){
    int n, m;
    scanf("%d", &n);
    char word[21];
    for(int i = 0; i < n; i++){
        scanf("%d %s",&m, word);
        for(int j = 0; j<strlen(word); j++)
            for(int k=0;k<m;k++)
                printf("%c",word[j]);
        printf("\n");
    }
    
}