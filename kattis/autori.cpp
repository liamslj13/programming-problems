#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char c;
    while (cin >> c) {
        if (isupper(c)) cout<<c;
    }
    
    return 0;
}