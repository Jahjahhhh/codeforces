#include <bits/stdc++.h>

using namespace std;

bool is_vowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s, ans;
    cin >> s;
    // to lower the entire string
    for(int i = 0; i < s.size(); i++)
        if(s[i] < 'a') s[i] += ' ';
    // remove vowels in entire string
    s.erase(remove_if(s.begin(), s.end(), is_vowel), s.end());
    // add '.' in front of consonants
    for(char c : s) {
        ans += '.';
        ans += c;
    }
    cout << ans << endl;
}
