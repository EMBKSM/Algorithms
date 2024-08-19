#include <stdio.h>
#include <math.h>
 
char star[2187][2187];
void make_star(int size, char (*star)[2187], int m, int n); // 1 <= k < 8
 
int main(void){
    int N;
    scanf("%d", &N);
 
    make_star(N, star, N-1, N-1);

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(star[i][j]=='*')
                printf("%c", star[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
}
 
void make_star(int size, char (*star)[2187], int m, int n){
    if(size==1){
        star[m][n] = '*';
    }
    else{
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(i==1 && j==1){
                    for(int c1=(m+1)-(size/3)*2; c1<size/3; c1++){
                        for(int c2=(n+1)-(size/3)*2; c2<size/3; c2++){
                            star[c1][c2] = '\0';
                        }
                    }
                }
                else
                    make_star(size/3, star, (m+1)-(size/3)*i-1, (n+1)-(size/3)*j-1);
            }
        }
    }
}