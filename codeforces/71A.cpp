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

  int n;
  string word;
  cin>>n;

  for (int i = 0; i < n; i++) {
    cin>>word;
    if (word.size() <= 10) {
      cout<<word;
    } else {
      cout<<word[0];
      cout<<word.size()-2;
      cout<<word[word.size()-1];
    }
    cout<<'\n';
  }

  return 0;
}
