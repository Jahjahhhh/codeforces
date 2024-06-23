#include <iostream>
#include <string>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        string a, b; cin >> b;
        if (b.length() >= 2) {
            a += b[0];
            a += b[1];
        } else a = b;

        for (int i = 2; i < b.length(); i++) {
            if (i % 2 == 1)
                a += b[i];
        }
        cout << a << endl;
    }
}
