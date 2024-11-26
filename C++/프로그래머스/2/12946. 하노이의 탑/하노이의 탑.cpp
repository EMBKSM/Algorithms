#include <string>
#include <vector>

using namespace std;
vector<vector<int>> answer;

void hanoi(int n, int start, int end, int temp) {
    if (n == 1) {
        answer.push_back({ start,end });
        return;
    }
    hanoi(n - 1, start, temp, end);
    answer.push_back({ start,end });
    hanoi(n - 1, temp, end, start);
}

vector<vector<int>> solution(int n) {
    hanoi(n, 1, 3, 2);
    return answer;
}