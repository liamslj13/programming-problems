#include <bits/stdc++.h>
using namespace std;

// tungsten 29260
// gold 29 370
int main() {
    int w,s,r,i=0;
    cin>>w>>s;
    r = w % 29260;
    while (r != 0) {
        r = r - 110;
        i++;
    }
    cout<<i;
    return 0;   
}