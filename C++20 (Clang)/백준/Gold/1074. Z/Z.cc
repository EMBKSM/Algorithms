#include <bits/stdc++.h>

using namespace std;

int sol(int N, int r, int c){
    if(N==0)
        return 0;
    else
        return 2*(r%2)+(c%2) + 4*(sol(N-1,r/2,c/2));
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    cout << sol(a,b,c);
}