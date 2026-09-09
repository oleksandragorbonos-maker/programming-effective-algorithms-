#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    char f;
    int result = 0;

    cin >> n >> m >> f;

    if (f == 'S') {
        result = m + 2;
    } else {
        result = m + 1;
    }

    if (n <= result) {
        result = n;
    }

    cout << result;
    return 0;
}
