#include <stdio.h>

int main(){
    int num_list[9][9], max=-1,heng,hot;//hot = 열, heng = 행
    for(int i = 0; i<9;i++)
        for(int j = 0; j<9; j++)
            scanf("%d", &num_list[i][j]);
    for(int i = 0; i<9; i++){
        for(int j = 0;j<9; j++){
            if(num_list[i][j]>max){
                max= num_list[i][j];
                heng = i+1;
                hot =j+1;
            }
        }
    }
    printf("%d\n%d %d", max, heng, hot);
}