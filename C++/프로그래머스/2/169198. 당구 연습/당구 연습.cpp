#include <cmath>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int summon_answer(int startX, int startY, int endX, int endY, int m, int n) {
    double u = numeric_limits<double>::infinity();
    double d = numeric_limits<double>::infinity();
    double l = numeric_limits<double>::infinity();
    double r = numeric_limits<double>::infinity();

    if (!(startX == endX && startY > endY)) {
        u = distance(startX, -startY, endX, endY);
    }
    if (!(startX > endX && startY == endY)) {
        d = distance(-startX, startY, endX, endY);
    }
    if (!(startX == endX && startY < endY)) {
        l = distance(startX, 2 * n - startY, endX, endY);
    }
    if (!(startX < endX && startY == endY)) {
        r = distance(2 * m - startX, startY, endX, endY);
    }

    return static_cast<int>(round(pow(min({ u, d, l, r }), 2)));
}


vector<int> solution(int m, int n, int startX, int startY, vector<vector<int>> balls) {
    vector<int> answer;
    for (const auto& ball : balls) {
        int x = ball[0];
        int y = ball[1];
        answer.push_back(summon_answer(startX, startY, x, y, m, n));
    }
    return answer;
}
