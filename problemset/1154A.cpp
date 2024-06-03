#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x[4];
    for (int i = 0; i < 4; i++)
        cin >> x[i];

    sort(x, x + 4);
    int abc = x[3];
    int ab = x[0];
    int ac = x[1];
    int bc = x[2];
    int a = abc - bc;
    int b = abc - ac;
    int c = abc - ab;
    cout << a << " " << b << " " << c << endl;
}
