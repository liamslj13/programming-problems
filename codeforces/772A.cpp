#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, res=0;
  cin>>n;
  for (int i = 0; i < n; i++) {
    int temp;
    cin>>temp;
    res |= temp;
  }
  cout<<res<<'\n';
}

int main() {
  int t;
  cin>>t;
  while(t--) solve();

  return 0;
}
