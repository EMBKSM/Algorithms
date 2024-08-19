#include <stdio.h>

int main(){
    char word[6][16]={0};
    for(int i = 0;i<5;i++)
        scanf("%s", word[i]);
    for(int i = 0;i<5;i++){
        
    }
    for(int j = 0; j<15;j++){
        for(int i = 0; i<5; i++){
            if(word[i][j] !=NULL)
                printf("%c",word[i][j]);
        }
    }
    
}