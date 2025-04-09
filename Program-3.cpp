#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cout << "Enter a: ";
    cin >> a;

    int limit = (a % 2 == 0) ? a - 1 : a;

    for (int i = 0; i < limit; i++) {
        cout << (2 * i + 1);
        if (i != limit - 1) cout << ", ";
    }

    cout << endl;
    return 0;
}
