#include <bits/stdc++.h>

using namespace std;

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    
    bool target_exists = false;
    for (const string& word : words) {
        if (word == target) {
            target_exists = true;
            break;
        }
    }
    if (!target_exists) {
        return 0;
    }
    
    queue<pair<string, int>> q;
    q.push({begin, 0});
    
    vector<bool> visited(words.size(), false);
    
    while (!q.empty()) {
        string current_word = q.front().first;
        int current_step = q.front().second;
        q.pop();
        
        if (current_word == target) {
            return current_step;
        }
        
        for (int i = 0; i < words.size(); ++i) {
            if (visited[i]) {
                continue;
            }
            
            int diff_count = 0;
            for (int k = 0; k < current_word.length(); ++k) {
                if (current_word[k] != words[i][k]) {
                    diff_count++;
                }
            }
            
            if (diff_count == 1) {
                visited[i] = true;
                q.push({words[i], current_step + 1});
            }
        }
    }
    
    return 0;
}