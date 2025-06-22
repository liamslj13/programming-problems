#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, i=1,j=2;
  cin>>n;

  if (n <= 3 && n != 1) {
    cout<<"NO SOLUTION";
    return 0;
  }

  while (j <= n) {
    cout<<j<<' ';
    j += 2;
  }

  while (i <= n) {
    cout<<i<<' ';
    i += 2;
  }

  return 0;
}
