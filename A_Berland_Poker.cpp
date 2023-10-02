#include<bits/stdc++.h>
#define anant ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    anant
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        int c = n/k;
        if(m <= c) {
            cout << m << endl;
        }else{
            int rem = m - c;
            int other = ceil(1.0*rem/(k-1));
            cout << c - other << endl;
        }
    }  
    return 0;
}