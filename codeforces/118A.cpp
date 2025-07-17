#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool isVowel(char c) {
  return (c == 'a' || c == 'A' || c == 'o' || c == 'O' ||
          c == 'y' || c == 'Y' || c == 'e' || c == 'E' ||
          c == 'u' || c == 'U' || c == 'i' || c == 'I');
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string s;
  cin>>s;

  unordered_map<char, char> lowToUp = {
    {'Q','q'}, {'W', 'w'}, {'R','r'}, {'T','t'}, {'P','p'},
    {'S','s'}, {'D', 'd'}, {'F','f'}, {'G','g'}, {'H','h'},
    {'J','j'}, {'K', 'k'}, {'L','l'}, {'Z','z'}, {'X','x'},
    {'C','c'}, {'V', 'v'}, {'B','b'}, {'N','n'}, {'M','m'},
  };

  for (auto c : s) {
    if (!isVowel(c)) {
      cout<<'.';
      if (isupper(c)) cout<<lowToUp[c];
      else cout<<c;
    }
  }

  return 0;
}
