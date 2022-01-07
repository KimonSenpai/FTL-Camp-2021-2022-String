#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;

    vector<int> pref(s.size());
    for(int i = 1; i < s.size(); i++) {
        int p = pref[i - 1];
        while(s[i] != s[p] && p != 0) {
            p = pref[p-1];
        }
        
        pref[i] = (s[i] == s[p]?p+1:0);
    }

    for(int i = 0; i < s.size(); i++) {
        cout << pref[i] << '\n';
    }
    cout << '\n';
}