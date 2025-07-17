// composed by liamslj
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

  int n, a,b,c, canSolve = 0;
  cin>>n;

  for (int i = 0; i < n; i++) {
    int count = 0;
    cin>>a>>b>>c;
    if (a == 1) count++;
    if (b == 1) count++;
    if (c == 1) count++;
    if (count >= 2) canSolve++;
  }

  cout<<canSolve;

  return 0;
}
