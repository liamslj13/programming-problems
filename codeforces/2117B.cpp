#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  int n;
  cin>>n;
  cout<<1<<' '; // elem 1
  for (int i = n; i > 2; i--) cout<<i<<' ';
  cout<<2<<'\n'; // elem 2
}

int main() {
  int t;
  cin>>t;

  while (t--) solve();
}
