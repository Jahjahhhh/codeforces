#include <iostream>
 
using namespace std;
 
int main() {
    int t, x, y, n;
	cin >> t;
    while(t--) {
        cin >> x >> y >> n;
        int k = n - (n - y) % x;
        cout << k << endl;
    }
}
