#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned int ui;
    cin >> ui;
    bitset<64> x(ui);
    int count = 0;
    for(char i : x.to_string())
        if(i == '1') count++;
    cout << count << endl;
}
