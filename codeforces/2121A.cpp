#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n,s,x; // s = start, n = len
  int l = 101, r = -1;
  cin>>n>>s;
  for (int i=0;i<n;i++) {
    cin>>x;
    l = min(x, l); r = max(x, r);
  }
  if (s >= r) {
    cout<<s-l<<'\n';
  } else if (s <= l) {
    cout<<r-s<<'\n';
  } else if (s - l <= r - s) {
    cout<<s - l + r - l<<'\n';
  } else {
    cout<<r - s + r - l<<'\n';
  }
}


int main() {
  int t;
  cin>>t;
  while (t--) solve();
  return 0;
}
