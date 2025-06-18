#include <bits/stdc++.h>
using namespace std;


// to solve this, remember that chars are actually
// represented by integers, ie 'b' - 'a' = 1, 'a' - 'a' = 0 etc
void solve() {
  int n;
  string str;
  bool valid = false;
  vector<int> chars(26, 0);
  cin>>n>>str;
  for (auto c : str) chars[c - 'a']++; // find the difference between char vals (idx_b = 1 etc)
  for (int i = 0; i < 26; i++) {
    if (chars[i] >= 3) {
      valid = true;
    } else if (chars[i] == 2 && (str[0] - 'a' != i || str.back() - 'a' != i)) {
      valid = true;
    }
  }
  if (valid) {
    cout<<"Yes"<<'\n';
  } else {
    cout<<"No"<<'\n';
  }
}

int main() {
  int t;
  cin>>t;
  while (t--) solve();

  return 0;
}
