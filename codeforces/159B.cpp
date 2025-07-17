// composed by liamslj
// I will become CM one day
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, count=0;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin>>a[i];
    if (a[i] == 4) {
      a[i] = 0;
      count++;
    }
  }

  for (int j = 0; j < n; j++) {
    if (a[j] == 0) continue;
    for (int k = j+1; k < n; k++) {
      if (a[k] == 0) continue;
      if (a[j] + a[k] < 4) {
        a[j] += a[k];
        a[k] = 0;
      } else if (a[j] + a[k] == 4) {
        a[k] = 0;
        break;
      }
    }
    count++;
  }

  cout<<count<<'\n';

  return 0;
}
