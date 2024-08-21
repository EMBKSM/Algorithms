#include <iostream>
#include <string>

using namespace std;

int main() {
    string A, B;
    string num;
    int C;
    cin >> A >> B >> C;
    cout << stoi(A) + stoi(B) - C << endl;
    num.append(A).append(B);
    cout << stoi(num) - C;
}