// composed by liamslj
// WHAAAAAAAAAAAAAAAA
// I will become CM one day
#include <bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {

}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, xTotal=0, yTotal=0, zTotal=0, temp;
  cin>>n;

  for (int _ = 0; _ < n; _++) {
    cin>>temp;
    xTotal += temp;
    cin>>temp;
    yTotal += temp;
    cin>>temp;
    zTotal += temp;
  }

  if (xTotal == 0 && yTotal == 0 && zTotal == 0) cout<<"YES"<<'\n';
  else cout<<"NO"<<'\n';

  return 0;
}
