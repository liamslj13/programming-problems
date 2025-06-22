#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, prev, count=0, temp;
  cin>>n;

  for (int i = 0; i < n; i++) {
    if (i == 0) {
      cin>>prev;
      continue;
    }
    cin>>temp;
    if (temp < prev) {
      count+=prev-temp;
    } else {
      prev = temp;
    }
  }

  cout<<count;
  return 0;
}
