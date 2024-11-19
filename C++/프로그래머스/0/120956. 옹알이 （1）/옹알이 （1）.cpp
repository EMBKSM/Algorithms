#include <string>
#include <deque>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for (int i = 0; i < babbling.size(); i++) {
        deque<char> dq;
        for (int j = 0; j < babbling[i].size(); j++) {
            dq.push_back(babbling[i][j]);
            if (dq.size() >= 2) {
                if ((dq.at(0) == 'm' && dq.at(1) == 'a') || (dq.at(0) == 'y' && dq.at(1) == 'e')) {
                    dq.pop_front();
                    dq.pop_front();
                }
                if (dq.size() >= 3) {
                    if ((dq.at(0) == 'a' && dq.at(1) == 'y' && dq.at(2) == 'a') || (dq.at(0) == 'w' && dq.at(1) == 'o' && dq.at(2) == 'o')) {
                        dq.pop_front();
                        dq.pop_front();
                        dq.pop_front();
                    }
                    else if ((dq.at(1) == 'm' && dq.at(2) == 'a') || (dq.at(1) == 'y' && dq.at(2) == 'e')) {
                        dq.pop_front();
                        dq.pop_front();
                    }
                }
            }
            if (dq.size() == 3) {
                break;
            }
        }
        if (dq.size() == 0) {
            answer++;
        }
    }
    return answer;
}
