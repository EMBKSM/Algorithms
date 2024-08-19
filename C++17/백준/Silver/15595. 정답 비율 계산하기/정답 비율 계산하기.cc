#include <string>
#include <map>
#include <iostream>
using namespace std;

int n;
double ACpeople = 0;
double fail_cnt = 0;
map<string, int> manageNotAC;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.fixed, cout.precision(14);
    cin >> n;
    while (n--)
    {
        int submitNum, markResult, memory, time, lang, length;
        string UserId;
        cin >> submitNum >> UserId >> markResult >> memory >> time >> lang >> length;
        if ("megalusion" == UserId)
            continue;
        if (markResult == 4)
        {
            if (manageNotAC[UserId] != -1)
            {
                ACpeople++;
                fail_cnt += manageNotAC[UserId];
                manageNotAC[UserId] = -1;
            }
            continue;
        }
        if (manageNotAC[UserId] != -1)
            manageNotAC[UserId]++;
    }
    cout << ((ACpeople == 0) ? 0 : (ACpeople / (ACpeople + fail_cnt)) * 100);
    return 0;
}