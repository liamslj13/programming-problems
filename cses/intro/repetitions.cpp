#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int mx = 1, curCount = 1;
  string s;
  cin>>s;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == s[i-1]) {
      curCount++;
    } else {
      curCount = 1;
    }
    mx = max(mx, curCount);
  }
  cout<<mx;
  return 0;
}
