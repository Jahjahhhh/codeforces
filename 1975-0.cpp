#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t; cin >> t;
    int n;
    while(t--) {
        cin >> n;
        vector<int> a;
        int num;
        for(int i = 0; i < n; i++) {
            cin >> num;
            a.push_back(num);
        }
            if(is_sorted(a.begin(), a.end())) {
                cout << "yes";
            } else {
                if(!a.empty()) {
                    int first = a.front();
                    a.erase(a.begin());
                    a.push_back(first);
                }
            }
        cout << "no";
    }
}
