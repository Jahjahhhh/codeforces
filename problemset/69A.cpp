#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, y, z;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    cin >> n;
    while(n--) {
        cin >> x >> y >> z;
        sum1 += x;
        sum2 += y;
        sum3 += z;
    }
    sum1 == 0 && sum2 == 0 && sum3 == 0 ? cout << "YES" : cout << "NO";
    cout << endl;
}
