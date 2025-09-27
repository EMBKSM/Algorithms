#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> operations) {
    priority_queue<int> max_heap;
    priority_queue<int, vector<int>, greater<int>> min_heap;

    map<int, int> counts;

    int size = 0;

    for (const string& op : operations) {
        stringstream ss(op);
        char command;
        int num;
        ss >> command >> num;

        if (command == 'I') {
            max_heap.push(num);
            min_heap.push(num);
            counts[num]++;
            size++;
        } else if (command == 'D') {
            if (size == 0) {
                continue;
            }

            if (num == 1) {
                while (!max_heap.empty() && counts[max_heap.top()] == 0) {
                    max_heap.pop();
                }
                
                if (!max_heap.empty()) {
                    counts[max_heap.top()]--;
                    max_heap.pop();
                    size--;
                }
            } else {
                while (!min_heap.empty() && counts[min_heap.top()] == 0) {
                    min_heap.pop();
                }

                if (!min_heap.empty()) {
                    counts[min_heap.top()]--;
                    min_heap.pop();
                    size--;
                }
            }
        }
    }

    if (size == 0) {
        return {0, 0};
    } else {
        while (!max_heap.empty() && counts[max_heap.top()] == 0) {
            max_heap.pop();
        }
        while (!min_heap.empty() && counts[min_heap.top()] == 0) {
            min_heap.pop();
        }
        
        return {max_heap.top(), min_heap.top()};
    }
}