// composed by liamslj
// I will become CM one day
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int mx = -1, a, b, c;
  cin>>a>>b>>c;

  mx = max(mx, a + b + c);
  mx = max(mx, a * b * c);

  mx = max(mx, a + b * c);
  mx = max(mx, (a + b) * c);

  mx = max(mx, a * b + c);
  mx = max(mx, a * (b + c));

  cout<<mx<<'\n';

  return 0;
}
