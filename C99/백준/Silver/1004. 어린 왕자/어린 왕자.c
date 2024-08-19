#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int t; scanf("%d", &t);
    int x1, y1, x2, y2, n, result; //출발점의 좌표 (x1, y1), 도착점의 좌표(x2, y2), result는 출력값
    int cx[50], cy[50], r[50]; 
    // cx[0], cy[0], r[0]는 각각 1번째 원의 x좌표, y좌표, 반지름
    // cx[1] , cy[1], r[1]은 각각 2번째 원의 x좌표, y좌표, 반지름
    
    while (t--) {
        result = 0;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d %d %d", &cx[i], &cy[i], &r[i]);
        }
        
        for (int i = 0; i < n; i++) {
            if (pow(x1 - cx[i], 2) + pow(y1 - cy[i], 2) < pow(r[i], 2)) {
                if (pow(x2 - cx[i], 2) + pow(y2 - cy[i], 2) < pow(r[i], 2)) continue;
                result++;
            }
            else if (pow(x2 - cx[i], 2) + pow(y2 - cy[i], 2) < pow(r[i], 2)) {
                if (pow(x1 - cx[i], 2) + pow(y1 - cy[i], 2) < pow(r[i], 2)) continue;
                result++;
            }
        }    
        
        printf("%d\n", result);
    }
}