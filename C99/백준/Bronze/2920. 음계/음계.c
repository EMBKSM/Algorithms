#include <stdio.h>
int main(){
    int num_list[9];
    scanf("%d %d %d %d %d %d %d %d",&num_list[0],&num_list[1],&num_list[2],&num_list[3],&num_list[4],&num_list[5],&num_list[6],&num_list[7]);
    if(num_list[0]==1&&num_list[1]==2&&num_list[2]==3&&num_list[3]==4&&num_list[4]==5&&num_list[5]==6&&num_list[6]==7&&num_list[7]==8)
        printf("ascending");
    else if(num_list[0]==8&&num_list[1]==7&&num_list[2]==6&&num_list[3]==5&&num_list[4]==4&&num_list[5]==3&&num_list[6]==2&&num_list[7]==1)
        printf("descending");
    else
        printf("mixed");
}