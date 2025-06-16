#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int t, n, x;
  cin>>t;

  while (t--) {
    int l = 11, r = -1;
    cin>>n>>x;
    for (int i = 0; i < n; i++) {
      int door; cin>>door;
      if (door == 1) {
        l = min(l, i);
        r = max(r, i);
      }
    }
    if (x >= r - l + 1) {
      cout<<"YES"<<'\n';
    } else {
      cout<<"NO"<<'\n';
    }
  }

  return 0;
}
