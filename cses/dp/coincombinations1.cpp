#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9+7;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  ll n, x;
  cin>>n>>x;

  vector<ll> coins(n), dp(x+1, 0);

  for (int a = 0; a < n; a++) cin>>coins[a];

  dp[0] = 1;
  for (int i = 1; i < x + 1; i++) {
    for (auto c : coins) {
      if (i - c >= 0) {
        dp[i] += (dp[i-c]) %= MOD;
      }
    }
  }

  cout<<dp[x]%MOD<<'\n';
  return 0;
}
