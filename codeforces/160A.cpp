// composed by liamslj
// I will become CM one day
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, arraySum = 0, mySum = 0, count = 0;
  cin>>n;
  vector<int> nums(n);

  for (int i = 0; i < n; i++) {
    cin>>nums[i];
    arraySum += nums[i];
  }
  sort(nums.begin(), nums.end());
  int j = nums.size()-1;
  while (arraySum >= mySum) {
    mySum += nums[j]; arraySum -= nums[j];
    count++;
    j--;
  }

  cout<<count;

  return 0;
}
