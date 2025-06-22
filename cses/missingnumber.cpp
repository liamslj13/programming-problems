#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin>>n;
  vector<int> nums(n, 0);
  for (int i = 0; i < n-1; i++) {
    int temp;
    cin>>temp;
    nums[temp-1] = 1;
  }

  for (int i = 0; i < n; i++) {
    if (nums[i] == 0) {
      cout<<i+1;
      break;
    }
  }

  return 0;
}
