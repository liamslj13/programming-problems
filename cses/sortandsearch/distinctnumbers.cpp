#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, temp;
  set<int> nums;
  cin>>n;
  for (int _ = 0; _ < n; _++) {
    cin>>temp;
    nums.insert(temp);
  }

  cout<<nums.size();
  return 0;
}
