#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int check_balanced_tree(const vector<int>& a) {
    if (a.size() == 0) return 1;
    if (a.size() == 1) a[0] == 1 ? 1 : 0;
    if (a.size() == 3) {
        if (a[1] == 1) {
            return 1;
        }
        else {
            (a[0] == 1 || a[2] == 1) ? 0 : 1;
        }
    }
    int mid = a.size() / 2;

    if (a[mid] == 0) {
        for (int i = 0; i < mid; i++) {
            if (a[i] == 1) return 0;
        }
        for (int i = mid + 1; i < a.size(); i++) {
            if (a[i] == 1) return 0;
        }
        return 1;
    }
    else {
        vector<int> left;
        vector<int> right;
        for (int i = 0; i < mid; i++) {
            left.push_back(a[i]);
        }
        for (int i = mid+1; i < a.size(); i++) {
            right.push_back(a[i]);
        }
        
        int left_result = check_balanced_tree(left);
        int right_result = check_balanced_tree(right);

        return left_result == 1 && right_result == 1 ? 1 : 0;
    }
}

vector<int> solution(vector<long long> numbers) {
    vector<int> answer;

    for (long long number : numbers) {
        vector<int> binary;
        while (number > 0) {
            binary.push_back(number % 2);
            number /= 2;
        }
        reverse(binary.begin(), binary.end());
        int n = 1;
        while ((1 << n) - 1 < binary.size()) n++;
        while ((1 << n) - 1 > binary.size()) binary.insert(binary.begin(), 0); 
        answer.push_back(check_balanced_tree(binary));
    }

    return answer;
}