#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n;
    int len = 2 * n + 1;
    for (int i = 0; i < len; i++) {
        int spaces = abs(n - i);
        for (int s = 0; s < spaces; s++) cout << "  ";

        int l = n - spaces;
        for (int j = 0; j <= l; j++) {
            if (j > 0) cout << " ";
            cout << j;
        }
        for (int j = l - 1; j >= 0; --j) cout << " " << j;
        cout << endl;
    }
}
