#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
  int a,x,y;
  cin>>a>>x>>y;

  int aliceDistX, aliceDistY;
  aliceDistX = a - x;
  aliceDistY = a - y;

  if (aliceDistX > 0 && aliceDistY > 0 || aliceDistX < 0 && aliceDistY < 0)
    cout<<"YES"<<'\n';
  else
    cout<<"NO"<<'\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int t;
  cin>>t;
  while (t--) solve();

  return 0;
}
