#include <string>
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int* a = new int[n+1];
    for (int i = 2; i <= n; i++) {
        a[i] = i;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (a[i] == 0)
            continue;
        for (int j = i * i; j <= n; j += i)
            a[j] = 0;
    }
    for (int i = 2; i <= n; i++) {
        if (a[i] == 0) answer++;
    }
    return answer;
}