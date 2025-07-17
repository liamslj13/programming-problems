// composed by liamslj
// I will become CM one day
#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
  int n,k;
  string s;
  cin>>n>>k>>s;

  vector<int> count(2, 0);

  for (auto c : s) {
    if (c == '1') {
      count[1]++;
    } else {
      count[0]++;
    }
  }

  if (count[1] <= k) {
    cout<<"Alice"<<'\n';
  } else if (n < 2 * k) {
    cout<<"Alice"<<'\n';
  } else {
    cout<<"Bob"<<'\n';
  }
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
