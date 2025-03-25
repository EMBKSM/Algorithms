#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string cmd, temp_num_list;
        bool direction = true, exits = false; // 정면
        deque<int> num_list;
        int temp;

        cin >> cmd;
        cin >> temp;
        cin >> temp_num_list;

        temp_num_list.erase(temp_num_list.end() - 1);
        temp_num_list.erase(temp_num_list.begin());

        if(!temp_num_list.empty()){
            istringstream ss(temp_num_list);
            string sub;
            while (getline(ss, sub, ',')) {
                num_list.push_back(stoi(sub));
            }
        }

        while (!cmd.empty()) {
            char c = cmd.at(0);
            cmd.erase(cmd.begin());

            switch (c) {
            case 'R':
                direction = !direction;
                break;
            case 'D':
                if (!num_list.empty()) {
                    if (direction) {
                        num_list.pop_front();
                    }
                    else {
                        num_list.pop_back();
                    }
                }
                else {
                    cout << "error\n";
                    exits = true;
                    break;
                }
                break;
            }
            if (exits) break;
        }

        if (exits) continue;

        if (!direction) {
            reverse(num_list.begin(), num_list.end());
        }

        if (num_list.empty()) {
            cout << "[]\n";
            continue;
        }

        cout << "[";
        for (int j = 0; j < num_list.size() - 1; j++) {
            cout << num_list.at(j) << ",";
        }
        cout << num_list.back() << "]\n";
    }
}
