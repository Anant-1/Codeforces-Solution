#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if(s.length() == 0 or s.length() == 1) {
        cout << 0;
        return 0;
    }
    int oneCnt = 0;
    bool flag = false;
    long long int n = s.length();
    for(int i = 0; i < n; i++) {
        if(s[i] == '1') oneCnt++;
        if(oneCnt > 1) {
            flag = true;
            break;
        }
    }
    if(!flag and oneCnt == 1 and n % 2 == 1) {
        cout << (n-1)/2;
    }else{
        cout << (n-1)/2 + 1;
    }
    return 0;
}