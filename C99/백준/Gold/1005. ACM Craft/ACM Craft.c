#include <stdio.h>
#include <stdbool.h>
#include <memory.h>
#define max(a, b) a > b ? a : b
int D[1001], N, check[1001];
bool O[1001][1001];
int construction(int c){
    if (check[c] != -1) return check[c];
    int time = 0;
    for (int i = 1; i <= N; i++)
        if (O[i][c])
            time = max(time, construction(i));
    return check[c] = time + D[c];
} 
int main(){
    int T;
    scanf("%d", &T);
    while (T--){
        memset(D, 0, sizeof(D));
        memset(O, false, sizeof(O));
        memset(check, -1, sizeof(check));
		
        int K, W;
        scanf("%d %d", &N, &K);
        for (int i = 1; i <= N; i++)
            scanf("%d", &D[i]);
        for (int i = 0, o1, o2; i < K; i++){
            scanf("%d %d", &o1, &o2);
            O[o1][o2] = true;
        }
        scanf("%d", &W);
        printf("%d\n", construction(W));
    }
}