#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

bool has_distinct_digits(string y) {
    unordered_set<char> digits;
    for (char digit : y) {
        if (digits.find(digit) != digits.end())
            return false;
        digits.insert(digit);
    }
    return true;
}

int main() {
    int y; cin >> y;
    y++;
    while (!has_distinct_digits(to_string(y)))
        y++;
    cout << y;
    return 0;
}
