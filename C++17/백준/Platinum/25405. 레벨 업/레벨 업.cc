#include <stdio.h>
#include <algorithm>
#define NMAX 100010
#define INF 0x7FFFFFFFFFFFFFFF
typedef long long int lint;
using namespace std;
 
int N, M, K;
lint inp[NMAX];
 
lint l, r, idx, Bsz;
lint a, b, valL, valR;
lint ll, rr, mid, cur;
 
int main() {

    scanf("%d", &N);
    for(int i=0;i<N;i++) scanf("%lld", &inp[i]);
    scanf("%d %d", &M, &K);
 
    sort(inp, inp+N);
 

    l = r = K-1;
    while(0<l or r<N-1) {
        Bsz = (r-l)+1;
 

        valL = INF;
        if(l > 0) {
            ll = 0; rr = M;
            while(ll<=rr) {
                mid = (ll+rr)/2;
 
        
                a = (inp[l-1]+cur) + mid;
                b = inp[l] + (idx + (K-l)*mid)/Bsz;
 
                if(a < b) ll = mid+1;
                else {
                    if(a == b) valL = min( valL, mid );
                    rr = mid-1;
                }
            }
        }
 
   
        valR = INF;
        if(r < N-1) {
            ll = 0; rr = M;
 
            while(ll<=rr) {
                mid = (ll+rr)/2;
 
                a = inp[l] + (idx + (K-l)*mid + (Bsz-1))/Bsz;
                b = inp[r+1];
 
                if(a < b) ll = mid+1;
                else {
                    if(a == b) valR = min( valR, mid );
                    rr = mid-1;
                }
            }
        }
 
        
        if(valL>M and valR>M) break;
        else {
     
            if(valL < valR) {
 
                inp[l-1] = inp[l-1] + cur + valL;
                inp[r] = inp[l-1] + (idx + Bsz)/Bsz;
 
                idx = (idx + (K-l)*valL)%Bsz;
 
                cur += valL;
                M -= valL;
                l--;
            }
            else {
                // 그룹 C에서 그룹 B로 가져오기
                inp[l] = inp[l] + (idx + (K-l)*valR)/Bsz;
                inp[r+1] = inp[l] + (idx+Bsz)/Bsz;

                idx = (idx + (K-l)*valR)%Bsz;
                if(idx>0) idx++;
 
                cur += valR;
                M -= valR;
                r++;
            }
        }
 
    }
 
    if(M > 0) {
        Bsz = (r-l)+1;
 
        inp[l] = inp[l] + (idx + (K-l)*M)/Bsz;
        inp[r] = inp[l] + (idx + (Bsz-1))/Bsz;
 
        idx = (idx + (K-l)*M)%Bsz;
 
        cur += M;
        M = 0;
    }
 
    for(int i=0;i<=r;i++) {
        if(i<l) inp[i] += cur;
        else if(i<=r-idx) inp[i] = inp[l];
        else inp[i] = inp[l]+1;
    }
 
    for(int i=0;i<N;i++) printf("%lld ", inp[i]);
}
 