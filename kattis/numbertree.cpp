#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, currIndex = 0, i = 0;
    string instr;
    cin>>H;
    int numOfNodes;
    if (H == 0) {
        numOfNodes = 1;
    } else {
         numOfNodes = pow(2, H+1) - 1;
    }
    cin>>instr;
    if (instr.empty()) {cout<<numOfNodes;return 0;}
    for (char c : instr) {
        if (c == 'L') {
            i = 2 * i + 1;
        } else if (c == 'R') {
            i = 2 * i + 2;
        }
    }
    
    cout<<numOfNodes-i;
    return 0;
}