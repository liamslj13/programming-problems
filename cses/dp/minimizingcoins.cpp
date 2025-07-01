#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int INF = 1e9;


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n,x;
  cin>>n>>x;
  vector<int> coins(n), dp(x+1, INF);

  for (int i = 0; i < n; i++) cin>>coins[i];

  dp[0] = 0;
  for (int j = 0; j < x + 1; j++) {
    for (auto c : coins) {
      if (j-c >= 0) {
        dp[j] = min(dp[j], dp[j-c]+1);
      }
    }
  }

  if (dp[x] == INF) cout<<-1<<'\n';
  else cout<<dp[x]<<'\n';
}
