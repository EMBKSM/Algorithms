#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
bool judge(long long mid, int a, int b, vector<int> g, vector<int> s, vector<int> w, vector<int> t);

long long solution(int a, int b, vector<int> g, vector<int> s, vector<int> w, vector<int> t) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long low = 0LL;
    long long big = 100000000000000000;

    while (low + 1< big) {
        long long mid = (low + big) / 2LL;
        if (judge(mid, a, b, g, s, w, t)) {
            big = mid;
        }
        else {
            low = mid;
        }
    }
    return big;
}

bool judge(long long mid, int a, int b, vector<int> g, vector<int> s, vector<int> w, vector<int> t) {
    long long gold_sum = 0LL;
    long long silver_sum = 0LL;
    long long all_sum = 0LL;
    
    for (int i = 0; i < g.size(); i++) {
        long long cnt = mid / (2LL * t[i]);
        if (mid % (2LL * t[i]) >= t[i]) { 
            cnt++;
        }

        long long tmp = min(cnt * w[i], (long long)(g[i] + s[i]));
        all_sum += tmp;
        gold_sum += min(tmp, (long long)g[i]);
        silver_sum += min(tmp, (long long)s[i]);
    }
        if ((all_sum >= a + b) && gold_sum >= a && silver_sum >= b)
            return true;
        return false;
}