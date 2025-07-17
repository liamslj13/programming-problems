// composed by liamslj
// I will become CM one day
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string s;
  int count = 1;
  bool yes = false;
  cin>>s;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == s[i-1]) {
      count++;
    } else {
      count = 1;
    }
    if (count >= 7) yes = true;
  }

  if (yes) cout<<"YES";
  else cout<<"NO";

  return 0;
}
