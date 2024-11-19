#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    for (int i = 0; i < dic.size(); i++) {
        string dics = dic[i];
        int cnt = 0;
        for (int j = 0; j < spell.size(); j++) {
            auto t = dics.find(spell[j]);
            if (t != string::npos) cnt++;
        }
        if (cnt == spell.size()) {
            answer = 1;
        }
    }
    return answer;
}