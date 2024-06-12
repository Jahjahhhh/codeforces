#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++)
        cin >> v[i];
    
    int s = 0, d = 0;
    bool turn = true;

    while(!v.empty()) {
        if (v.front() > v.back()) {
            if (turn) {
                s += v.front();
            } else {
                d += v.front();
            }
            v.erase(v.begin());
        } else {
            if (turn) {
                s += v.back();
            } else {
                d += v.back();
            }
            v.erase(v.end() - 1);
        }
        turn = !turn;
        if (v.empty())
            break;
    }
    cout << s << ' ' << d;

    return 0;
}
