#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// for max elems
string getSuffixBitString(vector<int> v) {
  string s = "1";
  int currentMax = v[v.size()-1];
  for (int i = v.size()-1; i > 0; i--) {
    if (v[i] > currentMax) {
      currentMax = v[i];
      s += '1';
    } else {
      s += '0';
    }
  }
  s += '1';
  reverse(s.begin(), s.end());
  return s;
}

// for min elems
string getPrefixBitString(vector<int> v) {
    string s = "1";
    int currentMin = v[0];
    for (int i = 1; i < v.size() - 1; i++) {
      if (v[i] < currentMin) {
        currentMin = v[i];
        s += '1';
      } else {
        s += '0';
      }
    }
    s += '1';
    return s;
}

void solve() {
  int n;
  cin>>n;
  vector<int> v(n);

  for (int i = 0; i < n; i++) cin>>v[i];
  string prefixString = getPrefixBitString(v), suffixString = getSuffixBitString(v);

  for (int j = 0; j < n; j++) {
    if (prefixString[j] == '1' || suffixString[j] == '1')
      cout<<'1';
    else
      cout<<'0';
  }
  cout<<'\n';
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
