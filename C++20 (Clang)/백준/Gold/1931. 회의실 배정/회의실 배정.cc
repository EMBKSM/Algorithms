#include <bits/stdc++.h>

using namespace std;

struct Compare_first {
    bool operator()(const tuple<int, int> a, const tuple<int, int> b) {
        return (get<1>(a) == get<1>(b)) ? get<0>(a) > get<0>(b) : get<1>(a) > get<1>(b);
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    priority_queue<tuple<int, int>, vector<tuple<int, int>>, Compare_first> discussion_selecte;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        tuple<int, int> temp = make_tuple(a, b);
        discussion_selecte.push(temp);
    }

    int last_end = get<1>(discussion_selecte.top());
    discussion_selecte.pop();
    int cnt = 1;

    while (!discussion_selecte.empty()) {
        while (!discussion_selecte.empty() && last_end > get<0>(discussion_selecte.top())) {
            discussion_selecte.pop();
        }

        if (discussion_selecte.empty()) {
            break;
        }
        last_end = get<1>(discussion_selecte.top());
        discussion_selecte.pop();
        cnt++;
    }

    cout << cnt;
}
