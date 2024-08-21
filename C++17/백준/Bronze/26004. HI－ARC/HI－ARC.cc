#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int cnts[5] = {0,};
    cin >> n;
    char* str = new char[n+1];
    cin >> str;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'H') {
            cnts[0]++;
        }
        else if (str[i] == 'I') {
            cnts[1]++;
        }
        else if (str[i] == 'A') {
            cnts[2]++;
        }
        else if (str[i] == 'R') {
            cnts[3]++;
        }
        else if(str[i] == 'C') {
            cnts[4]++;
        }
    }
    cout << *min_element(cnts,cnts+5);
}