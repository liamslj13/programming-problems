#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {

}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string s, hello = "hello";
  int target = 0;
  cin>>s;

  for (auto c : s) {
    if (target == 5) {
      break;
    }
    if (c == hello[target]) target++;
  }
  if (target == 5) cout<<"YES"<<'\n';
  else cout<<"NO"<<'\n';

  return 0;
}
