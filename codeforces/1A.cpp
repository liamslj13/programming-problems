#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll n, m, a;
  cin>>n>>m>>a;

  cout<<((m+a-1)/a)*((n+a-1)/a)<<'\n';

  return 0;
}
