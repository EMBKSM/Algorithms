#include <iostream>
#include <algorithm>

using namespace std;

using LL = long long;

int main(void)
{
    LL n; cin >> n;
    int dice[6];

    for (int i = 0; i < 6; i++) {
        cin >> dice[i];
    }

    if (n == 1) {
        LL res = 0;

        sort(dice, dice + 6);
        for (int i = 0; i < 5; i++) {
            res += dice[i];
        }

        cout << res;
    }
    else {
        LL v[3];
        v[0] = min(dice[0], dice[5]);
        v[1] = min(dice[1], dice[4]);
        v[2] = min(dice[2], dice[3]);
        sort(v, v + 3);

        LL one = v[0];
        LL two = one + v[1];
        LL three = two + v[2];

        LL res = 0;
        res += three * 4;
        res += (two * 4 * (n - 1)) + (two * 4 * (n - 2));
        res += (one * 4 * (n - 2) * (n - 1)) + (one * (n - 2) * (n - 2));

        cout << res;
    }

    return 0;
}