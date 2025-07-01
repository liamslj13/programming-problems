#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n;
  cin>>n;

  vector<int> dp(n+1, 0);
  dp[0] = 1;

  for (int i = 1; i <= n; i++) {
    for (int d = 1; d <= 6; d++) {
      if (i - d >= 0) {
        dp[i] = (dp[i] + dp[i-d]) % MOD;
      }
    }
  }

  cout<<dp[n]<<'\n';
  return 0;
}
