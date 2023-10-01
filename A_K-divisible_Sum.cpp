#include<bits/stdc++.h>
#define anant ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    anant
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        if(n > k) {
            if(n % k == 0) {
                k = n;
            }
            else {
                k = k * ((n/k)+1);
            }
        }
        
        if(k % n == 0) {
            cout << k/n << endl;
        }else{
            cout << (k/n)+1 << endl;
        }
    }
    return 0;
}