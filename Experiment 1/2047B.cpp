// 2047 B
#include <iostream>
#include <vector>
 
#include <map>
 
#include <cmath>
#include <climits>
#include <cstring>
using namespace std;
 
 
 
 
bool isPalindrome(string s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) return false;
    }
    return true;
}
 
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> alpha(26 , 0);
    for (int i = 0; i<n; i++) {
        alpha[s[i] - 'a']++;
    }
    int maxi = INT_MIN;
    int maxiInd = -1;
    int mini = INT_MAX;
    int miniInd = -1;
    for (int i = 0; i<alpha.size(); i++) {
        if (alpha[i] != 0 && alpha[i] > maxi) {
            maxi = alpha[i];
            maxiInd = i;
        }
        if (alpha[i] != 0 && alpha[i] <= mini) {
            mini = alpha[i];
            miniInd = i;
        }
    }
    for (int i = 0; i<n; i++) {
        if (s[i] == miniInd + 97) {
            s[i] = maxiInd + 97;
            break;
        }
    }
    cout << s << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}