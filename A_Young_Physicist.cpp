#include<bits/stdc++.h>
using namespace std;
    
int main() {
    int n;
    cin >> n;
    int sumi = 0, sumj = 0, sumk = 0;
    while(n--) {
        int i, j, k;
        cin >> i >> j >> k;
        sumi += i;
        sumj += j;
        sumk += k;
    }
    if(sumi == 0 && sumj == 0 and sumk == 0) cout << "YES";
    else cout << "NO";
    return 0;
}