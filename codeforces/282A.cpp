// composed by liamslj
// I will become CM one day
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, X = 0;
  string curr;
  cin>>n;

  for (int i = 0; i < n; i++) {
    cin>>curr;
    for (auto c : curr) {
      if (c == '+') {
        X++;
        break;
      }
      if (c == '-') {
        X--;
        break;
      }
    }
  }

  cout<<X<<'\n';

  return 0;
}
