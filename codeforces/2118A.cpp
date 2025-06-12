#include <bits/stdc++.h>
using namespace std;

int main() {
  int t,n,k;
  cin>>t;

  while (t--) {
    cin>>n>>k;
    for (int i = 0; i < n; i++) {
      if (k != 0) {
        cout<<'1';k--;
      } else {
        cout<<'0';
      }
    }
    cout<<'\n';
  }

  return 0;
}
